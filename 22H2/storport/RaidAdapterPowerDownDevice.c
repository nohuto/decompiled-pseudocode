/*
 * XREFs of RaidAdapterPowerDownDevice @ 0x1C00142B0
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0013118 (RaidAdapterSetDevicePowerIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C000B9B4 (RaidAcquireAdapterRemoveLock.c)
 *     GatewayRegisterForEmptyNotification @ 0x1C0014348 (GatewayRegisterForEmptyNotification.c)
 *     RaidPauseAdapterQueue @ 0x1C00143DC (RaidPauseAdapterQueue.c)
 *     WPP_SF_qq @ 0x1C0033760 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00337B0 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterPowerDownDevice(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids, a1, a2);
  }
  RaidAcquireAdapterRemoveLock(a1);
  RaidPauseAdapterQueue(a1);
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = GatewayRegisterForEmptyNotification(a1 + 832, *(_QWORD *)(a1 + 8), a2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 24LL, &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids, a1, a2, v4);
  }
  return 259LL;
}
