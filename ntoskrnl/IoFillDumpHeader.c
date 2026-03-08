/*
 * XREFs of IoFillDumpHeader @ 0x14054D7C8
 * Callers:
 *     IoCapturePristineTriageDump @ 0x14054D368 (IoCapturePristineTriageDump.c)
 *     IopConstructInMemoryDumpHeader @ 0x14055003C (IopConstructInMemoryDumpHeader.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140551A98 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     KeInitializeCrashDumpHeader @ 0x1405524C0 (KeInitializeCrashDumpHeader.c)
 *     DbgkpTriageDumpFillHeaders @ 0x140939100 (DbgkpTriageDumpFillHeaders.c)
 *     IopLiveDumpCollectPages @ 0x140A97A84 (IopLiveDumpCollectPages.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     RtlGetNtProductType @ 0x140303E90 (RtlGetNtProductType.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmGetPhysicalMemoryRanges @ 0x140836290 (MmGetPhysicalMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoFillDumpHeader(
        char *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char *v11; // r11
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  size_t v16; // r8
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v18; // r8
  unsigned int v19; // edx
  _LARGE_INTEGER *p_NumberOfBytes; // rdi
  _LARGE_INTEGER NumberOfBytes; // rcx
  __int64 v22; // r9
  __int64 v23; // r9
  signed __int64 v24; // rcx
  unsigned __int64 QuadPart; // rax
  __int64 v26; // rdx
  int v27; // eax
  __int64 result; // rax

  v11 = a1;
  if ( ((unsigned __int8)a1 & 4) != 0 )
  {
    *(_DWORD *)a1 = 1162297680;
    v11 = a1 + 4;
    v12 = 1023LL;
    v13 = 8184LL;
    v14 = 1LL;
  }
  else
  {
    v12 = 1024LL;
    v14 = 0LL;
    v13 = 8188LL;
  }
  memset64(v11, 0x4547415045474150uLL, v12);
  if ( v14 )
    *(_DWORD *)&v11[v13] = 1162297680;
  *((_QWORD *)a1 + 9) = a5;
  *((_QWORD *)a1 + 10) = a6;
  *((_QWORD *)a1 + 11) = a7;
  *((_DWORD *)a1 + 1) = 875976004;
  *((_DWORD *)a1 + 14) = a3;
  *((_QWORD *)a1 + 8) = a4;
  if ( a8 )
    v15 = *(_QWORD *)(*(_QWORD *)(a8 + 184) + 40LL);
  else
    v15 = __readcr3();
  *((_QWORD *)a1 + 2) = v15 & 0xFFFFFFFFFFFFF000uLL;
  a1[4174] = 4;
  *((_DWORD *)a1 + 12) = 34404;
  *((_DWORD *)a1 + 998) = a2;
  *((_QWORD *)a1 + 3) = MmPfnDatabase;
  *((_QWORD *)a1 + 4) = &PsLoadedModuleList;
  *((_QWORD *)a1 + 5) = &PsActiveProcessHead;
  *((_QWORD *)a1 + 16) = &KdDebuggerDataBlock;
  *((_DWORD *)a1 + 13) = KeQueryActiveProcessorCountEx(0xFFFFu);
  *((_DWORD *)a1 + 2) = (unsigned int)NtBuildNumber >> 28;
  *((_DWORD *)a1 + 3) = (unsigned __int16)NtBuildNumber;
  if ( (unsigned int)(a2 - 5) <= 1 || !MmPhysicalMemoryBlock )
    goto LABEL_25;
  if ( KeGetCurrentIrql() > 1u )
  {
    v16 = 16 * ((unsigned int)(*(_DWORD *)MmPhysicalMemoryBlock - 1) + 2LL);
    if ( v16 > 0x2BC )
      v16 = 700LL;
    memmove(a1 + 136, MmPhysicalMemoryBlock, v16);
    goto LABEL_26;
  }
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v18 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
  {
LABEL_25:
    memset(a1 + 136, 0, 0x2BCuLL);
    goto LABEL_26;
  }
  v19 = 0;
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
  v22 = 0LL;
  while ( NumberOfBytes.QuadPart )
  {
    ++v19;
    v22 += (unsigned __int64)NumberOfBytes.QuadPart >> 12;
    NumberOfBytes = PhysicalMemoryRanges[v19].NumberOfBytes;
  }
  *((_QWORD *)a1 + 18) = v22;
  if ( 16 * ((unsigned __int64)(v19 - 1) + 2) > 0x2BC )
    v19 = 42;
  *((_DWORD *)a1 + 34) = v19;
  if ( v19 )
  {
    v23 = v19;
    v24 = a1 - (char *)PhysicalMemoryRanges;
    do
    {
      *(LONGLONG *)((char *)&p_NumberOfBytes[18].QuadPart + v24) = (unsigned __int64)p_NumberOfBytes[-1].QuadPart >> 12;
      QuadPart = p_NumberOfBytes->QuadPart;
      p_NumberOfBytes += 2;
      *(LONGLONG *)((char *)&p_NumberOfBytes[17].QuadPart + v24) = QuadPart >> 12;
      --v23;
    }
    while ( v23 );
  }
  ExFreePoolWithTag(v18, 0);
LABEL_26:
  memset(a1 + 840, 0, 0xBB8uLL);
  *((_QWORD *)a1 + 481) = 0LL;
  *((_DWORD *)a1 + 966) = 0;
  *((_QWORD *)a1 + 482) = 0LL;
  *((_DWORD *)a1 + 960) = -2147483645;
  *((_DWORD *)a1 + 961) = 1;
  *((_DWORD *)a1 + 1002) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)a1 + 1003) = MEMORY[0xFFFFF78000000018];
  *((_DWORD *)a1 + 1036) = MEMORY[0xFFFFF78000000008];
  *((_DWORD *)a1 + 1037) = MEMORY[0xFFFFF7800000000C];
  RtlGetNtProductType((_DWORD *)a1 + 1040, v26);
  *((_DWORD *)a1 + 1041) = MEMORY[0xFFFFF780000002D0];
  v27 = MEMORY[0xFFFFF780000002C4];
  *((_DWORD *)a1 + 1044) = 0;
  *((_DWORD *)a1 + 1045) = v27;
  result = *((unsigned int *)a1 + 1044);
  if ( VslVsmEnabled )
    result = 2048LL;
  *((_DWORD *)a1 + 1044) = result;
  return result;
}
