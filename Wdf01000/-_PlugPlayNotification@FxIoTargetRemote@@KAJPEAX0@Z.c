__int64 __fastcall FxIoTargetRemote::_PlugPlayNotification(char *NotificationStructure, FxIoTargetRemote *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  const _GUID *v5; // rbx
  unsigned int v6; // esi
  unsigned __int8 v7; // r8
  const void *_a1; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v10)(unsigned __int64); // rdx
  unsigned int v11; // eax
  const void *v12; // rax
  int v13; // edx
  const void *v14; // rax
  const void *v15; // rax
  __int16 v16; // dx
  const void *v17; // rax
  unsigned __int64 v18; // rax
  void (__fastcall *v19)(unsigned __int64); // rdx
  const void *v20; // rax
  _WDF_IO_TARGET_OPEN_PARAMS params; // [rsp+30h] [rbp-98h] BYREF

  FxObject::AddRef(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    51,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  m_Globals = Context->m_Globals;
  v5 = (const _GUID *)(NotificationStructure + 4);
  v6 = 0;
  if ( FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_QUERY_REMOVE) )
  {
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Context);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xAu, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1);
    }
    if ( Context->m_EvtQueryRemove.m_Method )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Context);
      v11 = v10(ObjectHandleUnchecked);
LABEL_25:
      v6 = v11;
      goto LABEL_26;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v12 = (const void *)FxObject::GetObjectHandleUnchecked(Context);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xBu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v12);
    }
    v13 = 1;
    goto LABEL_16;
  }
  if ( !FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_COMPLETE) )
  {
    if ( !FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_CANCELLED) )
      goto LABEL_26;
    if ( m_Globals->FxVerboseOn )
    {
      v17 = (const void *)FxObject::GetObjectHandleUnchecked(Context);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xEu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v17);
    }
    if ( !Context->m_EvtRemoveCanceled.m_Method )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v20 = (const void *)FxObject::GetObjectHandleUnchecked(Context);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xFu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v20);
      }
      memset(&params.EvtIoTargetQueryRemove, 0, 0x80uLL);
      params.Size = 136;
      params.Type = WdfIoTargetOpenReopen;
      v11 = FxIoTargetRemote::Open(Context, &params);
      goto LABEL_25;
    }
LABEL_21:
    v18 = FxObject::GetObjectHandleUnchecked(Context);
    v19(v18);
    goto LABEL_26;
  }
  if ( m_Globals->FxVerboseOn )
  {
    v14 = (const void *)FxObject::GetObjectHandleUnchecked(Context);
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v14);
  }
  if ( Context->m_EvtRemoveComplete.m_Method )
    goto LABEL_21;
  if ( m_Globals->FxVerboseOn )
  {
    v15 = (const void *)FxObject::GetObjectHandleUnchecked(Context);
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, v16 + 13, WPP_FxIoTargetRemotekm_cpp_Traceguids, v15);
  }
  v13 = 2;
LABEL_16:
  FxIoTargetRemote::Close(Context, v13, v7);
LABEL_26:
  Context->Release(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    136,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  return v6;
}
