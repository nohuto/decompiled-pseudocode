__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  int v5; // r14d
  __int64 v6; // r12
  __int64 v7; // rax
  char v8; // bl
  __int64 v9; // rbp
  __int64 v10; // rdi
  int v11; // esi
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned int v20; // r14d
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 LeafVa; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  signed __int32 v36[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-88h]
  __int64 v38; // [rsp+28h] [rbp-80h]
  __int64 v39; // [rsp+30h] [rbp-78h] BYREF
  __int64 v40; // [rsp+38h] [rbp-70h]
  __int64 v41; // [rsp+40h] [rbp-68h]
  unsigned __int64 v42; // [rsp+48h] [rbp-60h]
  __int64 v43; // [rsp+50h] [rbp-58h]
  int v47; // [rsp+C8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 168);
  v4 = a1;
  v43 = v3;
  v5 = a3;
  v6 = a2;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v39 = v7;
  v8 = v7;
  if ( (v7 & 1) == 0 )
    return 0LL;
  v9 = *(_QWORD *)(v3 + 16);
  v10 = 0LL;
  v41 = v9;
  v11 = 0;
  if ( (v7 & 0x80u) != 0LL )
  {
    v17 = v6 << 25;
    v18 = 0LL;
    goto LABEL_17;
  }
  v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v39) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v13 = 1LL;
  v42 = v12;
  v40 = 1LL;
  if ( v5 == 3 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 24) + 184LL) & 7) == 1 )
    {
      v13 = 2LL;
      v27 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v40 = 2LL;
      if ( v27 != 2 )
        return 0LL;
    }
    else
    {
      v13 = 1LL;
    }
  }
  if ( v5 <= ((*(unsigned __int8 *)(v4 + 4) >> 2) & 7) )
  {
    v15 = v6 << 25;
    v16 = 0;
    v37 = v6 << 25;
    v47 = 0;
    v38 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(v12 + 32) != 1 )
      return 0LL;
    if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != v13 )
      return 0LL;
    v37 = v6 << 25;
    v38 = 0LL;
    if ( RtlCompareMemoryUlong((PVOID)(v6 << 25 >> 16), 0x1000uLL, 0) != 4096 )
      return 0LL;
    v15 = v37;
    v16 = 1;
    v47 = 1;
  }
  if ( v5 >= 1 )
  {
    if ( v5 == 1 )
    {
      if ( *(_DWORD *)(v3 + 24) == 2 )
      {
        _InterlockedOr(v36, 0);
        v19 = v38;
        v20 = KiTbFlushTimeStamp;
        v21 = v41;
        v22 = 512LL;
        v23 = (v15 - v38) >> 16;
        v24 = v23;
        do
        {
          v25 = *(_QWORD *)v24;
          if ( v24 >= 0xFFFFF6FB7DBED000uLL
            && v24 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v25 & 1) != 0
            && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v29 = *((_QWORD *)&Flink->Flink + ((v24 >> 3) & 0x1FF));
              v30 = v25 | 0x20;
              if ( (v29 & 0x20) == 0 )
                v30 = *(_QWORD *)v24;
              v25 = v30;
              if ( (v29 & 0x42) != 0 )
                v25 = v30 | 0x42;
            }
          }
          if ( qword_140C657C0 && (v25 & 0x10) == 0 )
            v25 &= ~qword_140C657C0;
          v26 = HIDWORD(v25);
          if ( v26 && (unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v26, v20, 0xFFFFFFFFLL) )
            MiInsertTbFlushEntry(v21, (v10 + (v23 << 25) - v19) >> 16, 1LL);
          v24 += 8LL;
          v10 += 0x10000000LL;
          --v22;
        }
        while ( v22 );
        v8 = v39;
        v12 = v42;
        v5 = a3;
        v4 = a1;
        v3 = v43;
        v6 = a2;
        goto LABEL_13;
      }
      if ( *(_DWORD *)(v3 + 24) <= 2u )
      {
LABEL_13:
        v16 = v47;
        v11 = 1;
      }
    }
    if ( !(unsigned int)MiEvictPageTableLock(*(_QWORD *)(v4 + 24), v6, ZeroPte, v16) )
      return 0LL;
    LODWORD(v10) = 1;
  }
  MiAddSystemPageTableToList(v3 + 8, v12, v40);
  v17 = v37;
  v18 = v38;
  v9 = v41;
LABEL_17:
  if ( (v8 & 1) != 0 && v5 >= 1 && v8 < 0 )
  {
    MiInsertLargeTbFlushEntry(v9, v5, v6);
  }
  else
  {
    MiInsertTbFlushEntry(v9, (v17 - v18) >> 16, 1LL);
    if ( v5 == 1 && !v11 )
    {
      LeafVa = MiGetLeafVa(v6);
      MiInsertTbFlushEntry(v9, LeafVa, 512LL);
    }
  }
  if ( !(_DWORD)v10 )
  {
    if ( v5 == 3 )
    {
      MiWriteTopLevelPxe((_QWORD *)v6, ZeroPte);
      return 0LL;
    }
    v32 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow(v34, v33, v35) )
      {
        if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
          v32 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v6 = v32;
        MiWritePteShadow(v6, v32);
        return 0LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v32 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v6 = v32;
  }
  return 0LL;
}
