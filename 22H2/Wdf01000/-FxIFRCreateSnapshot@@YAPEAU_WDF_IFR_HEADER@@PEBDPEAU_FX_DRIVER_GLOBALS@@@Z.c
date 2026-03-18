/*
 * XREFs of ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003CB74
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C003CF28 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     memmove @ 0x1C001D640 (memmove.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0039B00 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003D47C (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     WPP_IFR_SF_ds @ 0x1C003D520 (WPP_IFR_SF_ds.c)
 *     WPP_IFR_SF_s @ 0x1C003D654 (WPP_IFR_SF_s.c)
 */

_WDF_IFR_HEADER *__fastcall FxIFRCreateSnapshot(const char *DriverName, _FX_DRIVER_GLOBALS *FxGlobalsForTracing)
{
  _WDF_IFR_HEADER *v3; // rsi
  int v4; // edi
  KIRQL v6; // al
  unsigned int v7; // r8d
  _LIST_ENTRY *Flink; // rbx
  KIRQL v9; // r15
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  signed __int32 v14; // eax
  bool v15; // zf
  signed __int32 v16; // edx
  unsigned int Blink; // ecx
  SIZE_T v18; // rdx
  size_t v19; // rdi
  _WDF_IFR_HEADER *PoolWithTag; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
  Flink = FxLibraryGlobals.FxDriverGlobalsList.Flink;
  v9 = v6;
  while ( 1 )
  {
    if ( Flink == &FxLibraryGlobals.FxDriverGlobalsList )
    {
      WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xAu, traceGuid, DriverName);
      WPP_IFR_SF_(FxGlobalsForTracing, 3u, 0x16u, 0xBu, WPP_TracingIfrReplay_cpp_Traceguids);
      goto LABEL_6;
    }
    if ( !_stricmp((const char *)&Flink[28], DriverName) )
      break;
    Flink = Flink->Flink;
  }
  if ( Flink[6].Flink )
  {
    v14 = (signed __int32)Flink[25].Flink;
    while ( 1 )
    {
      v15 = v14 == 0;
      if ( v14 <= 0 )
        break;
      v16 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)&Flink[25], v14 + 1, v14);
      if ( v16 == v14 )
      {
        v15 = v16 == -1;
        break;
      }
    }
    if ( !v15 )
    {
      Blink = (unsigned int)Flink[6].Flink[1].Blink;
      v18 = Blink + 72;
      if ( (unsigned int)v18 < Blink )
      {
        v4 = -1073741675;
      }
      else if ( Blink - 4024 > 0xF000 )
      {
        v4 = -1073741306;
      }
      else
      {
        v19 = (unsigned int)v18;
        PoolWithTag = (_WDF_IFR_HEADER *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v18, 0x674C7846u);
        v3 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Flink[6].Flink, v19);
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
      FxIFRStop((_FX_DRIVER_GLOBALS *)Flink);
    }
  }
  else
  {
    WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xCu, traceGuid, DriverName);
  }
LABEL_6:
  KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v9);
  if ( v4 < 0 )
    WPP_IFR_SF_ds(FxGlobalsForTracing, v10, v11, v12, traceGuid, v4, DriverName);
  return v3;
}
