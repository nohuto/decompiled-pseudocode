__int64 CExternalLayer::CreateBitmap(CDeviceManager *a1, _DWORD *a2, __int64 a3, struct _LUID *a4, int a5, ...)
{
  CD3DDevice *v5; // r13
  _BYTE *v6; // r14
  _BYTE *v7; // rsi
  struct _LUID v10; // rdx
  int ExistingDevice; // eax
  unsigned int v12; // ecx
  CD3DDevice *v13; // rbx
  unsigned int v14; // edi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rax
  _DWORD v19[6]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+58h]
  struct _LUID *v23; // [rsp+B8h] [rbp+60h]
  CD3DDevice *v24; // [rsp+C8h] [rbp+70h] BYREF
  va_list va; // [rsp+C8h] [rbp+70h]
  va_list va1; // [rsp+D0h] [rbp+78h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v24 = va_arg(va1, CD3DDevice *);
  v23 = a4;
  v22 = a3;
  v5 = v24;
  v6 = a2 + 3;
  v7 = a2 + 2;
  v21 = 0LL;
  *(_QWORD *)v24 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start,
      *a2,
      a2[1],
      *(_BYTE *)a2 + *v7,
      a2[1] + *v6);
  v10 = *a4;
  v19[0] = *(_DWORD *)v7;
  v19[1] = *(_DWORD *)v6;
  v24 = 0LL;
  ExistingDevice = CDeviceManager::GetExistingDevice(a1, v10, (struct CD3DDevice **)va);
  v13 = v24;
  v14 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ExistingDevice, 0x21u, 0LL);
  }
  else
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v21);
    v15 = CD3DDevice::CreateRenderTargetBitmap(v13, a1, v19, v22, v23, a5, &v21);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x28u, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0qqqq_EventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
          *a2,
          a2[1],
          *(_BYTE *)a2 + *v7,
          a2[1] + *v6);
      v17 = v21;
      v21 = 0LL;
      *(_QWORD *)v5 = v17;
    }
  }
  if ( v13 )
    CD3DDevice::Release(v13);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
  return v14;
}
