/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028EA0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C900 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002BA88 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18002F414 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18008201C (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800AA314 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x1800020C0 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180004A24 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180004C84 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180005D88 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z @ 0x180009594 (-Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180009934 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x18000A3A8 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x1800100C0 (-ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180028148 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B5D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD8C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F244 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x180040814 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800460E8 (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180093AF8 (-CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBru.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180093E80 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800B5FC4 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CBaseGeometryProxy *a4)
{
  __m128i v8; // xmm6
  int v9; // ebx
  char v10; // al
  bool v11; // zf
  unsigned int v12; // edx
  int v13; // eax
  struct CVisual *v14; // rdx
  int v15; // edi
  int v16; // eax
  int started; // eax
  CBaseObject *v19; // rdx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rdx
  CBaseObject *v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  CAccentTransition *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  int v33; // eax
  int v34; // eax
  AcrylicHostBackdrop *v35; // rcx
  __int64 v36; // rax
  struct IDCompositionDesktopDevicePartner *v37; // r14
  int v38; // eax
  struct IDCompositionDesktopDevicePartner *v39; // rbx
  int SolidColorBrush; // eax
  __int64 v41; // rax
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // rdi
  int v43; // eax
  __int64 v44; // rdx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // rcx
  CBaseObject *v47; // rcx
  CBaseObject *v48; // rcx
  __int64 v49; // rcx
  unsigned __int64 v50; // r9
  __int64 v51; // rdx
  CBaseObject *v52; // rcx
  CBaseObject *v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // eax
  int v56; // edx
  int v57; // ecx
  __m128i v58; // xmm0
  int v59; // eax
  float v60; // xmm0_4
  int v61; // xmm0_4
  _DWORD *v62; // rcx
  int updated; // eax
  int v64; // eax
  __int64 v65; // rdx
  CBaseObject *v66; // rcx
  CBaseObject *v67; // rcx
  __int64 v68; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v69; // [rsp+38h] [rbp-38h] BYREF
  struct _MARGINS v70; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v69 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v70 = 0LL;
  CVisual::SetInsetFromParent((struct _MARGINS *)this, &v70);
  *(struct tagRECT *)((char *)this + 616) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v26 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
    v27 = 0;
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 113) >= 0 )
      v27 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
    *((_DWORD *)this + 156) = *((_DWORD *)this + 154) + v27;
    v28 = 0;
    if ( v26 >= 0 )
      v28 = v26;
    *((_DWORD *)this + 157) = *((_DWORD *)this + 155) + v28;
    CDesktopManager::SetBackStop(this);
  }
  v8 = *a3;
  v9 = _mm_cvtsi128_si32(*a3);
  v70 = (struct _MARGINS)*a3;
  if ( v9 == 5 || (unsigned int)(v9 - 2) <= 1 )
  {
    if ( v9 != 4 )
    {
LABEL_4:
      v10 = 1;
LABEL_5:
      if ( (*((_BYTE *)this + 284) & 2) != 0 && v10 )
      {
        VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
        v45 = (CBaseObject *)*((_QWORD *)this + 40);
        if ( v45 )
        {
          CBaseObject::Release(v45);
          *((_QWORD *)this + 40) = 0LL;
        }
        v46 = (CBaseObject *)*((_QWORD *)this + 41);
        if ( v46 )
        {
          CBaseObject::Release(v46);
          *((_QWORD *)this + 41) = 0LL;
        }
        v47 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v47 )
        {
          CBaseObject::Release(v47);
          *((_QWORD *)this + 42) = 0LL;
        }
        v48 = (CBaseObject *)*((_QWORD *)this + 43);
        if ( v48 )
        {
          CBaseObject::Release(v48);
          *((_QWORD *)this + 43) = 0LL;
        }
        v49 = *((_QWORD *)this + 44);
        if ( v49 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
          *((_QWORD *)this + 44) = 0LL;
        }
      }
      *(__m128i *)((char *)this + 280) = v8;
      v11 = (*((_BYTE *)this + 284) & 1) == 0;
      v12 = *((_DWORD *)this + 72);
      *((_DWORD *)this + 94) = v12;
      if ( !v11 )
        CAccent::_UpdateAccentBackground(this, v12);
      v13 = *((_DWORD *)this + 70);
      switch ( v13 )
      {
        case 3:
          if ( *((_QWORD *)this + 42)
            || (v29 = CAccentBlurBehind::Create((struct CAccentBlurBehind **)this + 42), v15 = v29, v29 >= 0) )
          {
            CAccent::_UpdateAccentBlurBehind(this);
            goto LABEL_12;
          }
          v50 = (unsigned int)v29;
          v51 = 1224LL;
          break;
        case 4:
          if ( *((_QWORD *)this + 43)
            || (v25 = CAccentAcrylicBlurBehind::Create((struct CAccentAcrylicBlurBehind **)this + 43),
                v15 = v25,
                v25 >= 0) )
          {
LABEL_11:
            (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
LABEL_12:
            (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
            goto LABEL_13;
          }
          v50 = (unsigned int)v25;
          v51 = 1232LL;
          break;
        case 5:
          goto LABEL_11;
        default:
          v52 = (CBaseObject *)*((_QWORD *)this + 42);
          if ( v52 )
          {
            CBaseObject::Release(v52);
            *((_QWORD *)this + 42) = 0LL;
          }
          v53 = (CBaseObject *)*((_QWORD *)this + 43);
          if ( v53 )
          {
            CBaseObject::Release(v53);
            *((_QWORD *)this + 43) = 0LL;
          }
          v54 = *((_QWORD *)this + 44);
          if ( v54 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
            *((_QWORD *)this + 44) = 0LL;
          }
          VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
          v55 = 0;
          v56 = *((_DWORD *)this + 157) - *((_DWORD *)this + 155);
          v57 = *((_DWORD *)this + 156) - *((_DWORD *)this + 154);
          *(_QWORD *)&v70.cxLeftWidth = 0LL;
          if ( v57 >= 0 )
            v55 = v57;
          v58 = _mm_cvtsi32_si128(v55);
          v59 = 0;
          LODWORD(v60) = _mm_cvtepi32_ps(v58).m128_u32[0];
          if ( v56 >= 0 )
            v59 = v56;
          *(float *)&v70.cyTopHeight = v60 + 0.0;
          *(float *)&v70.cyBottomHeight = (float)v59 + 0.0;
          *(float *)&v61 = CAccent::_GetSolidFillOpacity(this);
          updated = CAccent::_UpdateSolidFill(v62, this, *((_DWORD *)this + 94), (const __m128i *)&v70, v61);
          v15 = updated;
          if ( updated < 0 )
          {
            v50 = (unsigned int)updated;
            v51 = 1255LL;
            break;
          }
          goto LABEL_12;
      }
LABEL_131:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v51,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)v50);
      goto LABEL_20;
    }
LABEL_45:
    v10 = 0;
    if ( *((_DWORD *)this + 70) == v9 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( v9 == 4 )
    goto LABEL_45;
  if ( *((_BYTE *)this + 312) )
  {
    v30 = (CAccentTransition *)*((_QWORD *)this + 48);
    if ( v30 )
      CAccentTransition::StopAnimation(v30);
    v70.cyBottomHeight = 0;
    v8 = (__m128i)v70;
  }
  if ( v9 != *((_DWORD *)this + 70)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) != *((_DWORD *)this + 71)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) != *((_DWORD *)this + 72) )
  {
    *((_BYTE *)this + 312) = 1;
    *(__m128i *)((char *)this + 296) = v8;
    started = CAccent::StartTransition(this);
    v15 = started;
    if ( started < 0 )
    {
      v50 = (unsigned int)started;
      v51 = 1143LL;
      goto LABEL_131;
    }
  }
  (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  if ( (*((_BYTE *)this + 284) & 2) != 0 )
  {
    VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
    v31 = (CBaseObject *)*((_QWORD *)this + 40);
    if ( v31 )
    {
      CBaseObject::Release(v31);
      *((_QWORD *)this + 40) = 0LL;
    }
    v32 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v32 )
    {
      CBaseObject::Release(v32);
      *((_QWORD *)this + 41) = 0LL;
    }
  }
  v19 = (CBaseObject *)*((_QWORD *)this + 42);
  v20 = v19;
  if ( v19 && *((_QWORD *)v19 + 3) )
  {
    v33 = VisualCollection::Remove((CAccent *)((char *)this + 32), v19);
    v15 = v33;
    if ( v33 < 0 )
    {
      v50 = (unsigned int)v33;
      v51 = 1158LL;
      goto LABEL_131;
    }
    v20 = (CBaseObject *)*((_QWORD *)this + 42);
  }
  if ( v20 )
  {
    CBaseObject::Release(v20);
    *((_QWORD *)this + 42) = 0LL;
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 43);
  v22 = v21;
  if ( v21 && *((_QWORD *)v21 + 3) )
  {
    v34 = VisualCollection::Remove((CAccent *)((char *)this + 32), v21);
    v15 = v34;
    if ( v34 < 0 )
    {
      v50 = (unsigned int)v34;
      v51 = 1164LL;
      goto LABEL_131;
    }
    v22 = (CBaseObject *)*((_QWORD *)this + 43);
  }
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( *((_DWORD *)this + 70) == 5 )
  {
    v35 = (AcrylicHostBackdrop *)*((_QWORD *)this + 46);
    if ( v35 )
    {
      v36 = *((_QWORD *)v35 + 2);
      if ( *(_QWORD *)(v36 + 24) )
      {
        v37 = *(struct IDCompositionDesktopDevicePartner **)(v36 + 80);
        v38 = AcrylicHostBackdrop::ValidateDevice(v35);
        v15 = v38;
        if ( v38 < 0 )
        {
          v50 = (unsigned int)v38;
          v51 = 1175LL;
          goto LABEL_131;
        }
        v39 = *(struct IDCompositionDesktopDevicePartner **)(*(_QWORD *)(*((_QWORD *)this + 46) + 16LL) + 80LL);
        *(_QWORD *)&v70.cxLeftWidth = v39;
        if ( v39 )
          (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( v37 != v39 )
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 360);
        if ( v39 )
        {
          if ( !*((_QWORD *)this + 45) )
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 360);
            SolidColorBrush = CAccent::CreateSolidColorBrush(
                                v39,
                                (struct Windows::UI::Composition::ICompositionBrush **)this + 45);
            v15 = SolidColorBrush;
            if ( SolidColorBrush < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4A1,
                (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                (const char *)(unsigned int)SolidColorBrush);
LABEL_95:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
              goto LABEL_20;
            }
          }
          v41 = *((_QWORD *)this + 46);
          v68 = 0LL;
          v42 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v41 + 16) + 24LL);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v68);
          v43 = (**v42)(v42, &GUID_bbed8da5_977f_42cb_9b28_f0ceebced3a7, &v68);
          v15 = v43;
          if ( v43 < 0 )
          {
            v44 = 1188LL;
LABEL_94:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v44,
              (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
              (const char *)(unsigned int)v43);
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v68);
            goto LABEL_95;
          }
          v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v68 + 48LL))(v68, *((_QWORD *)this + 45));
          v15 = v43;
          if ( v43 < 0 )
          {
            v44 = 1189LL;
            goto LABEL_94;
          }
          v43 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v39 + 24LL))(v39);
          v15 = v43;
          if ( v43 < 0 )
          {
            v44 = 1190LL;
            goto LABEL_94;
          }
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v68);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
      }
    }
  }
  v23 = *((_QWORD *)this + 44);
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    *((_QWORD *)this + 44) = 0LL;
  }
