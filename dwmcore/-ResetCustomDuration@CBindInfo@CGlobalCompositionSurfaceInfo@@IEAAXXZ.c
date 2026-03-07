void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::ResetCustomDuration(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v1; // rcx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 56) )
  {
    *((_DWORD *)this + 56) = 0;
    v1 = *((_QWORD *)this + 25);
    v2 = 0LL;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 24LL))(
           v1,
           &GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc,
           &v2) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, 0LL, 0LL);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v2);
  }
}
