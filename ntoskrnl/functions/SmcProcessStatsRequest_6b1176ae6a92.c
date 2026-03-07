__int64 __fastcall SmcProcessStatsRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  int CacheStats; // ecx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 ProcessPartition; // rax
  _OWORD *v15; // rax
  _BYTE v17[1136]; // [rsp+20h] [rbp-498h] BYREF

  memset(v17, 0, 0x468uLL);
  if ( a2 == 1128 )
  {
    if ( a4 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v9 = a1;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 1127) = *(_BYTE *)(v9 + 1127);
    }
    v10 = (_OWORD *)a1;
    v11 = v17;
    v12 = 8LL;
    v13 = 8LL;
    do
    {
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v11[3] = v10[3];
      v11[4] = v10[4];
      v11[5] = v10[5];
      v11[6] = v10[6];
      v11 += 8;
      *(v11 - 1) = v10[7];
      v10 += 8;
      --v13;
    }
    while ( v13 );
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    *((_QWORD *)v11 + 12) = *((_QWORD *)v10 + 12);
    if ( v17[0] == 3 )
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
      CacheStats = SmcGetCacheStats(ProcessPartition + 2128, v17);
      if ( CacheStats >= 0 )
      {
        v15 = v17;
        do
        {
          *(_OWORD *)a1 = *v15;
          *(_OWORD *)(a1 + 16) = v15[1];
          *(_OWORD *)(a1 + 32) = v15[2];
          *(_OWORD *)(a1 + 48) = v15[3];
          *(_OWORD *)(a1 + 64) = v15[4];
          *(_OWORD *)(a1 + 80) = v15[5];
          *(_OWORD *)(a1 + 96) = v15[6];
          a1 += 128LL;
          *(_OWORD *)(a1 - 16) = v15[7];
          v15 += 8;
          --v12;
        }
        while ( v12 );
        *(_OWORD *)a1 = *v15;
        *(_OWORD *)(a1 + 16) = v15[1];
        *(_OWORD *)(a1 + 32) = v15[2];
        *(_OWORD *)(a1 + 48) = v15[3];
        *(_OWORD *)(a1 + 64) = v15[4];
        *(_OWORD *)(a1 + 80) = v15[5];
        *(_QWORD *)(a1 + 96) = *((_QWORD *)v15 + 12);
        *a3 = 1128;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return (unsigned int)CacheStats;
}
