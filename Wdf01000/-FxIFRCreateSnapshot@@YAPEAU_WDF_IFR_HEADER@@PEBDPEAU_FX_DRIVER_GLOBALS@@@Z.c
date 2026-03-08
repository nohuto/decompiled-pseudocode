/*
 * XREFs of ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0026CBC
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C0027070 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     memmove @ 0x1C000B140 (memmove.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00228D4 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C00275CC (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     WPP_IFR_SF_ds @ 0x1C0027678 (WPP_IFR_SF_ds.c)
 *     WPP_IFR_SF_s @ 0x1C00277AC (WPP_IFR_SF_s.c)
 */

_WDF_IFR_HEADER *__fastcall FxIFRCreateSnapshot(const char *DriverName, _FX_DRIVER_GLOBALS *FxGlobalsForTracing)
{
  _WDF_IFR_HEADER *v3; // rsi
  int v4; // edi
  KIRQL v6; // al
  unsigned int v7; // r8d
  _FX_DRIVER_GLOBALS *Flink; // rbx
  KIRQL v9; // r15
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  signed __int32 WdfLogHeaderRefCount; // eax
  signed __int32 v15; // ecx
  signed __int32 v16; // edx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  size_t v19; // rdi
  _WDF_IFR_HEADER *Pool2; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  Flink = FxDriverGlobals;
  v9 = v6;
  while ( 1 )
  {
    if ( Flink == (_FX_DRIVER_GLOBALS *)&FxDriverGlobals )
    {
      WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xAu, traceGuid, DriverName);
      WPP_IFR_SF_(FxGlobalsForTracing, 3u, 0x16u, 0xBu, WPP_TracingIfrReplay_cpp_Traceguids);
      goto LABEL_6;
    }
    if ( !_stricmp(Flink->Public.DriverName, DriverName) )
      break;
    Flink = (_FX_DRIVER_GLOBALS *)Flink->Linkage.Flink;
  }
  if ( Flink->WdfLogHeader )
  {
    WdfLogHeaderRefCount = Flink->WdfLogHeaderRefCount;
    while ( WdfLogHeaderRefCount > 0 )
    {
      v15 = WdfLogHeaderRefCount;
      v16 = WdfLogHeaderRefCount + 1;
      WdfLogHeaderRefCount = _InterlockedCompareExchange(
                               &Flink->WdfLogHeaderRefCount,
                               WdfLogHeaderRefCount + 1,
                               WdfLogHeaderRefCount);
      if ( v15 == WdfLogHeaderRefCount )
        goto LABEL_16;
    }
    v16 = WdfLogHeaderRefCount;
LABEL_16:
    if ( v16 )
    {
      v17 = *((_DWORD *)Flink->WdfLogHeader + 6);
      v18 = v17 + 72;
      if ( (unsigned int)v18 < v17 )
      {
        v4 = -1073741675;
      }
      else if ( v17 - 4024 > 0xF000 )
      {
        v4 = -1073741306;
      }
      else
      {
        v19 = (unsigned int)v18;
        Pool2 = (_WDF_IFR_HEADER *)ExAllocatePool2(64LL, v18, 1733064774LL);
        v3 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Flink->WdfLogHeader, v19);
          v3->Base = (unsigned __int8 *)&v3[1];
          v4 = FxIFRValidateLogHeader(v3);
          if ( v4 < 0 )
          {
            ExFreePoolWithTag(v3, 0x674C7846u);
            v3 = 0LL;
          }
        }
        else
        {
          v4 = -1073741670;
        }
      }
      FxIFRStop(Flink);
    }
  }
  else
  {
    WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xCu, traceGuid, DriverName);
  }
LABEL_6:
  KeReleaseSpinLock(&SpinLock, v9);
  if ( v4 < 0 )
    WPP_IFR_SF_ds(FxGlobalsForTracing, v10, v11, v12, traceGuid, v4, DriverName);
  return v3;
}
