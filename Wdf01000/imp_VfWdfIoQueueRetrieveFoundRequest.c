__int64 __fastcall imp_VfWdfIoQueueRetrieveFoundRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *FoundRequest,
        WDFREQUEST__ **OutRequest)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v9; // r10
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rsi
  const void *Context; // rax
  __int64 v12; // rdx
  unsigned __int16 ObjectOffset; // [rsp+30h] [rbp-38h] BYREF
  void *PPObject; // [rsp+38h] [rbp-30h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveFoundRequest)(
         DriverGlobals,
         Queue,
         FoundRequest);
  if ( !v6 )
  {
    v7 = (unsigned __int64)*OutRequest;
    PPObject = 0LL;
    ObjectOffset = 0;
    ActivityId = 0LL;
    m_Globals = FxObject::_GetObjectFromHandle(v7, &ObjectOffset)->m_Globals;
    if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = m_Globals->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(m_Globals, v9, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(v6 + 3, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
      {
        if ( !*((_BYTE *)PPObject + 214) )
          v5 = *((_QWORD *)PPObject + 31);
        Context = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v5 + 96));
        McTemplateK0upp_EtwWriteTransfer(
          *(_MCGEN_TRACE_CONTEXT **)(v12 + 152),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v12 + 152) + 184LL),
          _Arg2,
          Context);
      }
    }
  }
  return v6;
}
