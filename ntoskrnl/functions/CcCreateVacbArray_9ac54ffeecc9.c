__int64 __fastcall CcCreateVacbArray(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v3; // r15d
  __int64 v6; // rdi
  size_t v7; // r14
  char *PoolWithTag; // rsi
  __int64 result; // rax
  unsigned int v10; // edx
  int v11; // ecx
  char *v12; // rcx
  char *v13; // r8
  char **v14; // rax
  char *v15; // rdx

  v2 = 0;
  v3 = 0;
  if ( HIDWORD(a2) )
  {
    if ( a2 < 0 )
      return 3221225536LL;
    goto LABEL_17;
  }
  if ( (unsigned int)a2 > 0x100000 )
  {
    LODWORD(v6) = 8 * ((unsigned int)a2 >> 18);
    v7 = (unsigned int)v6;
    if ( (_DWORD)v6 == 32 )
      goto LABEL_4;
    if ( (unsigned int)v6 <= 0x400 )
    {
      if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 && a2 > 0x200000 )
      {
        v2 = 1;
        LODWORD(v6) = ((v6 + 15) & 0xFFFFFFF0) + v6;
      }
      if ( (_DWORD)v7 == 1024 )
      {
        LODWORD(v6) = v6 + 8;
        v3 = 1;
      }
      goto LABEL_14;
    }
LABEL_17:
    v10 = 0;
    v7 = 1024LL;
    LODWORD(v6) = 1032;
    v11 = 25;
    v3 = 1;
    do
    {
      v11 += 7;
      ++v10;
    }
    while ( a2 > 1LL << v11 );
    if ( v10 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v10 + 1;
LABEL_14:
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v6, 0x70566343u);
    if ( !PoolWithTag )
    {
      result = 3221225626LL;
      *(_DWORD *)(a1 + 160) = -1073741670;
      return result;
    }
    goto LABEL_5;
  }
  LODWORD(v6) = HIDWORD(a2) + 32;
  v7 = (unsigned int)(HIDWORD(a2) + 32);
LABEL_4:
  PoolWithTag = (char *)(a1 + 56);
LABEL_5:
  memset(PoolWithTag, 0, v7);
  if ( v3 )
  {
    v6 = (unsigned int)(v6 - 8);
    *(_QWORD *)&PoolWithTag[v6] = 0LL;
  }
  if ( v2 )
  {
    v12 = &PoolWithTag[v7];
    v13 = &PoolWithTag[(unsigned int)v6];
    if ( &PoolWithTag[v7] < v13 )
    {
      v14 = (char **)(a1 + 16);
      do
      {
        v15 = *v14;
        if ( *((char ***)*v14 + 1) != v14 )
          __fastfail(3u);
        *(_QWORD *)v12 = v15;
        *((_QWORD *)v12 + 1) = v14;
        *((_QWORD *)v15 + 1) = v12;
        *v14 = v12;
        v12 += 16;
      }
      while ( v12 < v13 );
    }
  }
  *(_QWORD *)(a1 + 88) = PoolWithTag;
  result = 0LL;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
