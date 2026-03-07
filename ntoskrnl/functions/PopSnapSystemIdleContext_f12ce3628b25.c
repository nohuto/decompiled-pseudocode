void __fastcall PopSnapSystemIdleContext(__int64 *a1, unsigned int *a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rdx
  _OWORD *v6; // rcx
  int *v7; // rax
  __int128 v8; // xmm1
  _DWORD *v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  Pool2 = ExAllocatePool2(256LL, 328LL, 1734960208LL);
  v5 = 2LL;
  *a1 = Pool2;
  v6 = (_OWORD *)Pool2;
  v7 = &PopSystemIdleContext;
  do
  {
    *v6 = *(_OWORD *)v7;
    v6[1] = *((_OWORD *)v7 + 1);
    v6[2] = *((_OWORD *)v7 + 2);
    v6[3] = *((_OWORD *)v7 + 3);
    v6[4] = *((_OWORD *)v7 + 4);
    v6[5] = *((_OWORD *)v7 + 5);
    v6[6] = *((_OWORD *)v7 + 6);
    v6 += 8;
    v8 = *((_OWORD *)v7 + 7);
    v7 += 32;
    *(v6 - 1) = v8;
    --v5;
  }
  while ( v5 );
  *v6 = *(_OWORD *)v7;
  v6[1] = *((_OWORD *)v7 + 1);
  v6[2] = *((_OWORD *)v7 + 2);
  v6[3] = *((_OWORD *)v7 + 3);
  *((_QWORD *)v6 + 8) = *((_QWORD *)v7 + 8);
  *a2 = 0;
  if ( dword_140C09924 )
  {
    v9 = &unk_140C0984C;
    v10 = 4LL;
    do
    {
      if ( !*((_BYTE *)v9 - 4) )
      {
        if ( *v9 )
        {
          if ( *v9 == 1 )
            v11 = *(v9 - 3) - *(v9 - 5);
          else
            v11 = -1;
        }
        else
        {
          v11 = 0;
        }
        if ( v11 > *a2 )
          *a2 = v11;
      }
      v9 += 14;
      --v10;
    }
    while ( v10 );
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
}
