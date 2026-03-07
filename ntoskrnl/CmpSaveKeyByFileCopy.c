__int64 __fastcall CmpSaveKeyByFileCopy(__int64 a1, __int64 a2)
{
  _DWORD *Pool2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r15d
  unsigned int i; // ebx
  ULONG v13; // r14d
  int v14; // eax
  NTSTATUS v15; // eax
  int v16; // eax
  int v17; // eax
  _DWORD v19[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v20; // [rsp+38h] [rbp-18h]
  int v21; // [rsp+40h] [rbp-10h]

  v19[1] = 0;
  Pool2 = (_DWORD *)ExAllocatePool2(265LL, 0x10000LL, 538987843LL);
  if ( Pool2 )
  {
    CmpBecomeActiveFlusherAndReconciler(a1);
    v9 = a1;
    if ( (*(_DWORD *)(a1 + 4224) & 2) != 0 )
    {
      v5 = -1073741670;
LABEL_21:
      *(_QWORD *)(v9 + 1560) = 0LL;
      CmpFinishBeingActiveFlusherAndReconciler(a1, v6, v7, v8);
      ExFreePoolWithTag(Pool2, 0);
      return v5;
    }
    *(_QWORD *)(a1 + 1560) = a2;
    v10 = CmpFileRead(a1, 0, 0, (char *)Pool2, 0x1000u);
    v9 = a1;
    if ( v10 < 0 )
      goto LABEL_6;
    v11 = Pool2[10];
    v19[0] = 0;
    ++Pool2[1];
    v20 = Pool2;
    v21 = 4096;
    if ( (int)CmpFileWrite(a1, 2LL, (__int64)v19, 1u, 0) < 0 )
      goto LABEL_8;
    for ( i = 0; i < v11; i += v13 )
    {
      v13 = v11 - i;
      if ( v11 - i > 0x10000 )
        v13 = 0x10000;
      v14 = CmpFileRead(a1, 0, i + 4096, (char *)Pool2, v13);
      v9 = a1;
      if ( v14 < 0 )
        goto LABEL_6;
      v19[0] = i + 4096;
      v20 = Pool2;
      v21 = v13;
      if ( (int)CmpFileWrite(a1, 2LL, (__int64)v19, 1u, 0) < 0 )
        goto LABEL_8;
    }
    v15 = CmpFileFlush(a1, 2u);
    v9 = a1;
    if ( v15 < 0 )
      goto LABEL_6;
    v16 = CmpFileRead(a1, 0, 0, (char *)Pool2, 0x1000u);
    v9 = a1;
    if ( v16 < 0
      || (++Pool2[1],
          ++Pool2[2],
          v19[0] = 0,
          v20 = Pool2,
          v21 = 4096,
          v17 = CmpFileWrite(a1, 2LL, (__int64)v19, 1u, 0),
          v9 = a1,
          v17 < 0) )
    {
LABEL_6:
      v5 = -1073741491;
      goto LABEL_21;
    }
    if ( CmpFileFlush(a1, 2u) < 0 )
LABEL_8:
      v5 = -1073741491;
    else
      v5 = 0;
    v9 = a1;
    goto LABEL_21;
  }
  return (unsigned int)-1073741670;
}
