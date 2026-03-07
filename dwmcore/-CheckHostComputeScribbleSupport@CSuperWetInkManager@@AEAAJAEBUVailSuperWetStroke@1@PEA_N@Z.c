__int64 __fastcall CSuperWetInkManager::CheckHostComputeScribbleSupport(
        struct ID3D12Device *this,
        const struct CSuperWetInkManager::VailSuperWetStroke *a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  CD3DDevice *v8; // rbx
  int D3D12Device; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ID3D12Device *v13; // [rsp+40h] [rbp+8h] BYREF
  struct ID3D12CommandQueue *v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = this;
  *a3 = 0;
  LOBYTE(v13) = 0;
  v5 = CSuperWetInkManager::CheckCommonComputeScribbleSupport((CSuperWetInkManager *)this, (bool *)&v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !(_BYTE)v13 )
      return 0LL;
    v13 = 0LL;
    v8 = (CD3DDevice *)*((_QWORD *)a2 + 2);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
    D3D12Device = CD3DDevice::TryGetD3D12Device(v8, &v13);
    v6 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v10 = 736LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)D3D12Device);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
      return v6;
    }
    if ( !v13 )
      goto LABEL_12;
    D3D12Device = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(*((CD3DDevice **)a2 + 2), &v14);
    v6 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v10 = 747LL;
      goto LABEL_10;
    }
    if ( v14 )
    {
      LOBYTE(v11) = 1;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, char *, __int64))(**(_QWORD **)a2 + 288LL))(
             *(_QWORD *)a2,
             *((_QWORD *)a2 + 2),
             (char *)a2 + 32,
             v11) )
      {
        *a3 = 1;
      }
    }
    else
    {
LABEL_12:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0q_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          0LL);
    }
    v6 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D5,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
