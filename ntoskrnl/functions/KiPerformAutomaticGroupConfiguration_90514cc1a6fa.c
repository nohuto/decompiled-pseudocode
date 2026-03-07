void KiPerformAutomaticGroupConfiguration()
{
  unsigned __int16 v0; // bx
  __int64 v1; // r8
  _BYTE *v2; // rdx
  _QWORD *Pool2; // rax
  void *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char v9; // zf
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int16 v12; // ax
  _DWORD v13[32]; // [rsp+30h] [rbp-D8h] BYREF
  _WORD v14[32]; // [rsp+B0h] [rbp-58h] BYREF

  v0 = 0;
  if ( KiSubNodeCount )
  {
    v1 = (unsigned __int16)KiSubNodeCount;
    v2 = (_BYTE *)(KiSubNodeConfigBlock + 5);
    do
    {
      if ( (*(_BYTE *)(KeNodeBlock[*(unsigned __int16 *)(v2 - 3)] + 10) & 4) != 0 )
      {
        *v2 |= 4u;
        v0 += (unsigned __int8)*(v2 - 1);
      }
      v2 += 24;
      --v1;
    }
    while ( v1 );
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8LL * (unsigned __int16)KiSubNodeCount, 0x4347504Bu);
  v4 = Pool2;
  if ( !Pool2 )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  if ( KiSubNodeCount )
  {
    v5 = KiSubNodeConfigBlock;
    v6 = (unsigned __int16)KiSubNodeCount;
    do
    {
      *Pool2 = v5;
      v5 += 24LL;
      ++Pool2;
      --v6;
    }
    while ( v6 );
  }
  qsort(
    v4,
    (unsigned __int16)KiSubNodeCount,
    8uLL,
    (int (__cdecl *)(const void *, const void *))KiCompareSubNodeConfigurationCapacity);
  if ( v0 )
  {
    if ( KiMaximizeGroupsCreated )
    {
      LOWORD(v8) = KiSubNodeCount;
    }
    else
    {
      v7 = (KiMaximumGroupSize + (unsigned int)v0 - 1) % KiMaximumGroupSize;
      v8 = (KiMaximumGroupSize + (unsigned int)v0 - 1) / KiMaximumGroupSize;
    }
    v9 = (_WORD)v8 == 32;
    if ( (unsigned __int16)v8 <= 0x20u )
      goto LABEL_19;
    LOWORD(v8) = 32;
  }
  else
  {
    LOWORD(v8) = 1;
  }
  v9 = (_WORD)v8 == 32;
  do
  {
LABEL_19:
    if ( KiAssignFixedSubNodes((__int64 *)v4, v7, v8, v9, v13, v14) )
      break;
    LOWORD(v8) = v8 + 1;
    v9 = (_WORD)v8 == 32;
  }
  while ( (unsigned __int16)v8 <= 0x20u );
  KiShuffleAssignedSubNodes(v4, v7, v13, v14);
  v12 = KiAssignAdjustableSubNodes((__int64 *)v4, v10, v11, (__int64)v13);
  if ( (unsigned __int16)v8 > v12 )
    v12 = v8;
  KiMaximumGroups = v12;
  ExFreePoolWithTag(v4, 0);
}
