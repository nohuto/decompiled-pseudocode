/*
 * XREFs of ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x18004C930
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x18004C7A0 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DCDC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F194 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003F4CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180046340 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004CC24 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(CAccentAcrylicBlurBehind *this, int a2)
{
  unsigned int v4; // ebx
  int ActivationFactory; // eax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // [rsp+20h] [rbp-49h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-19h]
  unsigned int v19; // [rsp+54h] [rbp-15h]
  __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h] BYREF
  HSTRING_HEADER v22; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+80h] [rbp+17h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+37h]

  v4 = 0;
  if ( *((_DWORD *)this + 88) != a2 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v16);
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Xaml.Media.AcrylicBrush",
      0x23u,
      0x22u);
    ActivationFactory = RoGetActivationFactory(v25, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v16);
    v4 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ActivationFactory, 0x75Au);
    }
    else
    {
      v7 = v16;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
      v8 = (**v7)(v7, &GUID_883fa86c_3c4b_5c1d_aeea_5b4a3e7e1158, &v17);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x75Eu);
      }
      else
      {
        v21 = 0LL;
        v9 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
               (_QWORD *)this + 36,
               &v21);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x762u);
        }
        else
        {
          v10 = v17;
          v20 = 0LL;
          LOBYTE(v19) = HIBYTE(a2);
          HIBYTE(v19) = BYTE2(a2);
          v18 = 255;
          *(_WORD *)((char *)&v19 + 1) = a2;
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
          v15 = 0;
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, __int64 *))(*(_QWORD *)v10 + 48LL))(
                  v10,
                  v21,
                  v19,
                  v18,
                  v15,
                  &v20);
          v4 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x76Du);
          }
          else
          {
            v12 = CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(this);
            v4 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x771u);
            }
            else
            {
              v23 = 0LL;
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v22, L"Noise", 6u, 5u);
              v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 56LL))(
                      v20,
                      v23,
                      *((_QWORD *)this + 40));
              v4 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x775u);
              }
              else
              {
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
                v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v20)(
                        v20,
                        &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
                        (char *)this + 312);
                v4 = v14;
                if ( v14 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x778u);
                else
                  *((_DWORD *)this + 88) = a2;
              }
              v23 = 0LL;
            }
          }
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
        }
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v21);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v16);
  }
  return v4;
}
