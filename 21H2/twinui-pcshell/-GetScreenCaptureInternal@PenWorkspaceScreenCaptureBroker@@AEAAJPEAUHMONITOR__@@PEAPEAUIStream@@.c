/*
 * XREFs of ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x18028C890
 * Callers:
 *     ?GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z @ 0x18028C840 (-GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x18028CAE0 (-GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$reset@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z @ 0x18028C29C (--$reset@VDDAScreenCapture@@@-$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x18028CB04 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1802934D8 (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1802935A0 (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspaceScreenCaptureBroker::GetScreenCaptureInternal(
        PenWorkspaceScreenCaptureBroker *this,
        HMONITOR a2,
        struct IStream **a3,
        struct IWICBitmapSource **a4)
{
  DDAScreenCapture **v6; // rdi
  int v7; // eax
  int ScreenCaptureAsWicBitmapSource; // ebx
  HRESULT Instance; // eax
  DDAScreenCapture *v10; // rbx
  int StreamOfWICBitmapSourceWithOptions; // eax
  struct IWICImagingFactory *v12; // rbx
  HRESULT (__stdcall *CreateFormatConverter)(IWICImagingFactory *, IWICFormatConverter **); // rdi
  int v14; // eax
  __int64 v15; // rdx
  struct DDAScreenCapture *v16; // rax
  struct IWICBitmapSource *v18[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct DDAScreenCapture *v21; // [rsp+80h] [rbp+20h] BYREF
  struct IWICImagingFactory *ppv; // [rsp+98h] [rbp+38h] BYREF

  if ( a4 )
    *a4 = 0LL;
  v6 = (DDAScreenCapture **)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
LABEL_7:
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    Instance = CoCreateInstance(
                 &CLSID_WICImagingFactory2,
                 0LL,
                 1u,
                 &GUID_7b816b45_1996_4476_b132_de9e247c8af0,
                 (LPVOID *)&ppv);
    ScreenCaptureAsWicBitmapSource = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)Instance);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      return (unsigned int)ScreenCaptureAsWicBitmapSource;
    }
    v18[0] = 0LL;
    v10 = *v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
    ScreenCaptureAsWicBitmapSource = DDAScreenCapture::GetScreenCaptureAsWicBitmapSource(v10, ppv, v18);
    if ( ScreenCaptureAsWicBitmapSource < 0 )
    {
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
      goto LABEL_21;
    }
    v19 = GUID_WICPixelFormat32bppBGRA;
    StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                           ppv,
                                           v18[0],
                                           &GUID_ContainerFormatBmp,
                                           &v19,
                                           1,
                                           a3);
    ScreenCaptureAsWicBitmapSource = StreamOfWICBitmapSourceWithOptions;
    if ( StreamOfWICBitmapSourceWithOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
      goto LABEL_20;
    }
    if ( a4 )
    {
      v21 = 0LL;
      v12 = ppv;
      CreateFormatConverter = ppv->lpVtbl->CreateFormatConverter;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      v14 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct DDAScreenCapture **))CreateFormatConverter)(
              v12,
              &v21);
      ScreenCaptureAsWicBitmapSource = v14;
      if ( v14 < 0 )
      {
        v15 = 105LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        goto LABEL_20;
      }
      v14 = (*(__int64 (__fastcall **)(struct DDAScreenCapture *, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v21 + 64LL))(
              v21,
              v18[0],
              &GUID_WICPixelFormat32bppPBGRA,
              0LL,
              0LL,
              0LL,
              1);
      ScreenCaptureAsWicBitmapSource = v14;
      if ( v14 < 0 )
      {
        v15 = 112LL;
        goto LABEL_17;
      }
      v16 = v21;
      v21 = 0LL;
      *a4 = (struct IWICBitmapSource *)v16;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    }
    ScreenCaptureAsWicBitmapSource = 0;
    goto LABEL_20;
  }
  v7 = DDAScreenCapture::CreateInstance(&v21, a2);
  ScreenCaptureAsWicBitmapSource = v7;
  if ( v7 >= 0 )
  {
    std::shared_ptr<DDAScreenCapture>::reset<DDAScreenCapture>((__int64)v6, v21);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)ScreenCaptureAsWicBitmapSource;
}
