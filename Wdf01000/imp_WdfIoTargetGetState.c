/*
 * XREFs of imp_WdfIoTargetGetState @ 0x1C0051630
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetGetState(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  FxIoTarget *pTarget; // [rsp+30h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  return (unsigned int)pTarget->m_State;
}
