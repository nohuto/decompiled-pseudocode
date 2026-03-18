/*
 * XREFs of VfEvtIoRead @ 0x1C00C57B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002E6B8 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x1C0043BE4 (McTemplateK0upp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x1C004406C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0044098 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C00440F8 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C4514 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoRead(WDFQUEUE__ *Queue, WDFREQUEST__ *Request, unsigned __int64 Length)
{
  __int64 v6; // rbx
  char *TypedContext; // r15
  void (__fastcall *v8)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64); // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // r15
  const void *Context; // rax
  __int64 v12; // r9
  _MCGEN_TRACE_CONTEXT *v13; // rcx
  unsigned __int8 CurrentIrql; // bl
  wchar_t critRegion; // [rsp+30h] [rbp-30h] BYREF
  void *PPObject; // [rsp+38h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-20h] BYREF

  v6 = 0LL;
  TypedContext = VfWdfObjectGetTypedContext(Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v8 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64))*((_QWORD *)TypedContext + 4);
  if ( v8 )
  {
    PPObject = 0LL;
    critRegion = 0;
    ActivityId = 0LL;
    m_Globals = FxObject::_GetObjectFromHandle((unsigned __int64)Request, &critRegion)->m_Globals;
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
          v6 = *((_QWORD *)PPObject + 31);
        Context = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v6 + 96));
        McTemplateK0upp_EtwWriteTransfer(
          v13,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v12 + 152) + 184LL),
          _Arg2,
          Context);
      }
      v8(Queue, Request, Length);
    }
    else
    {
      LOBYTE(critRegion) = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry((unsigned __int8 *)&critRegion);
      v8(Queue, Request, Length);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v8);
    }
  }
}