LABEL_13:
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    v24 = CAccent::_EnsureBorderShadowAtlas(this);
    v15 = v24;
    if ( v24 < 0 )
    {
      v50 = (unsigned int)v24;
      v51 = 1263LL;
      goto LABEL_131;
    }
    (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
    goto LABEL_17;
  }
  v14 = (struct CVisual *)*((_QWORD *)this + 53);
  if ( !v14 )
    goto LABEL_15;
  v64 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 54) + 32LL), v14);
  v15 = v64;
  if ( v64 >= 0 )
  {
    v64 = VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 54));
    v15 = v64;
    if ( v64 >= 0 )
    {
      v66 = (CBaseObject *)*((_QWORD *)this + 54);
      if ( v66 )
      {
        CBaseObject::Release(v66);
        *((_QWORD *)this + 54) = 0LL;
      }
      v67 = (CBaseObject *)*((_QWORD *)this + 53);
      if ( v67 )
      {
        CBaseObject::Release(v67);
        *((_QWORD *)this + 53) = 0LL;
      }
LABEL_15:
      v15 = 0;
      goto LABEL_16;
    }
    v65 = 1087LL;
  }
  else
  {
    v65 = 1086LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v65,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v64);
LABEL_16:
  if ( v15 < 0 )
  {
    v50 = (unsigned int)v15;
    v51 = 1268LL;
    goto LABEL_131;
  }
LABEL_17:
  v16 = *((_DWORD *)this + 71);
  if ( (v16 & 0x10) != 0 )
  {
    CAccent::SetClipRegion(this, a4);
  }
  else if ( (v16 & 0x200) != 0 && *((_QWORD *)this + 52) )
  {
    (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
  }
  v15 = 0;
LABEL_20:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v69);
  return (unsigned int)v15;
}
