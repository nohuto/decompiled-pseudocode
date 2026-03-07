__int64 __fastcall CSceneSurfaceMaterialInput::OnSceneFrameTick(
        CSceneSurfaceMaterialInput *this,
        struct ISpectreRenderer *a2)
{
  _QWORD *v2; // rsi
  __int64 (__fastcall *v5)(struct ISpectreRenderer *, _QWORD *); // rbx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 8);
  if ( !*((_QWORD *)this + 1) )
  {
    v5 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD *))(*(_QWORD *)a2 + 80LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 1);
    v6 = v5(a2, v2);
    if ( v6 < 0 )
    {
      v7 = 204LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(
           *v2,
           *((unsigned int *)this + 10),
           *((unsigned int *)this + 11),
           *((unsigned int *)this + 12));
    if ( v6 < 0 )
    {
      v7 = 209LL;
      goto LABEL_4;
    }
    (*(void (__fastcall **)(char *, _QWORD, char *))(*((_QWORD *)this - 8) + 72LL))(
      (char *)this - 64,
      0LL,
      (char *)this - 64);
  }
  return 0LL;
}
