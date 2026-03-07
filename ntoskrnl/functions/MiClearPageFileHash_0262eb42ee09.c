void __fastcall MiClearPageFileHash(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r15
  _QWORD *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // di
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // rax
  __int64 Next; // rcx
  __int64 v15; // rdi
  char v16; // si
  __int64 v17; // rbx
  unsigned __int64 v18; // r9
  __int64 v19; // r8
  int v20; // eax
  unsigned __int64 v21; // rbx
  __int64 v22; // r8
  bool v23; // zf
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-20h]
  int v25; // [rsp+38h] [rbp-18h] BYREF
  int v26; // [rsp+3Ch] [rbp-14h]
  unsigned __int64 v27; // [rsp+40h] [rbp-10h]
  __int64 updated; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 216);
  v26 = 0;
  if ( !v3 )
    return;
  v4 = v3 + dword_140C692CC * a2;
  v5 = (_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
  updated = v6;
  v7 = v6;
  if ( (v6 & 1) == 0 )
  {
    if ( qword_140C657C0 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C657C0;
    updated = MiUpdatePageFileHighInPte(v7, (unsigned int)(HIDWORD(v6) - 1));
    v8 = updated;
    v9 = 0;
    v10 = updated;
    if ( !MiPteInShadowRange((unsigned __int64)v5) )
      goto LABEL_14;
    if ( MiPteHasShadow() )
    {
      v9 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v12 = (v8 & 1) == 0;
        goto LABEL_12;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v12 = (v8 & 1) == 0;
LABEL_12:
      if ( !v12 )
        v10 |= 0x8000000000000000uLL;
    }
LABEL_14:
    *v5 = v10;
    if ( v9 )
      MiWritePteShadow((__int64)v5, v10, v11);
    return;
  }
  v12 = *(_DWORD *)v4 == 1;
  v25 = 1;
  v27 = 0LL;
  if ( v12 && !dword_140C67BC4 )
    MiPageHashBugCheck(0x62uLL, a2, v4);
  if ( dword_140C692D0 )
  {
    v13 = *(_QWORD *)(v4 + 8);
    if ( v13 )
    {
      if ( (v13 & 1) == 0 && !dword_140C67BC4 )
        MiPageHashBugCheck(0x61uLL, a2, v4);
      v27 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
      v26 = *(_DWORD *)(v4 + 4);
    }
  }
  MiWriteEntirePageHashEntry(v4, &v25);
  ListEntry = (PSLIST_ENTRY)(48
                           * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&updated) >> 12) & 0xFFFFFFFFFFLL)
                           - 0x220000000000LL);
  Next = (__int64)ListEntry[1].Next;
  HIDWORD(v15) = HIDWORD(Next);
  if ( qword_140C657C0 && (Next & 0x10) == 0 )
    v15 = Next & ~qword_140C657C0;
  LODWORD(v15) = HIDWORD(v15) - 1;
  updated = MiUpdatePageFileHighInPte(Next, (unsigned int)(HIDWORD(v15) - 1));
  v16 = updated;
  v17 = updated;
  if ( !MiPteInShadowRange(v18) )
    goto LABEL_36;
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v16 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
LABEL_36:
    v20 = 0;
    goto LABEL_37;
  }
  v20 = 1;
  if ( !HIBYTE(word_140C6697C) && (v16 & 1) != 0 )
    v17 |= 0x8000000000000000uLL;
LABEL_37:
  ListEntry[1].Next = (_SLIST_ENTRY *)v17;
  if ( v20 )
    MiWritePteShadow((__int64)&ListEntry[1], v17, v19);
  if ( HIDWORD(v15) == 1 )
  {
    v21 = ZeroPte;
    --*(_DWORD *)(a1 + 208);
    if ( MiPteInShadowRange((unsigned __int64)v5) )
    {
      if ( MiPteHasShadow() )
      {
        LODWORD(v15) = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v23 = (ZeroPte & 1) == 0;
          goto LABEL_46;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v23 = (ZeroPte & 1) == 0;
LABEL_46:
        if ( !v23 )
          v21 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v5 = v21;
    if ( (_DWORD)v15 )
      MiWritePteShadow((__int64)v5, v21, v22);
    KeFlushSingleTb(v4, 0, 1u);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), ListEntry);
  }
}
