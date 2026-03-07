CCompositionLight *__fastcall CCompositionLight::CCompositionLight(
        CCompositionLight *this,
        struct CComposition *a2,
        char a3)
{
  CCompositionLight *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompositionLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 10) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 11) = (char *)this + 120;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_DWORD *)this + 26) = 1;
  *(_QWORD *)((char *)this + 108) = 1LL;
  *((_QWORD *)this + 16) = (char *)this + 160;
  *((_QWORD *)this + 17) = (char *)this + 160;
  result = this;
  *((_DWORD *)this + 36) = 1;
  *(_QWORD *)((char *)this + 148) = 1LL;
  *((_BYTE *)this + 168) = 1;
  *((_BYTE *)this + 169) = a3;
  *((_WORD *)this + 85) = 1;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_BYTE *)this + 252) = 0;
  return result;
}
