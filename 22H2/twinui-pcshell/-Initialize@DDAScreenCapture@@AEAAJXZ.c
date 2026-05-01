/*
 * XREFs of ?Initialize@DDAScreenCapture@@AEAAJXZ @ 0x180293958
 * Callers:
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x180293328 (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x180293A94 (-InitializeDuplication@DDAScreenCapture@@AEAAJXZ.c)
 */

__int64 __fastcall DDAScreenCapture::Initialize(DDAScreenCapture *this)
{
  D3D_DRIVER_TYPE *v1; // rbx
  __int64 *ppImmediateContext; // rbp
  __int64 *ppDevice; // r14
  HRESULT v5; // esi
  int v7; // eax
  unsigned int v8; // ebx
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v10[3]; // [rsp+58h] [rbp-40h] BYREF
  char v11; // [rsp+64h] [rbp-34h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevels[4]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = (D3D_DRIVER_TYPE *)v10;
  *(__m128i *)pFeatureLevels = _mm_load_si128((const __m128i *)&_xmm);
  v10[0] = 1;
  v10[1] = 5;
  ppImmediateContext = (__int64 *)((char *)this + 112);
  v10[2] = 2;
  ppDevice = (__int64 *)((char *)this + 104);
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(ppImmediateContext);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(ppDevice);
    v5 = D3D11CreateDevice(
           0LL,
           *v1,
           0LL,
           0,
           pFeatureLevels,
           4u,
           7u,
           (ID3D11Device **)ppDevice,
           &pFeatureLevel,
           (ID3D11DeviceContext **)ppImmediateContext);
    if ( v5 >= 0 )
      break;
    if ( ++v1 == (D3D_DRIVER_TYPE *)&v11 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  v7 = DDAScreenCapture::InitializeDuplication(this);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
