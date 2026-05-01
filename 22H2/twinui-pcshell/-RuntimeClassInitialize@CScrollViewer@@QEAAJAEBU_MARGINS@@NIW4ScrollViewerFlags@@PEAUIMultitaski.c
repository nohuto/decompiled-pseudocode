/*
 * XREFs of ?RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x18042ABE8
 * Callers:
 *     ??$MakeAndInitialize@VCScrollViewer@@V1@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewer@@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x18042A1CC (--$MakeAndInitialize@VCScrollViewer@@V1@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180410420 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall CScrollViewer::RuntimeClassInitialize(
        __int64 a1,
        _OWORD *a2,
        double a3,
        int a4,
        int a5,
        __int64 (__fastcall ***a6)(_QWORD, GUID *, __int64),
        __int64 a7)
{
  __int64 v7; // rbx
  int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v12; // r15
  unsigned int Color; // ebx
  _QWORD *v14; // r14
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  _DWORD v19[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v20[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v7 = a1 + 248;
  *(_OWORD *)(a1 + 272) = *a2;
  *(_DWORD *)(a1 + 288) = a5;
  *(double *)(a1 + 264) = a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 248));
  v10 = (**a6)(a6, &GUID_6cc9c6d0_4a89_4c45_b4ac_86d9abb85a2a, v7);
  if ( v10 < 0 )
  {
    v11 = 86LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v12 = (_QWORD *)(a1 + 88);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a7 + 112LL))(
          a7,
          0LL,
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          a1 + 88);
  if ( v10 < 0 )
  {
    v11 = 93LL;
    goto LABEL_19;
  }
  if ( a3 > 0.0 )
  {
    Color = CImmersiveColor::GetColor(0xACu);
    v14 = (_QWORD *)(a1 + 240);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 240));
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a7 + 104LL))(
            a7,
            *v12,
            Color,
            0x100000001LL,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            a1 + 240);
    if ( v10 < 0 )
    {
      v11 = 98LL;
      goto LABEL_19;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v14 + 32LL))(*v14, v15, 0LL, 0LL);
    if ( v10 < 0 )
    {
      v11 = 99LL;
      goto LABEL_19;
    }
    v16 = CImmersiveColor::GetColor(0x489u);
    if ( HIBYTE(v16) )
    {
      v19[0] = 0;
      v19[1] = 0;
      v17 = *v14;
      v20[1] = v16;
      v20[0] = a4;
      *(float *)&v20[2] = (float)HIBYTE(v16) / 255.0;
      v19[2] = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _DWORD *))(*(_QWORD *)v17 + 216LL))(v17, v20, v19);
      if ( v10 < 0 )
      {
        v11 = 109LL;
        goto LABEL_19;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 232));
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a7 + 112LL))(
          a7,
          *v12,
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          a1 + 232);
  if ( v10 < 0 )
  {
    v11 = 112LL;
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 224));
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a7 + 112LL))(
          a7,
          *(_QWORD *)(a1 + 232),
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          a1 + 224);
  if ( v10 < 0 )
  {
    v11 = 113LL;
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*(_QWORD *)a1 + 64LL))(
          a1,
          a6);
  if ( v10 < 0 )
  {
    v11 = 114LL;
    goto LABEL_19;
  }
  return (unsigned int)v10;
}
