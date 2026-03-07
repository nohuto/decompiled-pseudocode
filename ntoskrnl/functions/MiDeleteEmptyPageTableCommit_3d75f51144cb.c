__int64 __fastcall MiDeleteEmptyPageTableCommit(__int64 *a1)
{
  _QWORD *v2; // r9
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned __int64 LeafVa; // r13
  __int64 v6; // r10
  unsigned __int64 v7; // r12
  char *v8; // r14
  _QWORD *v9; // rsi
  _KPROCESS *Process; // r15
  __int64 v11; // r8
  unsigned __int8 v12; // bl
  _QWORD *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rcx
  char *v16; // rcx
  __int64 i; // r14
  _QWORD *v18; // rcx
  __int64 j; // rsi
  _QWORD *v20; // rcx
  _OWORD v21[21]; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD *v24; // [rsp+1B0h] [rbp+B0h]

  memset(v21, 0, 0x88uLL);
  memset(&v21[9], 0, 0x88uLL);
  v2 = (_QWORD *)a1[21];
  v23 = 0;
  v24 = v2;
  v3 = v2[14];
  LeafVa = MiGetLeafVa(*v2);
  if ( LeafVa < a1[4] )
    LeafVa = a1[4];
  v7 = MiGetLeafVa(*(_QWORD *)(v4 + 8) + 8LL) - 1;
  if ( v7 > a1[5] )
    v7 = a1[5];
  if ( LeafVa == (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12 )
  {
    v8 = *(char **)v3;
    v16 = (char *)v3;
    if ( *(_QWORD *)v3 )
    {
      for ( ; *((_QWORD *)v8 + 1) != v6; v8 = (char *)*((_QWORD *)v8 + 1) )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(v3 + 16); ; i = *((_QWORD *)v8 + 2) )
      {
        v8 = (char *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || *((char **)v8 + 1) == v16 )
          break;
        v16 = v8;
      }
    }
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v3 + 48), 0x15u) )
    {
      v21[0] = *(_OWORD *)v3;
      v21[1] = *(_OWORD *)(v3 + 16);
      v21[2] = *(_OWORD *)(v3 + 32);
      v21[3] = *(_OWORD *)(v3 + 48);
    }
    else
    {
      v21[0] = *(_OWORD *)v3;
      v21[1] = *(_OWORD *)(v3 + 16);
      v21[2] = *(_OWORD *)(v3 + 32);
      v21[3] = *(_OWORD *)(v3 + 48);
      v21[4] = *(_OWORD *)(v3 + 64);
      v21[5] = *(_OWORD *)(v3 + 80);
      v21[6] = *(_OWORD *)(v3 + 96);
      v21[7] = *(_OWORD *)(v3 + 112);
      *(_QWORD *)&v21[8] = *(_QWORD *)(v3 + 128);
    }
    HIDWORD(v21[1]) = (LeafVa >> 12) - 1;
    BYTE1(v21[2]) = ((LeafVa >> 12) - 1) >> 32;
    v8 = (char *)v21 + 1;
  }
  if ( v7 == (((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF) )
  {
    v9 = *(_QWORD **)(v3 + 8);
    v18 = (_QWORD *)v3;
    if ( v9 )
    {
      v20 = (_QWORD *)*v9;
      if ( *v9 )
      {
        do
        {
          v9 = v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
      }
    }
    else
    {
      for ( j = *(_QWORD *)(v3 + 16); ; j = v9[2] )
      {
        v9 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v9 || (_QWORD *)*v9 == v18 )
          break;
        v18 = v9;
      }
    }
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v3 + 48), 0x15u) )
    {
      v21[9] = *(_OWORD *)v3;
      v21[10] = *(_OWORD *)(v3 + 16);
      v21[11] = *(_OWORD *)(v3 + 32);
      v21[12] = *(_OWORD *)(v3 + 48);
    }
    else
    {
      v21[9] = *(_OWORD *)v3;
      v21[10] = *(_OWORD *)(v3 + 16);
      v21[11] = *(_OWORD *)(v3 + 32);
      v21[12] = *(_OWORD *)(v3 + 48);
      v21[13] = *(_OWORD *)(v3 + 64);
      v21[14] = *(_OWORD *)(v3 + 80);
      v21[15] = *(_OWORD *)(v3 + 96);
      v21[16] = *(_OWORD *)(v3 + 112);
      *(_QWORD *)&v21[17] = *(_QWORD *)(v3 + 128);
    }
    DWORD2(v21[10]) = (v7 >> 12) + 1;
    LOBYTE(v21[11]) = ((v7 >> 12) + 1) >> 32;
    v9 = (_QWORD *)((char *)&v21[9] + 1);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v11) = MiLockWorkingSetShared(a1[3]);
  v12 = v11;
  MiCaptureDeleteHierarchy(LeafVa, v7, v11, &v23);
  MiUnlockWorkingSetShared(a1[3], v12);
  MiReturnPageTablePageCommitment(LeafVa, v7, (_DWORD)Process, (_DWORD)v8, (__int64)v9, v3, (__int64)&v23);
  v13 = v24;
  result = v24[4];
  v15 = *(_QWORD *)(result + 32);
  if ( v15 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], -v15);
    result = v13[4];
    *(_QWORD *)(result + 32) = 0LL;
  }
  return result;
}
