/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x180016EE4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpResolveDelayLoadDescriptor @ 0x1800101B0 (LdrpResolveDelayLoadDescriptor.c)
 *     RtlInitAnsiString @ 0x1800152F0 (RtlInitAnsiString.c)
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlxOemStringToUnicodeSize @ 0x180016DE0 (RtlxOemStringToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x18001A728 (ApiSetResolveToHost.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 *     LdrGetDllHandleByName @ 0x1800780B0 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x18008DDE0 (_strnicmp.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  int v0; // eax
  __int64 v1; // rcx
  int Descriptor; // ebx
  unsigned int v3; // esi
  unsigned int v4; // edi
  void *ApiSetMap; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  const char *v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  char v12; // r14
  unsigned __int16 v13; // ax
  wchar_t *Buffer; // rax
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING String2; // [rsp+50h] [rbp-18h] BYREF
  char v19; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+50h]
  PVOID DllHandle; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+60h] BYREF

  DllHandle = 0LL;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0LL, &DllHandle);
  v0 = RtlpImageDirectoryEntryToDataEx(DllHandle, (__int64)&v22);
  v1 = v22;
  if ( v0 < 0 )
    v1 = 0LL;
  v22 = v1;
  if ( !v1 )
    return 0LL;
  Descriptor = 0;
  v3 = v20 >> 5;
  v4 = 0;
  UnicodeString = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  if ( !(v20 >> 5) )
    return (unsigned int)Descriptor;
  v6 = v22;
  while ( 1 )
  {
    v7 = v6 + 32LL * v4;
    if ( !*(_DWORD *)(v7 + 4) )
      goto LABEL_17;
    v8 = (char *)DllHandle + *(unsigned int *)(v7 + 4);
    if ( !strnicmp(v8, "EXT-", 4uLL) )
      break;
LABEL_16:
    if ( ++v4 >= v3 )
      goto LABEL_17;
  }
  RtlInitAnsiString(&DestinationString, v8);
  v9 = RtlxOemStringToUnicodeSize((PCSTR *)&DestinationString);
  v10 = v9;
  if ( v9 <= UnicodeString.MaximumLength )
  {
    UnicodeString.Length = 0;
LABEL_10:
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
    LdrpLogDllState(0LL, &UnicodeString, 5328LL);
    v11 = ApiSetResolveToHost((_DWORD)ApiSetMap, (unsigned int)&UnicodeString, 0, (unsigned int)&v19, (__int64)&String2);
    v12 = v19;
    Descriptor = v11;
    if ( v11 >= 0 && v19 )
    {
      if ( String2.Length )
        v13 = 5329;
      else
        v13 = 5330;
    }
    else
    {
      v13 = 5331;
    }
    LdrpLogDllState(0LL, &UnicodeString, v13);
    if ( v12 && !RtlCompareUnicodeString((PUNICODE_STRING)&LdrpKernel32DllName, &String2, 1u) )
    {
      Descriptor = LdrpResolveDelayLoadDescriptor((char *)DllHandle, (PCIMAGE_DELAYLOAD_DESCRIPTOR)(v6 + 32LL * v4));
      if ( Descriptor < 0 )
        goto LABEL_17;
      Descriptor = 0;
    }
    goto LABEL_16;
  }
  if ( v9 >= 0xFFFE )
  {
    Descriptor = -1073741675;
LABEL_17:
    Buffer = UnicodeString.Buffer;
    goto LABEL_18;
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v10);
  UnicodeString.Buffer = Buffer;
  if ( Buffer )
  {
    UnicodeString.MaximumLength = v10;
    goto LABEL_10;
  }
  Descriptor = -1073741670;
LABEL_18:
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)Descriptor;
}
