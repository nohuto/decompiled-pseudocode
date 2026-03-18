/*
 * XREFs of imp_VfWdfRequestComplete @ 0x1C00C2750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002E6B8 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x1C0043BE4 (McTemplateK0upp_EtwWriteTransfer.c)
 */

void __fastcall imp_VfWdfRequestComplete(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request, int Status)
{
  __int64 v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // r15
  const void *Context; // rax
  __int64 v10; // r9
  _MCGEN_TRACE_CONTEXT *v11; // rcx
  wchar_t ObjectOffset; // [rsp+30h] [rbp-30h] BYREF
  void *PPObject; // [rsp+38h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0LL;
  PPObject = 0LL;
  ObjectOffset = 0;
  ActivityId = 0LL;
  m_Globals = FxObject::_GetObjectFromHandle((unsigned __int64)Request, &ObjectOffset)->m_Globals;
  if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    _Arg2 = m_Globals->Driver->m_DriverDeviceAdd.Method;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, &PPObject);
    if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
    }
    if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
    {
      if ( !*((_BYTE *)PPObject + 214) )
        v4 = *((_QWORD *)PPObject + 31);
      Context = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v4 + 96));
      McTemplateK0upp_EtwWriteTransfer(
        v11,
        &FX_REQUEST_COMPLETE,
        &ActivityId,
        **(_BYTE **)(*(_QWORD *)(v10 + 152) + 184LL),
        _Arg2,
        Context);
    }
  }
  WdfVersion.Functions.pfnWdfRequestComplete(DriverGlobals, Request, Status);
}
