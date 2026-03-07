__int64 __fastcall CSceneSurfaceMaterialInput::SetSurface(struct CResource **this, struct CResource *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  struct CResource *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != this[10] )
  {
    v4 = CResource::RegisterNotifier((CResource *)this, a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
    v7 = *this;
    this[10] = a2;
    (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v7 + 9))(this, 0LL, this);
  }
  return 0LL;
}
