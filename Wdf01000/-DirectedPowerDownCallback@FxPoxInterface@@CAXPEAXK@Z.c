void __fastcall FxPoxInterface::DirectedPowerDownCallback(FxPoxInterface *Context, unsigned int Flags)
{
  const void *_a1; // rax
  __int64 v4; // rdx
  __int64 v5; // r10

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Context->m_PkgPnp->m_DeviceBase);
  WPP_IFR_SF_qq(
    *(_FX_DRIVER_GLOBALS **)(v5 + 16),
    4u,
    0xCu,
    0x13u,
    WPP_PoxInterfaceKm_cpp_Traceguids,
    _a1,
    *(const void **)(v4 + 144));
  _InterlockedExchange(&Context->m_DirectedTransitionActive, 1);
  FxPoxInterface::DprProcessEventFromPoxCallback(Context, DprEventPoxDirectedPowerDown);
}
