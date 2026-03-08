/*
 * XREFs of ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x180023E14
 * Callers:
 *     ??0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z @ 0x180023C84 (--0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z @ 0x180023CD8 (--0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x180023D40 (--0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x180221490 (--0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z @ 0x18026AAE8 (--0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

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
