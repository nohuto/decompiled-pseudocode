/*
 * XREFs of LdrpLoadWow64 @ 0x1800837F4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadWow64(PCUNICODE_STRING Source)
{
  int Dll; // ebx
  unsigned int v2; // ebx
  PANSI_STRING *v3; // rdi
  NTSTATUS ProcedureAddressForCaller; // esi
  char v6; // cl
  char v7; // al
  int v8; // [rsp+38h] [rbp-D0h]
  NTSTATUS v9; // [rsp+40h] [rbp-C8h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  PVOID BaseAddress[2]; // [rsp+58h] [rbp-B0h] BYREF
  PWSTR Path[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v13; // [rsp+E4h] [rbp-24h]
  char v14; // [rsp+E8h] [rbp-20h] BYREF
  PVOID *Callback; // [rsp+320h] [rbp+218h]

  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = (wchar_t *)&v14;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  LdrpInitializeDllPath(Destination.Buffer, (const WCHAR *)0x4001, (const WCHAR **)Path);
  Dll = LdrpLoadDll((__int64)&Destination, (__int64)Path, 2048, (__int64)BaseAddress);
  if ( v13 )
    RtlReleasePath(Path[0]);
  if ( Dll < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v8 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3191,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &Destination,
        v8);
      v6 = LdrpDebugFlags;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)Dll;
  }
  else
  {
    LdrProtectMrdata(0);
    v2 = 0;
    v3 = (PANSI_STRING *)&off_18011DE30;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    *((PVOID *)BaseAddress[0] + 6),
                                    *v3,
                                    0,
                                    (PVOID *)v3[1],
                                    0,
                                    Callback);
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v2;
      v3 += 2;
      if ( v2 >= 6 )
        goto LABEL_7;
    }
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v9 = ProcedureAddressForCaller;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3214,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_18011DE30 + 2 * v2),
        &Destination,
        v9);
      v7 = LdrpDebugFlags;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
LABEL_7:
    LdrProtectMrdata(1);
    LdrpDereferenceModule((char *)BaseAddress[0]);
    return (unsigned int)ProcedureAddressForCaller;
  }
}
