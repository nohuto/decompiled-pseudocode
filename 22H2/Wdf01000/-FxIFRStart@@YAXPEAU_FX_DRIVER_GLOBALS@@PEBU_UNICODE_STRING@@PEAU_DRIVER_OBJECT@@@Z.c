/*
 * XREFs of ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C00399E0
 * Callers:
 *     FxInitialize @ 0x1C00570B8 (FxInitialize.c)
 * Callees:
 *     memset @ 0x1C001D540 (memset.c)
 *     RtlStringCopyWorkerA @ 0x1C002E400 (RtlStringCopyWorkerA.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0039814 (-FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 */

void __fastcall FxIFRStart(_FX_DRIVER_GLOBALS *FxDriverGlobals, _UNICODE_STRING *RegistryPath, _DRIVER_OBJECT *a3)
{
  unsigned int _a1; // edi
  char *PoolWithTag; // rax
  char *v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8

  if ( !FxLibraryGlobals.IfrDisabled )
  {
    if ( FxDriverGlobals )
    {
      if ( !FxDriverGlobals->WdfLogHeader )
      {
        _a1 = FxIFRGetSize(FxDriverGlobals, RegistryPath);
        PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, _a1, 0x674C7846u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, _a1);
          *((_DWORD *)v6 + 7) = 0;
          *((_QWORD *)v6 + 2) = v6 + 72;
          *((_DWORD *)v6 + 6) = _a1 - 72;
          *(_GUID *)v6 = WdfTraceGuid;
          RtlStringCopyWorkerA(v6 + 36, v7, v8, FxDriverGlobals->Public.DriverName);
          FxDriverGlobals->WdfLogHeader = v6;
          _InterlockedIncrement(&FxDriverGlobals->WdfLogHeaderRefCount);
          WPP_IFR_SF_(FxDriverGlobals, 4u, 0x11u, 0xAu, WPP_tracing_cpp_Traceguids);
          if ( _a1 > 0x1000 )
            WPP_IFR_SF_dd(FxDriverGlobals, 4u, 0x11u, 0xBu, WPP_tracing_cpp_Traceguids, _a1, _a1 >> 12);
        }
      }
    }
  }
}
