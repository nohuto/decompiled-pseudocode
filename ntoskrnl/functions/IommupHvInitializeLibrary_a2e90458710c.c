__int64 IommupHvInitializeLibrary()
{
  unsigned int v0; // r12d
  __int64 v1; // rsi
  PVOID *v2; // r14
  int v3; // ebp
  char v4; // al
  int v5; // r15d
  __int64 Pool2; // rax
  unsigned int v8; // r13d
  _QWORD *v9; // rax
  char *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  char *v12; // rax
  __int64 v13; // rdx
  unsigned int i; // edi
  PVOID *v15; // rdi
  _QWORD *v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]

  v17 = 0LL;
  v18 = 0LL;
  v0 = 0;
  LODWORD(v1) = 0;
  v2 = 0LL;
  v3 = 0;
  if ( qword_140C621F8 )
  {
    qword_140C621F8(&v17);
    v4 = v17;
    if ( (v17 & 1) != 0 || HalpHvParaVirtIommuDomain && (v17 & 4) != 0 )
    {
      v5 = DWORD2(v17);
      if ( HIDWORD(v18) && HIDWORD(v18) < DWORD2(v17) )
        v5 = HIDWORD(v18);
      if ( (v17 & 1) != 0 )
      {
        v1 = v18;
        if ( !(_DWORD)v18 )
          v1 = 1LL;
        Pool2 = ExAllocatePool2(64LL, (unsigned int)((_DWORD)v1 << 6), 0x496C6148u);
        v2 = (PVOID *)Pool2;
        if ( !Pool2 )
          return 3221225626LL;
        v8 = 0;
        if ( (_DWORD)v1 )
        {
          v9 = (_QWORD *)(Pool2 + 16);
          v16 = v9;
          while ( 1 )
          {
            *((_DWORD *)v9 - 4) = v8;
            ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(0x2000LL, 0, -1, 0, 4, 0x80000000);
            *(v16 - 1) = ContiguousNodeMemory;
            if ( !ContiguousNodeMemory )
              break;
            *v16 = ContiguousNodeMemory + 4096;
            PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
            v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))qword_140C62248)(
                   v8,
                   128LL,
                   (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                   206LL,
                   0);
            if ( v3 < 0 )
              goto LABEL_32;
            v9 = v16 + 8;
            ++v0;
            ++v8;
            v16 += 8;
            if ( v8 >= (unsigned int)v1 )
              goto LABEL_20;
          }
          v3 = -1073741670;
LABEL_32:
          for ( i = 0; i < v0; ++i )
            ((void (__fastcall *)(_QWORD))qword_140C62250)(i);
          v15 = v2 + 1;
          do
          {
            if ( *v15 )
              MmFreeContiguousMemory(*v15);
            v15 += 8;
            --v1;
          }
          while ( v1 );
          ExFreePoolWithTag(v2, 0x496C6148u);
          return (unsigned int)v3;
        }
LABEL_20:
        v4 = v17;
      }
      if ( (v4 & 1) != 0 )
        IommupHvSvmEnabled = 1;
      if ( HalpHvParaVirtIommuDomain && (v4 & 4) != 0 )
      {
        IommupHvPasidEnabled = 1;
        IommupHvPasidInitialDomainId = _InterlockedIncrement(&HalpIommuDomainId);
      }
      IommupHvMaximumAsids = v5;
      if ( IommupHvSvmEnabled )
      {
        IommupHvPageRequestQueueCount = v1;
        IommupHvPageRequestQueues = (__int64)v2;
        if ( (_DWORD)v1 )
        {
          v12 = (char *)(v2 + 4);
          v13 = (unsigned int)v1;
          do
          {
            *((_QWORD *)v12 - 1) = 0LL;
            *(_QWORD *)v12 = 0LL;
            *((_DWORD *)v12 + 2) = 0;
            *((_QWORD *)v12 + 3) = 0LL;
            *((_QWORD *)v12 + 2) = IommupHvGetPageFault;
            v12 += 64;
            --v13;
          }
          while ( v13 );
        }
        HalpInterruptSetIdtEntry(0xCEu, (int)IommupHvInterruptRoutine, 12, 1LL, -1LL);
      }
      IommupHvGlobalPushLock = 0LL;
      return (unsigned int)v3;
    }
  }
  return 3221225659LL;
}
