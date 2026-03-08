/*
 * XREFs of ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x1800EE2AC
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180026018 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800EDCB4 (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800F0E64 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 */

void __fastcall CSurfaceShaderComposer::~CSurfaceShaderComposer(CSurfaceShaderComposer *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    CMILRefCountBaseT<IDeviceResource>::InternalRelease(v2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  `vector destructor iterator'(
    (char *)this,
    8LL,
    6LL,
    (void (__fastcall *)(char *))CSurfaceShaderComposer::SurfaceShader::~SurfaceShader);
}
