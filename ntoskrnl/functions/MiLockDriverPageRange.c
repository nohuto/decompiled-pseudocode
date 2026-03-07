__int64 __fastcall MiLockDriverPageRange(__int64 *a1, unsigned int a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 *v6; // r15
  __int64 v7; // r10
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 *v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // edi
  unsigned __int64 v19; // r12
  __int64 v20; // rcx
  char v21; // cl
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 v25; // [rsp+28h] [rbp-B1h]
  unsigned __int64 v26; // [rsp+30h] [rbp-A9h]
  unsigned __int64 BugCheckParameter1; // [rsp+38h] [rbp-A1h]
  __int64 v28; // [rsp+40h] [rbp-99h] BYREF
  __int64 v29; // [rsp+48h] [rbp-91h]
  unsigned __int64 *v30; // [rsp+50h] [rbp-89h]
  __int64 v31; // [rsp+58h] [rbp-81h] BYREF
  __int64 v32; // [rsp+60h] [rbp-79h]
  __int128 v33[12]; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v35; // [rsp+140h] [rbp+67h]

  v35 = a2;
  v6 = a1;
  memset(&v33[1], 0, 0x68uLL);
  v7 = *v6;
  v8 = 0;
  *(_QWORD *)&v33[0] = 0LL;
  v29 = 0LL;
  BugCheckParameter1 = *(_QWORD *)(v7 + 48) + ((unsigned __int64)a2 << 12);
  v9 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = v9;
  v10 = v9;
  if ( (v6[12] & 2) != 0 )
    v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v33[0] + 1) = 0LL;
  v30 = 0LL;
  v11 = &qword_140C65598;
  v32 = (a5 + 48) & -(__int64)(a5 != 0);
  v12 = 0;
  while ( *v11 != v7 )
  {
    ++v12;
    ++v11;
    if ( v12 )
      goto LABEL_8;
  }
  v30 = (unsigned __int64 *)((char *)&unk_140C655A0 + 16 * v12);
LABEL_8:
  v13 = v6[2];
LABEL_9:
  v14 = 0LL;
  v25 = MiLockWorkingSetShared(v13);
LABEL_30:
  v19 = v35;
  while ( (unsigned int)v19 <= a3 )
  {
    if ( !v14 )
      goto LABEL_15;
    if ( (v9 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v13, v14);
LABEL_15:
      v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v13, v14, 0);
    }
    if ( v30 && v19 < *v30 && _bittest64((const signed __int64 *)(v30[1] + 8 * (v19 >> 6)), v19 & 0x3F) )
      goto LABEL_56;
    if ( v6[7] && v19 < v6[6] && _bittest64((const signed __int64 *)(v6[7] + 8 * (v19 >> 6)), v19 & 0x3F) )
      goto LABEL_63;
    v31 = MI_READ_PTE_LOCK_FREE(v10);
    if ( (v31 & 1) != 0 )
    {
      v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFFLL;
      if ( (a1[12] & 2) != 0 )
        v15 += (v9 >> 3) & 0x1FF;
      v16 = 48 * v15 - 0x220000000000LL;
      v17 = *(_QWORD *)(v16 + 40);
      if ( v17 >= 0 )
        goto LABEL_33;
      if ( (v17 & 0x10000000000LL) != 0 || *(__int64 *)(v16 + 8) <= 0 )
      {
        if ( (*(_BYTE *)(v13 + 184) & 7) != 1 )
        {
          MiUnlockPageTableInternal(v13, v14);
          MiUnlockWorkingSetShared(v13, v25);
          v19 = v35;
          v6 = a1;
          MiMakeDriverPagesPrivate(*a1, (ULONG_PTR *)v10, v10 + 8LL * (a3 - v35), 8);
          MiLockWorkingSetShared(v13);
          MiLockPageTableInternal(v13, v14, 0);
          goto LABEL_10;
        }
LABEL_33:
        if ( _bittest64((const signed __int64 *)a1[5], v19) )
        {
          v6 = a1;
        }
        else
        {
          LODWORD(v28) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v28);
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          v20 = 48 * v15 - 0x220000000000LL;
          if ( (*(_BYTE *)(v13 + 184) & 7) == 1 )
          {
            if ( !(unsigned int)MiAddLockedPageCharge(v20, 0) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v8 = -1073741670;
              goto LABEL_67;
            }
          }
          else
          {
            MiReferenceDriverPage(v20);
          }
          v21 = a4;
          if ( (a4 & 1) != 0 && ((*(_QWORD *)(v16 + 40) >> 60) & 7) != 3 )
          {
            *(_QWORD *)&v33[0] = BugCheckParameter1;
            KeSetPagePrivilege(v15, v33, 256);
            v21 = a4;
            *((_DWORD *)a1 + 24) |= 1u;
          }
          if ( v32 )
            *(_QWORD *)(v32 + 8 * v19) = v15;
          if ( (v21 & 4) != 0 )
          {
            v22 = 0LL;
          }
          else
          {
            v22 = MiCaptureDirtyBitToPfn(48 * v15 - 0x220000000000LL);
            if ( v22 )
            {
              v23 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
              v29 = v23;
              goto LABEL_51;
            }
          }
          v23 = v29;
LABEL_51:
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v22 )
            MiReleasePageFileInfo(v23, v22, 1);
          v6 = a1;
          _bittestandset64((signed __int64 *)a1[5], v19);
        }
        v9 = v26;
        goto LABEL_63;
      }
      v6 = a1;
      v18 = MiCopyOnWrite(BugCheckParameter1, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
      v19 = v35;
      if ( v18 < 0 )
      {
        MiUnlockPageTableInternal(v13, v14);
        MiUnlockWorkingSetShared(v13, v25);
        MiCopyOnWriteCheckConditions(v13, (unsigned int)v18);
        MiLockWorkingSetShared(v13);
        MiLockPageTableInternal(v13, v14, 0);
        v9 = v26;
        goto LABEL_30;
      }
LABEL_10:
      v9 = v26;
    }
    else
    {
      MiUnlockPageTableInternal(v13, v14);
      MiUnlockWorkingSetShared(v13, v25);
      LOWORD(v33[1]) = 6;
      *((_QWORD *)&v33[1] + 1) = 0LL;
      memset(&v33[2], 0, 24);
      if ( (int)MmAccessFault(0LL, BugCheckParameter1, 0, (ULONG_PTR)&v33[1] + 1) >= 0 )
        goto LABEL_9;
      MiLockWorkingSetShared(v13);
      MiLockPageTableInternal(v13, v14, 0);
LABEL_56:
      if ( (a4 & 2) == 0
        && (!v6[11] || v19 >= v6[10] || !_bittest64((const signed __int64 *)(v6[11] + 8 * (v19 >> 6)), v19 & 0x3F)) )
      {
        v8 = -1073741701;
        goto LABEL_67;
      }
LABEL_63:
      BugCheckParameter1 += 4096LL;
      v9 += 8LL;
      v19 = v35 + 1;
      v26 = v9;
      ++v35;
      if ( (v9 & 0xFFF) == 0 || (v6[12] & 2) == 0 )
        v10 += 8LL;
    }
  }
  if ( a5 )
    *(_WORD *)(a5 + 10) |= 2u;
LABEL_67:
  MiUnlockPageTableInternal(v13, v14);
  MiUnlockWorkingSetShared(v13, v25);
  return v8;
}
