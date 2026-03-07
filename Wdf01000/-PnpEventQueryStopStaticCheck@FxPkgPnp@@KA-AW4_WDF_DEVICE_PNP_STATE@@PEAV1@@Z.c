__int64 __fastcall FxPkgPnp::PnpEventQueryStopStaticCheck(FxPkgPnp *This)
{
  unsigned int _a1; // eax
  int v3; // ecx
  unsigned __int8 v4; // dl
  __int64 v5; // rcx
  unsigned int v6; // r8d
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  _a1 = This->m_DeviceStopCount;
  if ( _a1 )
  {
    WPP_IFR_SF_D(This->m_Globals, 4u, 0xCu, 0x18u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
    v3 = -1073741436;
LABEL_5:
    This->m_PendingPnPIrp->IoStatus.Status = v3;
    return 281LL;
  }
  if ( FxPkgPnp::IsInSpecialUse(This) )
  {
    WPP_IFR_SF_ddddd(
      *(_FX_DRIVER_GLOBALS **)(v5 + 16),
      v4,
      v6,
      0x19u,
      traceGuid,
      *(_DWORD *)(v5 + 280),
      *(_DWORD *)(v5 + 284),
      *(_DWORD *)(v5 + 288),
      *(_DWORD *)(v5 + 292),
      *(_DWORD *)(v5 + 300));
    v3 = -1073741661;
    goto LABEL_5;
  }
  return 271LL;
}
