char __fastcall CRenderTargetManager::PostPresent(CRenderTargetManager *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  char v6; // si
  char v7; // di
  __int64 *v9; // r14
  __int64 *i; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v14; // rax
  int (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  int v19; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v20[72]; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v21[16]; // [rsp+98h] [rbp+27h] BYREF

  v4 = *(_QWORD *)this;
  v5 = *(_QWORD *)(v4 + 216);
  v6 = (!*(_BYTE *)(v5 + 581) || *(_BYTE *)(v5 + 582))
    && (*(_DWORD *)(v4 + 1228) || CSuperWetInkManager::HasActiveInk(*(CSuperWetInkManager **)(v4 + 256)));
  if ( v6 != *((_BYTE *)this + 583) )
  {
    *((_BYTE *)this + 576) = 1;
    v9 = (__int64 *)*((_QWORD *)this + 2);
    for ( i = (__int64 *)*((_QWORD *)this + 1); i != v9; ++i )
    {
      v11 = *i;
      v17 = 0LL;
      if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v11, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v17) >= 0 )
      {
        LOBYTE(v12) = v6;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 112LL))(v17, v12);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
    }
    CRenderTargetManager::EndTargetEnumeration(this);
    *((_BYTE *)this + 583) = v6;
  }
  v7 = *((_BYTE *)this + 578);
  *((_BYTE *)this + 578) = 0;
  CDeviceManager::AdvanceFrame((CDeviceManager *)v4);
  if ( !a2 && *(int *)(*(_QWORD *)this + 1104LL) >= 5 )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(this);
    if ( PrimaryMonitorTarget )
    {
      v14 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)PrimaryMonitorTarget + 144LL))(PrimaryMonitorTarget);
      wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(&v18, v14);
      if ( v18 )
      {
        v17 = 0LL;
        v15 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v18 + 8) + 4LL) + v18 + 8);
        if ( (**v15)(v15, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v17) >= 0 )
        {
          v19 = 5;
          memset_0(v20, 0, 0x40uLL);
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 64LL))(v17, &v19);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES,
              v16,
              1LL,
              v21);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
    }
  }
  if ( v7 && (int)CRenderTargetManager::EnsureDxDisplayModeChangedEvent(this) >= 0 )
    SetEvent(*((HANDLE *)this + 66));
  return v7;
}
