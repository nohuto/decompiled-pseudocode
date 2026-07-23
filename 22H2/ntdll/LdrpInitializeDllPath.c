/*
 * XREFs of LdrpInitializeDllPath @ 0x1800169B8
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 *     LdrGetDllHandleEx @ 0x1800168A0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     LdrpMapDllSearchPath @ 0x180060AD0 (LdrpMapDllSearchPath.c)
 *     LdrpInitShimEngine @ 0x18006C74C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006C8F4 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x1800824E4 (LdrpInitializeImportRedirection.c)
 *     LdrpCorInitialize @ 0x180083294 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800837F4 (LdrpLoadWow64.c)
 *     LdrLoadEnclaveModule @ 0x1800CCE50 (LdrLoadEnclaveModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D07B0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAC38 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x1800116AC (LdrpLogDllStateEx2.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpInitializeDllPath(const WCHAR *a1, const WCHAR *a2, const WCHAR **a3)
{
  __int64 v6; // rcx
  bool v7; // zf

  memset(a3, 0, 0x80uLL);
  if ( ((unsigned __int8)a2 & 1) == 0 && a2 )
  {
    v7 = (LdrpDebugFlags & 5) == 0;
    *a3 = a2;
    if ( !v7 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1445,
        (unsigned int)"LdrpInitializeDllPath",
        2,
        (__int64)"DLL search path passed in externally: %ws\n",
        a2);
    LdrpLogDllStateEx2(v6, a1, *a3, 0x14C0u);
  }
  else
  {
    a3[4] = a1;
    *((_DWORD *)a3 + 6) = (unsigned int)a2 & 0xFFFFFFFE;
  }
}
