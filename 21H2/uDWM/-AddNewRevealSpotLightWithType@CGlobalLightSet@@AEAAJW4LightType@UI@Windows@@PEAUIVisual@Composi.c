/*
 * XREFs of ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x180046D90
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x180046960 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001286C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012BB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD8C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F244 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositionLight@Composition@UI@Windows@@@?$ComPtr@UISpotLight@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180047138 (--$As@UICompositionLight@Composition@UI@Windows@@@-$ComPtr@UISpotLight@Composition@UI@Windows@@@.c)
 *     ?AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@Windows@@PEAUIExpressionAnimation@345@@Z @ 0x1800473A0 (-AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@.c)
 *     ??$As@UICompositorInternal@Internal@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInternal@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800474AC (--$As@UICompositorInternal@Internal@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevic.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalLightSet::AddNewRevealSpotLightWithType(
        __int64 a1,
        int a2,
        __int64 a3,
        struct Windows::UI::Composition::IExpressionAnimation *a4)
{
  __int64 v5; // rsi
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  struct IDCompositionDesktopDevicePartner *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdi
  int v13; // eax
  CGlobalLightSet *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  struct Windows::UI::Composition::ISpotLight *v25; // [rsp+28h] [rbp-38h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  struct IDCompositionDesktopDevicePartner *v29; // [rsp+48h] [rbp-18h] BYREF
  int Buffer; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v5 = a2;
  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice((CDesktopManager *)a1);
  v29 = DCompositionInteropDevice;
  v9 = DCompositionInteropDevice;
  if ( DCompositionInteropDevice )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice + 8LL))(DCompositionInteropDevice);
  v28 = 0LL;
  v10 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::Internal::ICompositorInternal>(
          &v29,
          &v28);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_25;
  }
  v25 = 0LL;
  v12 = v28;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
  v13 = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ISpotLight **))(*(_QWORD *)v12 + 96LL))(
          v12,
          &v25);
  v11 = v13;
  if ( v13 < 0 )
  {
    v22 = 201LL;
    goto LABEL_49;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25 + 72LL))(
          v25,
          a3);
  v11 = v13;
  if ( v13 < 0 )
  {
    v22 = 202LL;
    goto LABEL_49;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 56LL))(v25);
    v11 = v13;
    if ( v13 < 0 )
    {
      v22 = 208LL;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 152LL))(v25);
      v11 = v13;
      if ( v13 < 0 )
      {
        v22 = 209LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 120LL))(v25);
        v11 = v13;
        if ( v13 < 0 )
        {
          v22 = 210LL;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25
                                                                                                  + 136LL))(
                  v25,
                  0xFFFFFFFFLL);
          v11 = v13;
          if ( v13 < 0 )
          {
            v22 = 211LL;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 200LL))(v25);
            v11 = v13;
            if ( v13 < 0 )
            {
              v22 = 212LL;
            }
            else
            {
              v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25 + 216LL))(
                      v25,
                      0xFFFFFFFFLL);
              v11 = v13;
              if ( v13 >= 0 )
                goto LABEL_14;
              v22 = 213LL;
            }
          }
        }
      }
    }
    goto LABEL_49;
  }
  if ( (_DWORD)v5 == 2 )
  {
    v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 56LL))(v25);
    v11 = v13;
    if ( v13 < 0 )
    {
      v22 = 217LL;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 152LL))(v25);
      v11 = v13;
      if ( v13 < 0 )
      {
        v22 = 218LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 120LL))(v25);
        v11 = v13;
        if ( v13 < 0 )
        {
          v22 = 219LL;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25
                                                                                                  + 136LL))(
                  v25,
                  0xFFFFFFFFLL);
          v11 = v13;
          if ( v13 < 0 )
          {
            v22 = 220LL;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 200LL))(v25);
            v11 = v13;
            if ( v13 < 0 )
            {
              v22 = 221LL;
            }
            else
            {
              v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25 + 216LL))(
                      v25,
                      0xFFFFFFFFLL);
              v11 = v13;
              if ( v13 >= 0 )
              {
LABEL_14:
                v13 = CGlobalLightSet::AttachExpressionAnimationToRevealSpotLight(v14, v25, a4);
                v11 = v13;
                if ( v13 >= 0 )
                {
                  v26 = 0LL;
                  v15 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpotLight>::As<Windows::UI::Composition::ICompositionLight>(
                          &v25,
                          &v26);
                  v11 = v15;
                  if ( v15 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0xEA,
                      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
                      (const char *)(unsigned int)v15);
LABEL_22:
                    v19 = v26;
                    if ( v26 )
                    {
                      v26 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                    }
                    goto LABEL_24;
                  }
                  hObject = 0LL;
                  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                    &hObject,
                    0LL);
                  v16 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, __int64, HANDLE *))(*(_QWORD *)v9 + 224LL))(
                          v9,
                          v26,
                          &hObject);
                  v11 = v16;
                  if ( v16 < 0 )
                  {
                    v23 = (unsigned int)v16;
                    v24 = 238LL;
                  }
                  else
                  {
                    v17 = NtDCompositionSetMaterialProperty(*(_QWORD *)(a1 + 88), v5, hObject);
                    v11 = v17 | 0x10000000;
                    if ( v17 < 0 )
                    {
                      v24 = 239LL;
                    }
                    else
                    {
                      v18 = v26;
                      v26 = 0LL;
                      Buffer = v5;
                      v31 = v18;
                      if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), &Buffer, 0x10u, 0LL) )
                      {
                        v11 = 0;
                        goto LABEL_20;
                      }
                      v11 = -2147024882;
                      v24 = 244LL;
                    }
                    v23 = v11;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v24,
                    (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
                    (const char *)v23);
LABEL_20:
                  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                    CloseHandle(hObject);
                  goto LABEL_22;
                }
                v22 = 230LL;
                goto LABEL_49;
              }
              v22 = 222LL;
            }
          }
        }
      }
    }
LABEL_49:
    v21 = (unsigned int)v13;
    goto LABEL_50;
  }
  v11 = -2147024809;
  v22 = 226LL;
  v21 = 2147942487LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)v21);
LABEL_24:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
LABEL_25:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
  return v11;
}
