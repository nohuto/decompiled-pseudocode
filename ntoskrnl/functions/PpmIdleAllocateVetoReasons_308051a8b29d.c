__int64 __fastcall PpmIdleAllocateVetoReasons(_DWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  void *v4; // r13
  unsigned int v5; // esi
  char *v6; // rax
  char *v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // r15
  char *v10; // rax
  signed __int64 v11; // rcx
  __int64 v12; // r10
  unsigned int v13; // ebp
  __int64 Pool2; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+78h] [rbp+10h]
  char *v17; // [rsp+80h] [rbp+18h]
  WCHAR *SourceString; // [rsp+88h] [rbp+20h]

  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 0;
  if ( !PpmIdleVetoList
    || (v3 = *((unsigned int *)PpmIdleVetoList + 1), !(_DWORD)v3)
    || !PpmPlatformStates
    || (v4 = *(void **)(PpmPlatformStates + 112)) == 0LL )
  {
    v2 = -1073741637;
    goto LABEL_20;
  }
  v5 = v3 + a1[1];
  if ( v5 < (unsigned int)v3 )
  {
    v2 = -1073741675;
    goto LABEL_20;
  }
  Pool2 = ExAllocatePool2(64LL, (*(_DWORD *)PpmPlatformStates * v5) << 6, 1766674512LL);
  if ( !Pool2 || (v6 = (char *)ExAllocatePool2(64LL, 24 * v5 + 8, 1766674512LL), (v7 = v6) == 0LL) )
  {
LABEL_8:
    v2 = -1073741670;
    goto LABEL_20;
  }
  *((_DWORD *)v6 + 1) = v5;
  v8 = v3;
  v9 = v3;
  *(_DWORD *)v6 = *(_DWORD *)PpmIdleVetoList;
  if ( (unsigned int)v3 < v5 )
  {
    v17 = &v6[16 * v3 + 8 + 8 * v3];
    do
    {
      v16 = 4LL * (v8 - (unsigned int)v3);
      SourceString = (WCHAR *)ExAllocatePool2(64LL, 2LL * LOWORD(a1[v16 + 3]) + 2, 1766674512LL);
      if ( !SourceString )
        goto LABEL_8;
      memmove(SourceString, *(const void **)&a1[v16 + 4], 2LL * LOWORD(a1[v16 + 3]));
      RtlInitUnicodeString((PUNICODE_STRING)&v7[16 * v8 + 16 + 8 * v8], SourceString);
      ++v8;
      *(_DWORD *)v17 = a1[v16 + 2];
      v17 += 24;
    }
    while ( v8 < v5 );
  }
  v10 = v7 + 8;
  v11 = (_BYTE *)PpmIdleVetoList - v7;
  do
  {
    *(_OWORD *)v10 = *(_OWORD *)&v10[v11];
    *((_QWORD *)v10 + 2) = *(_QWORD *)&v10[v11 + 16];
    v10 += 24;
    --v9;
  }
  while ( v9 );
  ExFreePoolWithTag(PpmIdleVetoList, 0x694D5050u);
  v12 = PpmPlatformStates;
  v13 = 0;
  for ( PpmIdleVetoList = v7; v13 < *(_DWORD *)PpmPlatformStates; ++v13 )
  {
    PpmIdleInstallNewVetoList(448LL * v13 + v12 + 64, v5, (char *)(Pool2 + ((unsigned __int64)(v13 * v5) << 6)));
    v12 = PpmPlatformStates;
  }
  ExFreePoolWithTag(v4, 0x694D5050u);
  *a1 = v3 + 1;
LABEL_20:
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return v2;
}
