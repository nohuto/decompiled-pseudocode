/*
 * XREFs of ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x1800468B0
 * Callers:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x180046530 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DCDC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F194 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800462FC (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x1800465D0 (-AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ.c)
 *     ?AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAPEAUIHoverPointerSourcePartner@345@@Z @ 0x180046784 (-AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAP.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180046AD4 (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x180046CE0 (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 *     ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x1800470D0 (-CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePa.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180047440 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalLightSet::Initialize(CGlobalLightSet *this)
{
  int CoordinateSpaceVisual; // ebx
  struct Windows::UI::Composition::IHoverPointerSourcePartner *v3; // rcx
  int v4; // eax
  CGlobalLightSet *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+38h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v23[6]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Windows::UI::Composition::IVisual *v25; // [rsp+88h] [rbp+28h] BYREF
  struct Windows::UI::Composition::IHoverPointerSourcePartner *v26; // [rsp+90h] [rbp+30h] BYREF
  __int64 v27; // [rsp+98h] [rbp+38h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  LODWORD(v20) = 0;
  v23[0] = 0;
  *((float *)&v20 + 1) = FLOAT_0_02;
  *(float *)&v23[1] = FLOAT_0_40000001;
  v21 = -1082130432;
  v23[2] = -1082130432;
  CoordinateSpaceVisual = CGlobalLightSet::CreateCoordinateSpaceVisual(this);
  if ( CoordinateSpaceVisual >= 0 )
  {
    v25 = 0LL;
    v3 = *(struct Windows::UI::Composition::IHoverPointerSourcePartner **)(*((_QWORD *)this + 12) + 24LL);
    v26 = v3;
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::IHoverPointerSourcePartner *))(*(_QWORD *)v3 + 8LL))(v3);
    CoordinateSpaceVisual = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                              &v26,
                              (__int64 *)&v25);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
    if ( CoordinateSpaceVisual < 0 )
    {
      v16 = (unsigned int)CoordinateSpaceVisual;
      v17 = 56LL;
    }
    else
    {
      v4 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 3LL, v25, &v20);
      CoordinateSpaceVisual = v4;
      if ( v4 < 0 )
      {
        v17 = 57LL;
      }
      else
      {
        v4 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 4LL, v25, v23);
        CoordinateSpaceVisual = v4;
        if ( v4 >= 0 )
        {
          v26 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
          v6 = CGlobalLightSet::AttachHoverPointerSourceToVisual(v5, v25, &v26);
          CoordinateSpaceVisual = v6;
          if ( v6 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3E,
              (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
              (const char *)(unsigned int)v6);
            goto LABEL_17;
          }
          v20 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
          v8 = CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(v7, v26, 1LL, &v20);
          CoordinateSpaceVisual = v8;
          if ( v8 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x40,
              (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
              (const char *)(unsigned int)v8);
            goto LABEL_16;
          }
          v27 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
          v10 = CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(v9, v26, 2LL, &v27);
          CoordinateSpaceVisual = v10;
          if ( v10 < 0 )
          {
            v18 = (unsigned int)v10;
            v19 = 66LL;
          }
          else
          {
            v11 = CGlobalLightSet::AddNewRevealSpotLightWithType(this, 1LL, v25, v20);
            CoordinateSpaceVisual = v11;
            if ( v11 < 0 )
            {
              v18 = (unsigned int)v11;
              v19 = 69LL;
            }
            else
            {
              v12 = CGlobalLightSet::AddNewRevealSpotLightWithType(this, 2LL, v25, v27);
              CoordinateSpaceVisual = v12;
              if ( v12 < 0 )
              {
                v18 = (unsigned int)v12;
                v19 = 70LL;
              }
              else
              {
                v13 = CGlobalLightSet::AddNewRevealAmbientLight(this);
                CoordinateSpaceVisual = v13;
                if ( v13 < 0 )
                {
                  v18 = (unsigned int)v13;
                  v19 = 71LL;
                }
                else
                {
                  v14 = RtlPublishWnfStateData(WNF_IMSN_GLOBALLIGHTSINVALIDATED, 0LL, 0LL, 0LL, 0LL);
                  CoordinateSpaceVisual = v14 | 0x10000000;
                  if ( v14 >= 0 )
                  {
                    CoordinateSpaceVisual = 0;
LABEL_15:
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
LABEL_16:
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
LABEL_17:
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
LABEL_18:
                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
                    goto LABEL_19;
                  }
                  v18 = (unsigned int)CoordinateSpaceVisual;
                  v19 = 73LL;
                }
              }
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
            (const char *)v18);
          goto LABEL_15;
        }
        v17 = 58LL;
      }
      v16 = (unsigned int)v4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v16);
    goto LABEL_18;
  }
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return (unsigned int)CoordinateSpaceVisual;
}
