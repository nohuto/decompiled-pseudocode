__int64 __fastcall CLegacySwapChain::PostPresent(CLegacySwapChain *this, char a2, bool a3)
{
  int v4; // eax
  int v5; // ecx
  unsigned __int8 v6; // di
  __int64 i; // rdx
  __int64 v8; // r9
  CDisplayManager *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct IDXGIOutputDWM *v13[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v14[12]; // [rsp+40h] [rbp-D8h] BYREF
  int v15; // [rsp+4Ch] [rbp-CCh]

  if ( !a2 )
  {
    CD3DDevice::AdvanceUnpin(
      *((CD3DDevice **)this + 10),
      *(struct _LUID *)((char *)this + 116),
      *((_DWORD *)this + 28),
      a3);
    *((_DWORD *)this + 68) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 256LL))(*((_QWORD *)this + 28));
    **((_DWORD **)this + 17) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_LEGACYSWAPCHAIN_BUFFERFLIP,
        *((unsigned int *)this + 68));
    v4 = *((_DWORD *)this + 85);
    if ( v4 )
    {
      *((_DWORD *)this + 85) = v4 - 1;
      CLegacySwapChain::ReleaseD3D12Resources(this);
    }
  }
  if ( *((_DWORD *)this + 31) == -1 )
  {
    v13[0] = 0LL;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(v13);
    if ( CDisplayManager::GetDXGIOutput(v10, *(struct _LUID *)((char *)this + 88), *((_DWORD *)this + 28), v13) >= 0
      && (*(int (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v13[0] + 32LL))(v13[0], v14) >= 0 )
    {
      *((_DWORD *)this + 31) = v15;
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v13);
  }
  v5 = *((_DWORD *)this + 80);
  if ( v5 )
  {
    v6 = 0;
    if ( *((_BYTE *)this + 346) )
    {
LABEL_17:
      v6 = 1;
    }
    else
    {
      for ( i = *((_QWORD *)this + 31); i != *((_QWORD *)this + 32); i += 8LL )
      {
        v8 = *(_QWORD *)(*(_QWORD *)i + 96LL);
        if ( v8 && *(_BYTE *)(v8 + 240) )
          goto LABEL_17;
      }
    }
    if ( *((_BYTE *)this + 345) != v6 )
    {
      if ( v5 == 1 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 28) + 272LL))(*((_QWORD *)this + 28), v6);
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x55Eu, 0LL);
          return 0LL;
        }
        *((_BYTE *)g_pComposition + 1276) = 1;
      }
      *((_BYTE *)this + 345) = v6;
    }
  }
  return 0LL;
}
