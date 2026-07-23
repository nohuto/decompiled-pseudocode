/*
 * XREFs of LdrpInitShimEngine @ 0x18006C74C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpPinModule @ 0x18000F948 (LdrpPinModule.c)
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x18001A838 (LdrpBuildSystem32FileName.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpLoadShimEngine @ 0x18006C8F4 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x18006CCD8 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  int Dll; // ebx
  int ShimEngineInterface; // eax
  _WORD *v5; // rax
  char v6; // cl
  int v8; // [rsp+28h] [rbp-D8h]
  int v9; // [rsp+28h] [rbp-D8h]
  int v10; // [rsp+28h] [rbp-D8h]
  PVOID v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h]
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v17; // [rsp+68h] [rbp-98h]
  _WORD v18[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v20; // [rsp+1ECh] [rbp+ECh]
  _BYTE v21[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v14 = 1572886;
  v15 = L"apphelp.dll";
  v16 = 0x1000000;
  v17 = v18;
  v18[0] = 0;
  v2 = LdrpBuildSystem32FileName(&v16, (__int64)&v14);
  if ( v2 < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_14;
    v8 = v2;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2628,
      (unsigned int)"LdrpInitShimEngine",
      0,
      (__int64)"Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v8);
    goto LABEL_13;
  }
  LdrpInitializeDllPath(0LL, (const WCHAR *)0x4001, (const WCHAR **)Path);
  Dll = LdrpLoadDll((__int64)&v16, (__int64)Path, 0, (__int64)&v11);
  if ( v20 )
    RtlReleasePath(Path[0]);
  if ( Dll < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v10 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2647,
        (unsigned int)"LdrpInitShimEngine",
        0,
        (__int64)"Loading the shim engine DLL failed with status 0x%08lx\n",
        v10);
LABEL_13:
      v6 = LdrpDebugFlags;
    }
  }
  else
  {
    *((_DWORD *)v11 + 26) |= 0x100u;
    g_pShimEngineModule = (PVOID)*((_QWORD *)v11 + 6);
    LdrpPinModule((__int64)v11);
    LdrpDereferenceModule((char *)v11);
    ShimEngineInterface = LdrpGetShimEngineInterface();
    if ( ShimEngineInterface >= 0 )
    {
      BaseAddress = v21;
      v12 = 0x2000000;
      if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                            g_pfnSE_InitializeEngine,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             &v12,
             LdrpImageEntry + 72,
             a1) >= 0 )
      {
        LdrpLoadShimEngine((PCWSTR)BaseAddress);
        if ( BaseAddress != v21 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      goto LABEL_9;
    }
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v9 = ShimEngineInterface;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2661,
        (unsigned int)"LdrpInitShimEngine",
        0,
        (__int64)"Getting the shim engine exports failed with status 0x%08lx\n",
        v9);
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( (v6 & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  v5 = v18;
  if ( v18 != v17 )
    LODWORD(v5) = NtdllpFreeStringRoutine(v17);
  return (int)v5;
}
