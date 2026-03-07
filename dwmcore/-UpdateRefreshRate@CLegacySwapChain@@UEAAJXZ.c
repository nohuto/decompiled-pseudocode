__int64 __fastcall CLegacySwapChain::UpdateRefreshRate(CLegacySwapChain *this)
{
  unsigned int v1; // ebx
  CDisplayManager *v3; // rcx
  int DXGIOutput; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  char CompositorClockBoost; // al
  __int64 v9; // rdx
  struct IDXGIOutputDWM *v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v15[40]; // [rsp+50h] [rbp-B0h] BYREF
  DXGI_RATIONAL v16; // [rsp+78h] [rbp-88h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 28) )
  {
    v11 = 0LL;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)&v11);
    DXGIOutput = CDisplayManager::GetDXGIOutput(v3, *(struct _LUID *)((char *)this + 88), *((_DWORD *)this + 28), &v11);
    v1 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, DXGIOutput, 0x167u, 0LL);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v11 + 32LL))(v11, v15);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x16Au, 0LL);
      }
      else
      {
        ValidateMinMaxVBlankDuration((const struct DXGI_OUTPUT_DWM_DESC *)v15, (LONGLONG *)&v14, (LONGLONG *)&v13, &v12);
        if ( CLegacySwapChain::CalcVBlankDuration(
               (struct DXGI_RATIONAL *)this,
               &v16,
               (struct DXGI_RATIONAL)v14,
               (struct DXGI_RATIONAL)v13,
               v12) )
        {
          CompositorClockBoost = CComposition::GetCompositorClockBoost(g_pComposition);
          v9 = *(_QWORD *)this;
          LOBYTE(v9) = CompositorClockBoost;
          (*(void (__fastcall **)(CLegacySwapChain *, __int64))(*(_QWORD *)this + 104LL))(this, v9);
        }
      }
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v11);
  }
  return v1;
}
