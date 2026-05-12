/*
 * XREFs of StorPortUnitDirectedPowerDown @ 0x1C0041350
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C0005910 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006370 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C00063A0 (RaidIsUnitControlSupported.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x1C003DE2C (McTemplateK0pquuutx_EtwWriteTransfer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003FF80 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitDirectedPowerDownRequestD3 @ 0x1C00415C8 (StorPortUnitDirectedPowerDownRequestD3.c)
 *     RaidNotifyPoAboutAdaptiveD3Engagement @ 0x1C0058F58 (RaidNotifyPoAboutAdaptiveD3Engagement.c)
 */

void __fastcall StorPortUnitDirectedPowerDown(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // r9
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  char v7; // [rsp+28h] [rbp-30h]
  char v8; // [rsp+30h] [rbp-28h]
  char v9; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    v4 = *(_QWORD **)(Context + 1744);
    if ( (v4[4] & 0x300) == 0x300 )
    {
      if ( (*(_BYTE *)(Context + 451) & 4) == 0 )
      {
        RaidNotifyPoAboutAdaptiveD3Engagement(Context);
        v4 = *(_QWORD **)(Context + 1744);
      }
      PoFxCompleteDirectedPowerDown(*v4, v2, v3);
    }
    else
    {
      if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
      {
        v5 = *(_QWORD *)(Context + 24);
        v9 = *(_BYTE *)(Context + 98);
        v8 = *(_BYTE *)(Context + 97);
        v7 = *(_BYTE *)(Context + 96);
        v6 = *(_DWORD *)(v5 + 56);
        McTemplateK0pquuutx_EtwWriteTransfer(v5, &EventUnitDirectedPowerDownStart, v3, *v4, v6, v7, v8, v9);
      }
      RaidUnitReenablePendingTimer(Context, 0);
      *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) &= ~8u;
      *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) &= ~0x10u;
      if ( *(_DWORD *)(Context + 920) && (*(_BYTE *)(Context + 449) & 0x40) != 0 )
        *(_BYTE *)(Context + 1734) = 0;
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
      StorPortUnitDirectedPowerDownRequestD3((PVOID)Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
    }
  }
}
