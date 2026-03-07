__int64 __fastcall CHolographicClient::EnsureHolographicCompositor(CHolographicClient *this)
{
  __int64 *v1; // rdi
  int HolographicCompositor; // eax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, char *); // rbx
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 24);
  if ( !*((_QWORD *)this + 3) && IsCreateHolographicCompositorPresent() )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
    HolographicCompositor = CreateHolographicCompositor(&GUID_bfb8ced1_fafb_468b_993a_68cadeba50a2, v1);
    if ( HolographicCompositor < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        329LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
        (const char *)(unsigned int)HolographicCompositor,
        v9);
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v1;
    v5 = **v4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
    v6 = v5(v4, &GUID_97234441_f8b8_4244_bbb3_f977d0eb60a5, (char *)this + 32);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        330LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
        (const char *)(unsigned int)v6,
        v9);
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 4) + 32LL))(
           *((_QWORD *)this + 4),
           ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        331LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
        (const char *)(unsigned int)v7,
        v9);
  }
  return 0LL;
}
