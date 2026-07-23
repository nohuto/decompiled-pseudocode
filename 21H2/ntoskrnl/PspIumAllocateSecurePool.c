/*
 * XREFs of PspIumAllocateSecurePool @ 0x140583BAC
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MmAllocateSecurePoolMemory @ 0x140545000 (MmAllocateSecurePoolMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocateSecurePool(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // r12
  PVOID MappedSystemVa; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  struct _MDL *PoolWithTag; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  PMDL v11; // rsi
  size_t v12; // r8
  CSHORT MdlFlags; // ax
  unsigned int SecurePoolMemory; // esi
  __int64 v15; // rax
  PMDL *v17; // r14
  PMDL v18; // rdi
  struct _MDL v19; // [rsp+30h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-9h]
  PMDL MemoryDescriptorList[2]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v22[3]; // [rsp+78h] [rbp+Fh]

  v1 = (*(_DWORD *)(a1 + 40) & 0x2000) == 0;
  memset(&v19, 0, sizeof(v19));
  v20 = 0LL;
  v3 = 2LL;
  *(_OWORD *)MemoryDescriptorList = 0LL;
  if ( !v1 )
  {
    MappedSystemVa = 0LL;
    goto LABEL_21;
  }
  LODWORD(v5) = *(_DWORD *)(a1 + 44);
  if ( (_DWORD)v5 )
  {
    v6 = *(_QWORD *)(a1 + 32) >> 12;
    v7 = 0LL;
    do
    {
      v5 = (unsigned int)(v5 - 1);
      v6 = (((8 * v6) & 0xFFF) != 0) + ((8 * v6) >> 12);
      v22[v5] = v6;
      if ( (unsigned int)v7 < 2 )
      {
        PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (v6 & 0xFFFFFFFFFFFFFLL) + 48, 0x6C644Du);
        MemoryDescriptorList[v7] = PoolWithTag;
        if ( !PoolWithTag )
        {
          SecurePoolMemory = -1073741670;
          goto LABEL_22;
        }
        PoolWithTag->Next = 0LL;
        PoolWithTag->StartVa = 0LL;
        PoolWithTag->ByteOffset = 0;
        PoolWithTag->ByteCount = 0;
        *(_DWORD *)&PoolWithTag->Size = 131120;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (_DWORD)v5 );
    v9 = 0LL;
    MappedSystemVa = (PVOID)(a1 + 64);
    if ( !*(_DWORD *)(a1 + 44) )
      goto LABEL_21;
    while ( 1 )
    {
      LODWORD(v7) = v7 - 1;
      v10 = v7 & 1;
      v11 = MemoryDescriptorList[v10];
      if ( (v11->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v11->MappedSystemVa, MemoryDescriptorList[v10]);
      v12 = 8LL * v22[v9];
      v11->ByteCount = LODWORD(v22[v9]) << 12;
      memmove(&v11[1], MappedSystemVa, v12);
      MdlFlags = v11->MdlFlags;
      if ( (MdlFlags & 5) == 0 )
      {
        MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
        MdlFlags = v11->MdlFlags;
      }
      if ( (MdlFlags & 1) == 0 )
        return 3221225626LL;
      MappedSystemVa = v11->MappedSystemVa;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 44) )
        goto LABEL_21;
    }
  }
  v19.StartVa = 0LL;
  v19.ByteOffset = 0;
  v15 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)&v19.Size = 131128;
  v19.ByteCount = 4096;
  v20 = v15;
  MmMapLockedPagesSpecifyCache(&v19, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( (v19.MdlFlags & 1) == 0 )
    return 3221225626LL;
  MappedSystemVa = v19.MappedSystemVa;
LABEL_21:
  SecurePoolMemory = MmAllocateSecurePoolMemory(
                       *(_QWORD *)(a1 + 24),
                       *(_QWORD *)(a1 + 32),
                       *(_DWORD *)(a1 + 40),
                       (__int64)MappedSystemVa);
LABEL_22:
  if ( (v19.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v19.MappedSystemVa, &v19);
  v17 = MemoryDescriptorList;
  do
  {
    v18 = *v17;
    if ( *v17 )
    {
      if ( (v18->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v18->MappedSystemVa, *v17);
      ExFreePoolWithTag(v18, 0);
    }
    ++v17;
    --v3;
  }
  while ( v3 );
  return SecurePoolMemory;
}
