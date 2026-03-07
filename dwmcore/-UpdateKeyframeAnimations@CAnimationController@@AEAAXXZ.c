void __fastcall CAnimationController::UpdateKeyframeAnimations(CAnimationController *this)
{
  __int64 *v1; // rdi
  __int64 *v3; // rbp
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 11);
  v3 = (__int64 *)*((_QWORD *)this + 12);
  while ( v1 != v3 )
  {
    if ( (*((_BYTE *)this + 120) & 0x10) != 0 )
    {
      v6 = *v1;
      v7 = *(_QWORD *)(*v1 + 344);
      *(_QWORD *)(*v1 + 344) = 0LL;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = CWeakReference<CResource>::Create(this, (struct CWeakResourceReference **)(v6 + 344));
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xC5,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
          (const char *)(unsigned int)v8,
          v11);
    }
    if ( (*((_BYTE *)this + 120) & 1) != 0 )
    {
      v4 = *v1;
      v13 = *((_DWORD *)this + 20);
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v4 + 96LL))(v4, 33LL, 18LL, &v13);
      if ( v5 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xCE,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
          (const char *)(unsigned int)v5,
          v11);
    }
    if ( (*((_BYTE *)this + 120) & 2) != 0 )
    {
      v9 = *v1;
      v13 = *((_DWORD *)this + 21);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v9 + 96LL))(v9, 31LL, 18LL, &v13);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xD7,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
          (const char *)(unsigned int)v10,
          v11);
    }
    ++v1;
  }
  *((_BYTE *)this + 120) &= ~1u;
  *((_BYTE *)this + 120) &= 0xEDu;
}
