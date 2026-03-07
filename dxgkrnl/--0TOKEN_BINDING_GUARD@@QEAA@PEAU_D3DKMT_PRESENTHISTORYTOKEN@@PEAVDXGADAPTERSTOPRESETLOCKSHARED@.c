TOKEN_BINDING_GUARD *__fastcall TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
        TOKEN_BINDING_GUARD *this,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a3,
        struct COREDEVICEACCESS *a4)
{
  *(_DWORD *)this = -1073741823;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = a4;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 122LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pToken", 122LL, 0LL, 0LL, 0LL, 0LL);
  }
  return this;
}
