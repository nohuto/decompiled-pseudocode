/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x1C002C2B8
 * Callers:
 *     LibraryRegisterClient @ 0x1C00176A0 (LibraryRegisterClient.c)
 * Callees:
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C002BE40 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     GetEnhancedVerifierOptions @ 0x1C002C77C (GetEnhancedVerifierOptions.c)
 *     McGenEventRegister_EtwRegister @ 0x1C002CAF8 (McGenEventRegister_EtwRegister.c)
 *     FxAllocateDriverGlobals @ 0x1C0043978 (FxAllocateDriverGlobals.c)
 *     LockVerifierSection @ 0x1C0045038 (LockVerifierSection.c)
 *     GetNameFromPath @ 0x1C004E0BC (GetNameFromPath.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  unsigned int v6; // ebp
  unsigned int FuncCount; // r9d
  bool v8; // zf
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *v10; // rsi
  __int64 v11; // rax
  void (__fastcall **FuncTable)(); // rcx
  _WDFFUNCTIONS *p_Functions; // rdx
  _WDFFUNCTIONS *v14; // rax
  void (__fastcall *v15)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v16; // rcx
  _UNICODE_STRING *RegistryPath; // rcx
  unsigned int v18; // r8d
  unsigned __int8 v19; // r9
  const char *v20; // r9
  _UNICODE_STRING serviceName; // [rsp+30h] [rbp-38h] BYREF

  serviceName = 0LL;
  v6 = -1073741811;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
  }
  if ( !Info || !WdfDriverGlobals || !Info->FuncTable )
  {
    if ( !WdfLdrDbgPrintOn )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    if ( Info )
    {
      if ( WdfDriverGlobals )
      {
        v20 = "PWDF_BIND_INFO->FuncTable";
        if ( Info->FuncTable )
          v20 = "unknown";
      }
      else
      {
        v20 = "PWDF_DRIVER_GLOBALS *";
      }
    }
    else
    {
      v20 = "PWDF_BIND_INFO";
    }
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: NULL parameter -- %s\n", v20);
    goto $Done_18;
  }
  *WdfDriverGlobals = 0LL;
  FuncCount = Info->FuncCount;
  if ( FuncCount > WdfVersion.FuncCount )
  {
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: version mismatch detected in function table count: clienthas 0x%x,  library has 0x%x\n",
      FuncCount,
      WdfVersion.FuncCount);
    goto $Done_18;
  }
  if ( FuncCount > 0x1CA )
  {
    if ( ClientInfo
      && ClientInfo->Size == 24
      && ClientInfo->DriverObject
      && (RegistryPath = ClientInfo->RegistryPath) != 0LL
      && RegistryPath->Length
      && RegistryPath->Buffer )
    {
      GetNameFromPath(RegistryPath, &serviceName);
    }
    else
    {
      RtlInitUnicodeString(&serviceName, L"Unknown");
    }
    ReportDdiFunctionCountMismatch(&serviceName, Info->FuncCount, v18, v19);
    goto $Done_18;
  }
  if ( FuncCount > 0x1BC )
  {
    if ( FuncCount == 446 || FuncCount == 448 || FuncCount == 451 || FuncCount == 453 || FuncCount == 454 )
      goto LABEL_25;
    v8 = FuncCount == 458;
  }
  else
  {
    if ( FuncCount == 444
      || FuncCount == 383
      || FuncCount == 386
      || FuncCount == 387
      || FuncCount == 396
      || FuncCount == 432 )
    {
      goto LABEL_25;
    }
    v8 = FuncCount == 438;
  }
  if ( !v8 )
  {
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
      FuncCount);
    goto $Done_18;
  }
LABEL_25:
  DriverGlobals = FxAllocateDriverGlobals();
  *WdfDriverGlobals = DriverGlobals;
  if ( !DriverGlobals )
    goto $Done_18;
  v10 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  *(_QWORD *)DriverGlobals[-7].DriverName = ClientInfo->DriverObject;
  GetEnhancedVerifierOptions((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8]);
  if ( (unsigned __int16)v10->FxEnhancedVerifierOptions || (v10->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Enhanced Verification is ON \n");
    }
    LockVerifierSection(v10, ClientInfo->RegistryPath);
    if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
      McGenEventRegister_EtwRegister(
        v16,
        v15,
        &KMDF_PERF_PROVIDER_Context,
        &KMDF_PERF_PROVIDER_Context.RegistrationHandle);
    v11 = Info->FuncCount;
    FuncTable = Info->FuncTable;
    if ( (unsigned int)v11 <= 0x1B6 )
    {
      p_Functions = &VfWdfVersion.Functions;
      goto LABEL_37;
    }
    v14 = &VfWdfVersion.Functions;
LABEL_39:
    *FuncTable = (void (__fastcall *)())v14;
    goto LABEL_40;
  }
  v11 = Info->FuncCount;
  FuncTable = Info->FuncTable;
  if ( (unsigned int)v11 > 0x1B6 )
  {
    v14 = &WdfVersion.Functions;
    goto LABEL_39;
  }
  p_Functions = &WdfVersion.Functions;
LABEL_37:
  memmove(FuncTable, p_Functions, 8 * v11);
LABEL_40:
  v6 = 0;
  if ( !WdfLdrDbgPrintOn )
    return v6;
  DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
  DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
$Done_18:
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v6);
  }
  return v6;
}
