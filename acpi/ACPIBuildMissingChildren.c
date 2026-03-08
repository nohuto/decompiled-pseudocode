/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C000D8BC
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C001AA10 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE34 (ACPIDetectPdoDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00149A0 (WPP_RECORDER_SF_DD.c)
 *     OSNotifyCreateDevice @ 0x1C0032738 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C003285C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C0032ABC (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C0032BC0 (OSNotifyCreateThermalZone.c)
 *     AMLIGetFirstChild @ 0x1C00482EC (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C00488D8 (AMLIIterateSiblingsNext.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  __int64 *i; // rax
  __int64 v2; // rax
  int Device; // eax
  int v4; // edx
  ULONG_PTR v5; // rbx

  if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x33u) )
  {
    for ( i = (__int64 *)AMLIGetFirstChild(*(_QWORD *)(a1 + 760)); ; i = (__int64 *)AMLIIterateSiblingsNext(v5) )
    {
      v5 = (ULONG_PTR)i;
      if ( !i )
        return 0LL;
      v2 = *i;
      if ( !*(_QWORD *)(*(_QWORD *)v5 + 104LL) )
      {
        switch ( *(_WORD *)(v2 + 66) )
        {
          case 6:
            Device = OSNotifyCreateDevice(v5);
            break;
          case 0xA:
            Device = OSNotifyCreateOperationRegion(v5);
            break;
          case 0xC:
            Device = OSNotifyCreateProcessor(v5, 0x20000000000LL);
            break;
          case 0xD:
            Device = OSNotifyCreateThermalZone(v5, 0x20000000000LL);
            break;
          default:
            continue;
        }
        if ( Device < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v4) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v4,
            22,
            24,
            (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
            Device,
            v5);
        }
      }
    }
  }
  return 0LL;
}
