/*
 * XREFs of imp_WdfIoTargetGetDevice @ 0x1C00635B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 */

WDFDEVICE__ *__fastcall imp_WdfIoTargetGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  FxIoTarget *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a2; // rax
  const void *v6; // rbx
  char v7; // dl
  FxIoTarget *pTarget; // [rsp+50h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget);
  v3 = pTarget;
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
    v3 = pTarget;
  }
  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v3->m_DeviceBase);
  v6 = _a2;
  if ( v7 )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, _a2);
  return (WDFDEVICE__ *)v6;
}
