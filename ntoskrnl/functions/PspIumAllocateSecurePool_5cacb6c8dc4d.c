__int64 __fastcall PspIumAllocateSecurePool(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // r12
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 Pool2; // rax
  __int64 v8; // r12
  PVOID MappedSystemVa; // rsi
  __int64 v10; // rax
  PMDL v11; // r14
  size_t v12; // r8
  unsigned int SecurePoolMemory; // esi
  PMDL *v14; // r14
  PMDL v15; // rdi
  PMDL MemoryDescriptorList[2]; // [rsp+30h] [rbp-39h] BYREF
  struct _MDL v18; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19; // [rsp+70h] [rbp+7h]
  _QWORD v20[3]; // [rsp+78h] [rbp+Fh]

  v1 = (*(_DWORD *)(a1 + 40) & 0x2000) == 0;
  memset(&v18, 0, sizeof(v18));
  v19 = 0LL;
  v3 = 2LL;
  *(_OWORD *)MemoryDescriptorList = 0LL;
  if ( v1 && (LODWORD(v4) = *(_DWORD *)(a1 + 44), (_DWORD)v4) )
  {
    v5 = *(_QWORD *)(a1 + 32) >> 12;
    v6 = 0LL;
    do
    {
      v4 = (unsigned int)(v4 - 1);
      v5 = (((8 * v5) & 0xFFF) != 0) + ((8 * v5) >> 12);
      v20[v4] = v5;
      if ( (unsigned int)v6 < 2 )
      {
        Pool2 = ExAllocatePool2(64LL, 8 * (v5 & 0xFFFFFFFFFFFFFLL) + 48, 7103565LL);
        MemoryDescriptorList[v6] = (PMDL)Pool2;
        if ( !Pool2 )
        {
          SecurePoolMemory = -1073741670;
          goto LABEL_18;
        }
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 32) = 0LL;
        *(_DWORD *)(Pool2 + 44) = 0;
        *(_DWORD *)(Pool2 + 40) = 0;
        *(_DWORD *)(Pool2 + 8) = 131120;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (_DWORD)v4 );
    v8 = 0LL;
    MappedSystemVa = (PVOID)(a1 + 64);
    if ( !*(_DWORD *)(a1 + 44) )
    {
LABEL_16:
      v3 = 2LL;
      goto LABEL_17;
    }
    while ( 1 )
    {
      LODWORD(v6) = v6 - 1;
      v10 = v6 & 1;
      v11 = MemoryDescriptorList[v10];
      if ( (v11->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v11->MappedSystemVa, MemoryDescriptorList[v10]);
      v12 = 8LL * v20[v8];
      v11->ByteCount = LODWORD(v20[v8]) << 12;
      memmove(&v11[1], MappedSystemVa, v12);
      if ( (v11->MdlFlags & 5) == 0 )
        MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( (v11->MdlFlags & 1) == 0 )
        return 3221225626LL;
      MappedSystemVa = v11->MappedSystemVa;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 44) )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_17:
    SecurePoolMemory = MmAllocateSecurePoolMemory(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
LABEL_18:
    if ( (v18.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(v18.MappedSystemVa, &v18);
    v14 = MemoryDescriptorList;
    do
    {
      v15 = *v14;
      if ( *v14 )
      {
        if ( (v15->MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v15->MappedSystemVa, *v14);
        ExFreePoolWithTag(v15, 0);
      }
      ++v14;
      --v3;
    }
    while ( v3 );
    return SecurePoolMemory;
  }
}
