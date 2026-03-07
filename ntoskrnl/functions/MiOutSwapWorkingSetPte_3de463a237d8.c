__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r15
  int v5; // r14d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r12
  char v12; // bl
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r8
  __int64 *v18; // r9
  __int64 v19; // r13
  __int64 *v20; // rcx
  unsigned __int64 v22; // rax
  ULONG_PTR v23; // rbp
  ULONG_PTR v24; // rax
  char v25; // cl
  __int64 v26; // rdx
  char v27; // si
  unsigned __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  __int64 updated; // rax
  __int64 v34; // r9
  bool v35; // zf
  unsigned __int64 v36; // rdx
  ULONG_PTR v37; // [rsp+20h] [rbp-48h]
  __int64 v38; // [rsp+28h] [rbp-40h]
  _QWORD *v39; // [rsp+28h] [rbp-40h]
  __int64 v40; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v41; // [rsp+70h] [rbp+8h]
  int v42; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v38 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v5 = 0;
  v6 = 0LL;
  v37 = 0LL;
  v7 = 0LL;
  v40 = *(_QWORD *)(v3 + 24);
  v8 = 0;
  while ( 1 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2);
    v43 = v9;
    v10 = v9;
    if ( (v9 & 1) != 0 )
    {
      v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v43) >> 12) & 0xFFFFFFFFFFLL;
      if ( v22 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v22 - 0x21FFFFFFFFD8LL), 0x36u) )
        return 0LL;
      v23 = 48 * v22 - 0x220000000000LL;
      if ( *(__int64 *)(v23 + 40) >= 0 )
      {
        if ( (*(_QWORD *)(v23 + 8) | 0x8000000000000000uLL) != a2 )
          return 0LL;
        v42 = 0;
        v12 = 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v42);
          while ( *(__int64 *)(v23 + 24) < 0 );
        }
        if ( (*(_BYTE *)(v23 + 34) & 8) != 0 )
          goto LABEL_46;
        v13 = *(_QWORD *)(v23 + 16);
        if ( (v13 & 2) != 0 )
        {
          v6 = *(_QWORD *)(v23 + 16);
          *(_QWORD *)(v23 + 16) = v13 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        if ( !*(_DWORD *)(v3 + 144)
          && (*(_WORD *)(v23 + 32) != 1
           || (*(_BYTE *)(v38 + 184) & 7) == 0
           && (MiGetWsleContents(0xFFFFF68000000000uLL, (__int64)(a2 << 25) >> 16) & 0xF) == 8) )
        {
          goto LABEL_46;
        }
        if ( (v43 & 0x42) == 0 && (*(_BYTE *)(v23 + 34) & 0x10) == 0 )
        {
          if ( (*(_DWORD *)(v23 + 16) & 4) == 0 )
          {
LABEL_46:
            v11 = v40;
            goto LABEL_47;
          }
          v12 = 3;
        }
        v7 = MiCaptureDirtyBitToPfn(v23);
        v14 = *(_BYTE *)(v23 + 34) >> 6;
        if ( v14 != 1 )
        {
          if ( v14 == 2 )
          {
            v12 |= 4u;
          }
          else if ( !v14 )
          {
            v12 |= 8u;
          }
        }
        v11 = v40;
        if ( *(_DWORD *)(v3 + 32) == -1 )
        {
          v43 = MiTransferSoftwarePte(
                  *(_QWORD *)(v23 + 16),
                  *(_QWORD *)(v40 + 8LL * *(unsigned int *)(v40 + 1188) + 17056),
                  2LL,
                  0LL);
          *(_QWORD *)(v23 + 16) = v43;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = *(unsigned int *)(v3 + 32);
        v8 = v12 & 0xFE;
        v16 = *(_QWORD **)v3;
        v39 = *(_QWORD **)v3;
        if ( (_DWORD)v15 != -1 )
        {
          v41 = (unsigned __int64 *)(16 * v15 + v3 + 40);
          if ( (unsigned int)v15 >= 5 || !*(_DWORD *)(16 * v15 + v3 + 40 + 8) )
            goto LABEL_30;
          MiReservePageFileSpaceForPage(v11, a2, 128LL);
          v32 = *v41;
          if ( qword_140C657C0 && (v32 & 0x10) == 0 )
            v32 &= ~qword_140C657C0;
          updated = MiUpdatePageFileHighInPte(*v41, HIDWORD(v32) + 1);
          v35 = (*(_DWORD *)(v34 + 8))-- == 1;
          *(_QWORD *)v34 = updated;
          if ( v35 )
            ++*(_DWORD *)(v3 + 32);
          v16 = v39;
          v8 |= 0x10u;
        }
      }
      else
      {
        v16 = *(_QWORD **)(v3 + 8);
        if ( !v16 )
          return 0LL;
        v11 = v40;
      }
      v17 = v16[2];
      if ( v17 < v16[1] )
      {
        v18 = (__int64 *)(*v16 + 16 * v17);
        v19 = (__int64)(a2 << 25) >> 16;
        v20 = v18 - 2;
        if ( !v17 || *v20 + v20[1] != v19 )
        {
          v20 = (__int64 *)(*v16 + 16 * v17);
          v16[2] = v17 + 1;
          *v18 = v19;
          v18[1] = 0LL;
        }
        v20[1] += 4096LL;
        ++v16[3];
        if ( (v8 & 2) != 0 )
          ++*(_QWORD *)(v3 + 136);
        if ( (v8 & 4) != 0 )
        {
          ++*(_QWORD *)(v3 + 120);
        }
        else if ( (v8 & 8) != 0 )
        {
          ++*(_QWORD *)(v3 + 128);
        }
      }
      goto LABEL_30;
    }
    if ( (v9 & 0x400) != 0 )
      return 0LL;
    if ( (v9 & 0x800) == 0 )
      break;
    v24 = MiLockTransitionLeafPageEx(a2);
    v37 = v24;
    v23 = v24;
    if ( v24 )
    {
      v25 = *(_BYTE *)(v24 + 34);
      if ( (v25 & 0x28) == 0 )
      {
        v26 = *(_QWORD *)(v24 + 16);
        if ( (v26 & 2) != 0 )
        {
          v6 = *(_QWORD *)(v24 + 16);
          if ( *(_WORD *)(v24 + 32) || (v25 & 7) != 3 )
          {
            *(_QWORD *)(v24 + 16) = v26 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            MiUnlinkPageFromListEx(v24, 0LL);
            *(_QWORD *)(v23 + 16) &= ~2uLL;
            MiInsertPageInList(v23);
          }
        }
      }
      goto LABEL_46;
    }
  }
  if ( (v9 & 2) == 0 )
  {
LABEL_7:
    v11 = v40;
    goto LABEL_31;
  }
  v27 = v9 & 0xFD;
  v43 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  v28 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (unsigned int)MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow(v30, v29, v31) )
    {
      v5 = 1;
      if ( HIBYTE(word_140C6697C) || (v27 & 1) == 0 )
        goto LABEL_61;
LABEL_60:
      v28 = v10 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
      goto LABEL_61;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v27 & 1) != 0 )
      goto LABEL_60;
  }
LABEL_61:
  *(_QWORD *)a2 = v28;
  v6 = v10;
  if ( !v5 )
    goto LABEL_7;
  MiWritePteShadow(a2, v28);
  v23 = v37;
  v11 = v40;
LABEL_30:
  if ( (v8 & 1) == 0 )
    goto LABEL_31;
LABEL_47:
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_31:
  if ( v6 )
  {
    v36 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v6 & 4) == 0 )
      v36 = v6;
    MiReleasePageFileInfo(v11, v36, 0);
  }
  if ( v7 )
    MiReleasePageFileInfo(v11, v7, 0);
  return 0LL;
}
