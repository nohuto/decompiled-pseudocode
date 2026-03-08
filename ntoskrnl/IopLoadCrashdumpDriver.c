/*
 * XREFs of IopLoadCrashdumpDriver @ 0x140392A70
 * Callers:
 *     IopInitializeCrashDump @ 0x140834B28 (IopInitializeCrashDump.c)
 *     IoGetDumpStack @ 0x140940ABC (IoGetDumpStack.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x140392BD0 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  __int64 result; // rax
  __int64 v1; // rax
  char *v2; // rbx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING *v4; // [rsp+50h] [rbp+17h] BYREF
  __int64 PhysicalMemoryBlock; // [rsp+58h] [rbp+1Fh]
  __int64 (__fastcall *v6)(int, int, int, int, __int64, __int64); // [rsp+60h] [rbp+27h]
  __int64 (__fastcall *v7)(ULONG_PTR); // [rsp+68h] [rbp+2Fh]
  __int64 (__fastcall *v8)(int, int, int, int, __int64); // [rsp+70h] [rbp+37h]
  __int64 v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+80h] [rbp+47h]
  int v11; // [rsp+84h] [rbp+4Bh]
  UNICODE_STRING *v12; // [rsp+88h] [rbp+4Fh]
  char *v13; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+6Fh] BYREF

  v14 = 0LL;
  PhysicalMemoryBlock = 0LL;
  v11 = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  result = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 0, 2, (__int64)&v14, (__int64)&v13);
  if ( (_DWORD)result == -1073741554 || (int)result >= 0 )
  {
    v1 = RtlImageNtHeader((__int64)v13);
    if ( !v1 )
      return 3221225473LL;
    v2 = &v13[*(unsigned int *)(v1 + 40)];
    v4 = &IoArcBootDeviceName;
    v12 = &PoHiberFileRoot;
    PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
    if ( !PhysicalMemoryBlock )
      return 3221225626LL;
    v6 = IopLoadCrashdmpImage;
    v7 = MmUnloadSystemImage;
    v9 = IopReportBugCheckProgress;
    v8 = HvlGetEncryptedData;
    v10 = VslVsmEnabled ? ((HvlpFlags & 2) != 0) + 1 : 0;
    CrashdmpCallTable = 1;
    dword_140C6A8A4 = 12;
    result = ((__int64 (__fastcall *)(UNICODE_STRING **, int *))v2)(&v4, &CrashdmpCallTable);
    if ( (int)result >= 0 )
    {
      CrashdmpImageEntry = v14;
      CrashdmpImageBase = v13;
      return 0LL;
    }
  }
  return result;
}
