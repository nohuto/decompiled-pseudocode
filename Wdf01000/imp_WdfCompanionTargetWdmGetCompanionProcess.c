_EPROCESS *__fastcall imp_WdfCompanionTargetWdmGetCompanionProcess(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget)
{
  FxCompanionTarget *pCompanionTarget; // [rsp+30h] [rbp+8h] BYREF

  pCompanionTarget = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)CompanionTarget,
    0x1038u,
    (void **)&pCompanionTarget);
  return pCompanionTarget->m_RdDeviceCompanion->GetCompanionProcess(pCompanionTarget->m_RdDeviceCompanion);
}
