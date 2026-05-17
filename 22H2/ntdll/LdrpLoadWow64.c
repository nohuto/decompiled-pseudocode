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

__int64 __fastcall LdrpLoadWow64(const void **a1)
{
  int Dll; // ebx
  unsigned int v2; // ebx
  const void ***v3; // rdi
  int ProcedureAddressForCaller; // esi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  char v9; // cl
  char v10; // al
  int v11; // [rsp+38h] [rbp-D0h]
  int v12; // [rsp+40h] [rbp-C8h]
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  char *v14; // [rsp+50h] [rbp-B8h]
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v17; // [rsp+E4h] [rbp-24h]
  char v18; // [rsp+E8h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+320h] [rbp+218h]

  LODWORD(v13) = 34078720;
  v14 = &v18;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v13, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)&v13, L"wow64.dll");
  LdrpInitializeDllPath(v14, 16385LL, v16);
  Dll = LdrpLoadDll((__int64)&v13, (int)v16, 2048, (__int64)&v15);
  if ( v17 )
    RtlReleasePath(v16[0]);
  if ( Dll < 0 )
  {
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v11 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3191,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &v13,
        v11);
      v9 = LdrpDebugFlags;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)Dll;
  }
  else
  {
    LdrProtectMrdata(0);
    v2 = 0;
    v3 = (const void ***)&off_18011DE30;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(*(_QWORD *)(v15 + 48), *v3, 0, v3[1], 0, retaddr);
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v2;
      v3 += 2;
      if ( v2 >= 6 )
        goto LABEL_7;
    }
    v10 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v12 = ProcedureAddressForCaller;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3214,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_18011DE30 + 2 * v2),
        &v13,
        v12);
      v10 = LdrpDebugFlags;
    }
    if ( (v10 & 0x10) != 0 )
      __debugbreak();
LABEL_7:
    LdrProtectMrdata(1);
    LdrpDereferenceModule(v15, v5, v6, v7);
    return (unsigned int)ProcedureAddressForCaller;
  }
}
