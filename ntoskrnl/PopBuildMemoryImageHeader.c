/*
 * XREFs of PopBuildMemoryImageHeader @ 0x140A9EA28
 * Callers:
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x140236718 (MmGetHighestPhysicalPage.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 *     PopAllocatePages @ 0x140A9E958 (PopAllocatePages.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140A9EEEC (PopCopyFirmwareRuntimeInformationPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // r14
  _QWORD *v14; // r13
  unsigned __int64 v15; // rsi
  PVOID Pages; // rax
  PVOID v17; // rbp

  if ( a2 )
    return *((unsigned int *)MemoryMap + 47);
  v3 = MemoryMap[25];
  PoSetHiberRange(MemoryMap, 2u, (PVOID)v3, 0x448uLL, 0x676D694Du);
  memset((void *)v3, 0, 0x1000uLL);
  *(_DWORD *)(v3 + 24) = 4096;
  *(_DWORD *)(v3 + 12) = 1096;
  *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
  *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(v3 + 64) = qword_140C3CA90;
  *(_DWORD *)(v3 + 60) = 10;
  *(_QWORD *)(v3 + 48) = KeFeatureBits;
  *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
  *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
  *(_BYTE *)(v3 + 57) = -54;
  *(_BYTE *)(v3 + 972) = byte_140C3CAA0;
  *(_QWORD *)(v3 + 1024) = MmGetHighestPhysicalPage(0);
  *(_BYTE *)(v3 + 973) = PopSecureLaunched;
  *(_BYTE *)(v3 + 974) = *((_BYTE *)MemoryMap + 453);
  *(_BYTE *)(v3 + 975) = PopFasr;
  *(_BYTE *)(v3 + 1091) = PopSuppressResumePrompt != v4;
  v5 = MemoryMap[15];
  if ( v5 )
    *(_DWORD *)(v3 + 72) = *(_DWORD *)(v5 + 40) >> 12;
  v6 = MemoryMap[39];
  if ( v6 )
  {
    v7 = (__int64 *)(v3 + 1032);
    v8 = 3LL;
    *(_QWORD *)(v3 + 1032) = v6;
    v9 = (_QWORD *)(v3 + 1040);
    do
    {
      v10 = *v7++;
      *v9++ = v10 + 1;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(v3 + 1016) = 0LL;
  v11 = MemoryMap[27];
  if ( v11 )
  {
    v12 = (unsigned __int64)*(unsigned int *)(v11 + 40) >> 12;
    memmove((void *)(v3 + 768), (const void *)(v11 + 48), 8 * v12);
  }
  else
  {
    LODWORD(v12) = 0;
  }
  *(_DWORD *)(v3 + 764) = v12;
  PopCopyFirmwareRuntimeInformationPfnList(MemoryMap);
  v13 = (_QWORD *)MemoryMap[8];
  do
  {
    if ( v13 == MemoryMap + 8 )
    {
      *(_DWORD *)(v3 + 1064) = *((_DWORD *)MemoryMap + 112);
      *(_BYTE *)(v3 + 1090) = PopHiberSkipMemoryMapValidation;
      return *((unsigned int *)MemoryMap + 47);
    }
    v14 = v13;
    v13 = (_QWORD *)*v13;
    v15 = (unsigned __int64)(unsigned int)((*((_DWORD *)v14 + 8) - *((_DWORD *)v14 + 6)) << 12) >> 12;
    Pages = PopAllocatePages(v15);
    v17 = Pages;
    if ( Pages )
      PoSetHiberRange(MemoryMap, 0x8000u, Pages, v15 << 12, 0x436C6F6Eu);
    else
      *((_DWORD *)MemoryMap + 47) = -1073741670;
    v14[5] = v17;
  }
  while ( v17 );
  return 3221225626LL;
}
