__int64 __fastcall CComposition::UpdateMmcssPartners(CRenderTargetManager **this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v13; // rax
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  int v15; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v16[72]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+30h] BYREF

  if ( *((_DWORD *)this + 276) == 6 )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(this[27]);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v19,
      PrimaryMonitorTarget);
    if ( v19 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 144LL))(v19);
      wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(&v18, v13);
      if ( v18 )
      {
        v17 = 0LL;
        v14 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v18 + 8) + 4LL) + v18 + 8);
        if ( (**v14)(v14, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v17) >= 0 )
        {
          v15 = 11;
          memset_0(v16, 0, 0x40uLL);
          v16[8] = *((_BYTE *)this + 416);
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 64LL))(v17, &v15);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
  }
  v2 = (*(__int64 (__fastcall **)(CRenderTargetManager *))(*(_QWORD *)this[29] + 56LL))(this[29]);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x2C5u, 0LL);
  v5 = (*(__int64 (__fastcall **)(CRenderTargetManager *))(*(_QWORD *)this[30] + 48LL))(this[30]);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2C7u, 0LL);
  if ( !v4 || v4 >= 0 && v7 < 0 )
    v4 = v7;
  v8 = CSurfaceManager::ResetTokenThread(this[28]);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2C9u, 0LL);
  if ( !v4 || v4 >= 0 && v10 < 0 )
    return (unsigned int)v10;
  return (unsigned int)v4;
}
