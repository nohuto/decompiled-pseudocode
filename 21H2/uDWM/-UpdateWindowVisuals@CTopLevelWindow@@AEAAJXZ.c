/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023AD0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C900 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180095694 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180013BA0 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024F40 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180025254 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18002527C (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180025364 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180026980 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180026B78 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180026BA0 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180026CCC (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180026D20 (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180028A7C (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?Create@CText@@SAJPEAPEAV1@@Z @ 0x180029FA4 (-Create@CText@@SAJPEAPEAV1@@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x18002C414 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18002C434 (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18002C454 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x18002C484 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18002C4BC (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003BB0C (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x18003DFF8 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x18003E3CC (-BlendColors@@YAKKKM@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003ECB4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetScalingFactor@CText@@QEAAXN@Z @ 0x1800401D0 (-SetScalingFactor@CText@@QEAAXN@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180054134 (IsOpenThemeDataPresent.c)
 *     memset_0 @ 0x180058192 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800857A0 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800947CC (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  CTopLevelWindow *v1; // rbp
  unsigned int v2; // edi
  struct CTopLevelWindow::WindowFrame *v3; // rax
  int v4; // ebx
  struct CTopLevelWindow::WindowFrame *v5; // r14
  bool v6; // r12
  __int64 *v7; // rcx
  char v8; // dl
  __int64 *v9; // rcx
  char v10; // dl
  __int64 *v11; // r15
  struct CAtlasedImage *v12; // r13
  struct CAtlasedImage **v13; // rbx
  unsigned int i; // esi
  struct CAtlasedImage *v15; // rcx
  __int64 v16; // rdi
  struct CAtlasedImage *v17; // rbp
  __int64 v18; // rcx
  struct CAtlasedImage *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // ebx
  CAtlasedImage *v23; // r9
  CAtlasedImage *v24; // rcx
  CAtlasedImage *v25; // rcx
  CAtlasedImage *v26; // rcx
  CAtlasedImage *v27; // rcx
  CAtlasedImage *v28; // rcx
  CAtlasedImage *v29; // rcx
  CAtlasedImage *v30; // rcx
  CAtlasedImage *v31; // rcx
  CAtlasedImage *v32; // rcx
  CAtlasedImage *v33; // rcx
  CAtlasedImage *v34; // rcx
  CAtlasedImage *v35; // rcx
  CAtlasedImage *v36; // rcx
  CAtlasedImage *v37; // rcx
  CAtlasedImage *v38; // rcx
  int updated; // eax
  int v40; // edx
  __int64 v41; // rax
  bool v42; // r12
  struct CVisual *v43; // rdx
  int v44; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rbp
  unsigned int v50; // edx
  unsigned int v51; // ecx
  struct CAtlasedImage **k; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r9
  struct CAtlasedImage **v56; // rdx
  struct CAtlasedImage **v57; // r8
  struct CAtlasedImage *v58; // r8
  __int64 v59; // rdi
  unsigned int v60; // edx
  __int64 v61; // r9
  __int64 j; // rcx
  __int64 v63; // r8
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // ebx
  unsigned int v66; // r9d
  unsigned int v67; // r8d
  int v68; // eax
  int inserted; // eax
  int v70; // eax
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  CAtlasedImage *v74; // rcx
  CAtlasedImage *v75; // rcx
  CAtlasedImage *v76; // rcx
  CAtlasedImage *v77; // rcx
  CAtlasedImage *v78; // rcx
  CAtlasedImage *v79; // rcx
  CAtlasedImage *v80; // rcx
  CAtlasedImage *v81; // rcx
  CAtlasedImage *v82; // rcx
  CAtlasedImage *v83; // rcx
  CAtlasedImage *v84; // rcx
  CAtlasedImage *v85; // rcx
  CAtlasedImage *v86; // rcx
  CAtlasedImage *v87; // rcx
  __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rcx
  int v91; // eax
  CBaseObject *v92; // rcx
  int HolographicSlate; // eax
  unsigned int v94; // [rsp+20h] [rbp-D8h]
  bool v95; // [rsp+30h] [rbp-C8h]
  char v96; // [rsp+31h] [rbp-C7h]
  struct CAtlasedImage **v97; // [rsp+38h] [rbp-C0h] BYREF
  struct CAtlasedImage *v98; // [rsp+40h] [rbp-B8h] BYREF
  CTopLevelWindow *v99; // [rsp+48h] [rbp-B0h]
  char v100[8]; // [rsp+50h] [rbp-A8h] BYREF
  struct CTopLevelWindow::WindowFrame *v101; // [rsp+58h] [rbp-A0h]
  tagLOGFONTW v102; // [rsp+60h] [rbp-98h] BYREF

  v1 = this;
  v99 = this;
  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)v1 + 148),
         0,
         (*(_BYTE *)(*((_QWORD *)v1 + 91) + 611LL) & 0x20) != 0);
  v4 = *((_DWORD *)v1 + 148);
  v5 = v3;
  v101 = v3;
  if ( (unsigned __int8)IsOpenThemeDataPresent() && (v4 & 6) != 0 )
    LOBYTE(v2) = 1;
  v96 = v2;
  v6 = (*((_DWORD *)v1 + 148) & 0x20000) != 0;
  v7 = (__int64 *)*((_QWORD *)v1 + 33);
  v95 = v6;
  v8 = *((_BYTE *)v7 + 84);
  if ( v6 != (v8 & 1) )
  {
    v72 = *v7;
    *((_BYTE *)v7 + 84) = v6 | v8 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v72 + 24))(v7, 16LL);
  }
  v9 = (__int64 *)*((_QWORD *)v1 + 68);
  v10 = *((_BYTE *)v9 + 84);
  if ( v6 != (v10 & 1) )
  {
    v73 = *v9;
    *((_BYTE *)v9 + 84) = v6 | v10 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v73 + 24))(v9, 16LL);
  }
  v11 = (__int64 *)((char *)v5 + 1504);
  v12 = 0LL;
  v13 = (struct CAtlasedImage **)((char *)v1 + 304);
  for ( i = 0; i < 0x16; ++i )
  {
    v15 = *v13;
    if ( (_BYTE)v2 )
    {
      if ( v15 )
      {
LABEL_12:
        if ( v5 )
        {
          v16 = *(v11 - 1);
          if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) && *v11 )
            v16 = *v11;
        }
        else
        {
          v16 = 0LL;
        }
        v17 = *v13;
        v18 = *((_QWORD *)*v13 + 9);
        if ( v18 != v16 )
        {
          if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1LL);
          *((_QWORD *)v17 + 9) = v16;
          if ( v16 )
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          *((_DWORD *)v17 + 24) |= 1u;
          v46 = *((_QWORD *)v17 + 10);
          if ( v46 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 24LL))(v46, 0x2000LL);
        }
        if ( (i - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17)) && v16 )
        {
          v19 = *v13;
          if ( *((_DWORD *)*v13 + 6) != *(_DWORD *)(v16 + 24) || *((_DWORD *)v19 + 7) != *(_DWORD *)(v16 + 28) )
          {
            v20 = *(_QWORD *)(v16 + 24);
            *((_DWORD *)v19 + 24) |= 1u;
            *((_QWORD *)v19 + 3) = v20;
            v21 = *((_QWORD *)v19 + 10);
            if ( v21 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, 0x2000LL);
          }
          v12 = *v13;
        }
        else
        {
          v58 = *v13;
          v59 = *((_QWORD *)*v13 + 10);
          if ( v59 )
          {
            v60 = *(_DWORD *)(v59 + 264);
            v61 = *(_QWORD *)(v59 + 240);
            for ( j = 0LL; (unsigned int)j < v60; j = (unsigned int)(j + 1) )
            {
              if ( v58 == *(struct CAtlasedImage **)(v61 + 8 * j) )
                break;
            }
            if ( (unsigned int)j < v60 )
            {
              for ( ; (unsigned int)j < v60 - 1; v60 = *(_DWORD *)(v59 + 264) )
              {
                *(_QWORD *)(v61 + 8 * j) = *(_QWORD *)(v61 + 8LL * (unsigned int)(j + 1));
                j = (unsigned int)(j + 1);
              }
              *(_DWORD *)(v59 + 264) = v60 - 1;
            }
            *((_QWORD *)v58 + 10) = 0LL;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v58 + 2, 0xFFFFFFFF) == 1 )
              (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v58)(v58, 1LL);
            (*(void (__fastcall **)(__int64, __int64, struct CAtlasedImage *, __int64))(*(_QWORD *)v59 + 24LL))(
              v59,
              0x2000LL,
              v58,
              v61);
            v58 = *v13;
          }
          if ( v58 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v58 + 2, 0xFFFFFFFF) == 1 )
              (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v58)(v58, 1LL);
            *v13 = 0LL;
          }
        }
        v1 = v99;
        LOBYTE(v2) = v96;
        goto LABEL_22;
      }
      v47 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              128LL);
      if ( v47 )
      {
        *(_DWORD *)(v47 + 8) = 1;
        *(_QWORD *)v47 = &CAtlasedImage::`vftable';
        v2 = 0;
        *(_QWORD *)(v47 + 72) = 0LL;
        *(_QWORD *)(v47 + 88) = 0LL;
        *(_DWORD *)(v47 + 32) = 0x7FFFFFFF;
        *(_DWORD *)(v47 + 40) = 0x7FFFFFFF;
        *(_DWORD *)(v47 + 36) = 0x7FFFFFFF;
        *(_DWORD *)(v47 + 44) = 0x7FFFFFFF;
        *(_DWORD *)(v47 + 52) = 0x80000000;
        *(_DWORD *)(v47 + 48) = 0x80000000;
        *(_DWORD *)(v47 + 60) = 0x7FFFFFFF;
        *(_DWORD *)(v47 + 56) = 0x7FFFFFFF;
        *(_DWORD *)(v47 + 68) = -1;
        *(_DWORD *)(v47 + 120) = 22;
      }
      else
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA3u);
        v47 = 0LL;
      }
      *v13 = (struct CAtlasedImage *)v47;
      if ( (v2 & 0x80000000) != 0 )
      {
        v94 = 1977;
        goto LABEL_205;
      }
      *((_DWORD *)*v13 + 30) = i;
      v48 = *((_QWORD *)v1 + 35);
      v49 = 0LL;
      if ( v12 )
      {
        v50 = *(_DWORD *)(v48 + 264);
        v51 = 0;
        for ( k = *(struct CAtlasedImage ***)(v48 + 240); v51 < v50; ++k )
        {
          if ( v12 == *k )
            break;
          ++v51;
        }
        if ( v51 == v50 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
          v2 = -2147024809;
LABEL_147:
          v94 = 1982;
LABEL_205:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v94);
          return v2;
        }
        v49 = v51 + 1;
      }
      v98 = *v13;
      if ( (unsigned int)v49 > *(_DWORD *)(v48 + 264) )
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1C3u);
      }
      else
      {
        v97 = &v98;
        v53 = DynArrayImpl<0>::Grow((int)v48 + 240, 8, 1, 0, (__int64)&v97);
        v2 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0x1CDu);
        }
        else
        {
          v54 = *(unsigned int *)(v48 + 264);
          v55 = *(_QWORD *)(v48 + 240);
          *(_DWORD *)(v48 + 264) = v54 + 1;
          if ( (unsigned int)v54 > (unsigned int)v49 )
          {
            v63 = v55 + 8 * v54;
            do
            {
              v54 = (unsigned int)(v54 - 1);
              v63 -= 8LL;
              *(_QWORD *)(v63 + 8) = *(_QWORD *)(v55 + 8 * v54);
            }
            while ( (unsigned int)v54 > (unsigned int)v49 );
          }
          v56 = v97;
          v57 = (struct CAtlasedImage **)(v55 + 8 * v49);
          if ( v97 >= v57 && (unsigned __int64)v97 < v55 + 8 * ((unsigned __int64)*(unsigned int *)(v48 + 264) - 1) )
            v56 = ++v97;
          *v57 = *v56;
        }
        if ( (v2 & 0x80000000) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v98 + 2);
          *((_QWORD *)v98 + 10) = v48;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 24LL))(v48, 0x2000LL);
LABEL_95:
          if ( (v2 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x40u);
            goto LABEL_147;
          }
          v5 = v101;
          goto LABEL_12;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x4Du);
      goto LABEL_95;
    }
    if ( v15 )
    {
      if ( *((_QWORD *)v15 + 10) )
      {
        CAtlasedRectsVisual::RemoveAtlasImage(*((CAtlasedRectsVisual **)v15 + 10), *v13);
        v15 = *v13;
      }
      if ( v15 )
      {
        CBaseObject::Release(v15);
        *v13 = 0LL;
      }
    }
LABEL_22:
    ++v13;
    v11 += 2;
  }
  v22 = 2;
  if ( (_BYTE)v2 )
  {
    if ( CTopLevelWindow::IsSheetOfGlass(v1) )
    {
      if ( *((_DWORD *)v23 + 16) != 10 )
      {
        *((_DWORD *)v23 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v23, 1, 0x2000u);
      }
      v74 = (CAtlasedImage *)*((_QWORD *)v1 + 39);
      if ( *((_DWORD *)v74 + 16) != 8 )
      {
        *((_DWORD *)v74 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v74, 1, 0x2000u);
      }
      v75 = (CAtlasedImage *)*((_QWORD *)v1 + 40);
      if ( *((_DWORD *)v75 + 16) != 9 )
      {
        *((_DWORD *)v75 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v75, 1, 0x2000u);
      }
      v76 = (CAtlasedImage *)*((_QWORD *)v1 + 41);
      if ( *((_DWORD *)v76 + 16) != 2 )
      {
        *((_DWORD *)v76 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v76, 1, 0x2000u);
      }
      v77 = (CAtlasedImage *)*((_QWORD *)v1 + 42);
      if ( *((_DWORD *)v77 + 16) != 1 )
      {
        *((_DWORD *)v77 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v77, 1, 0x2000u);
      }
      v78 = (CAtlasedImage *)*((_QWORD *)v1 + 43);
      if ( *((_DWORD *)v78 + 16) != 6 )
      {
        *((_DWORD *)v78 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v78, 1, 0x2000u);
      }
      v79 = (CAtlasedImage *)*((_QWORD *)v1 + 44);
      if ( *((_DWORD *)v79 + 16) != 4 )
      {
        *((_DWORD *)v79 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v79, 1, 0x2000u);
      }
      v80 = (CAtlasedImage *)*((_QWORD *)v1 + 45);
      if ( *((_DWORD *)v80 + 16) != 5 )
      {
        *((_DWORD *)v80 + 16) = 5;
        CAtlasedImage::SetDirtyFlags(v80, 1, 0x2000u);
      }
      v81 = (CAtlasedImage *)*((_QWORD *)v1 + 47);
      if ( *((_DWORD *)v81 + 16) != 10 )
      {
        *((_DWORD *)v81 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v81, 1, 0x2000u);
      }
      v82 = (CAtlasedImage *)*((_QWORD *)v1 + 48);
      if ( *((_DWORD *)v82 + 16) != 8 )
      {
        *((_DWORD *)v82 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v82, 1, 0x2000u);
      }
      v83 = (CAtlasedImage *)*((_QWORD *)v1 + 49);
      if ( *((_DWORD *)v83 + 16) != 9 )
      {
        *((_DWORD *)v83 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v83, 1, 0x2000u);
      }
      v84 = (CAtlasedImage *)*((_QWORD *)v1 + 50);
      if ( *((_DWORD *)v84 + 16) != 2 )
      {
        *((_DWORD *)v84 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v84, 1, 0x2000u);
      }
      v85 = (CAtlasedImage *)*((_QWORD *)v1 + 51);
      if ( *((_DWORD *)v85 + 16) != 1 )
      {
        *((_DWORD *)v85 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v85, 1, 0x2000u);
      }
      v86 = (CAtlasedImage *)*((_QWORD *)v1 + 52);
      if ( *((_DWORD *)v86 + 16) != 6 )
      {
        *((_DWORD *)v86 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v86, 1, 0x2000u);
      }
      v87 = (CAtlasedImage *)*((_QWORD *)v1 + 53);
      if ( *((_DWORD *)v87 + 16) != 4 )
      {
        *((_DWORD *)v87 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v87, 1, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)v1 + 54);
      if ( *((_DWORD *)v38 + 16) == 5 )
        goto LABEL_56;
      *((_DWORD *)v38 + 16) = 5;
    }
    else
    {
      if ( *((_DWORD *)v23 + 16) )
      {
        *((_DWORD *)v23 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v23, 1, 0x2000u);
      }
      v24 = (CAtlasedImage *)*((_QWORD *)v1 + 39);
      if ( *((_DWORD *)v24 + 16) )
      {
        *((_DWORD *)v24 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v24, 1, 0x2000u);
      }
      v25 = (CAtlasedImage *)*((_QWORD *)v1 + 40);
      if ( *((_DWORD *)v25 + 16) )
      {
        *((_DWORD *)v25 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v25, 1, 0x2000u);
      }
      v26 = (CAtlasedImage *)*((_QWORD *)v1 + 41);
      if ( *((_DWORD *)v26 + 16) )
      {
        *((_DWORD *)v26 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v26, 1, 0x2000u);
      }
      v27 = (CAtlasedImage *)*((_QWORD *)v1 + 42);
      if ( *((_DWORD *)v27 + 16) )
      {
        *((_DWORD *)v27 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v27, 1, 0x2000u);
      }
      v28 = (CAtlasedImage *)*((_QWORD *)v1 + 43);
      if ( *((_DWORD *)v28 + 16) )
      {
        *((_DWORD *)v28 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v28, 1, 0x2000u);
      }
      v29 = (CAtlasedImage *)*((_QWORD *)v1 + 44);
      if ( *((_DWORD *)v29 + 16) )
      {
        *((_DWORD *)v29 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v29, 1, 0x2000u);
      }
      v30 = (CAtlasedImage *)*((_QWORD *)v1 + 45);
      if ( *((_DWORD *)v30 + 16) )
      {
        *((_DWORD *)v30 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v30, 1, 0x2000u);
      }
      v31 = (CAtlasedImage *)*((_QWORD *)v1 + 47);
      if ( *((_DWORD *)v31 + 16) )
      {
        *((_DWORD *)v31 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v31, 1, 0x2000u);
      }
      v32 = (CAtlasedImage *)*((_QWORD *)v1 + 48);
      if ( *((_DWORD *)v32 + 16) )
      {
        *((_DWORD *)v32 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v32, 1, 0x2000u);
      }
      v33 = (CAtlasedImage *)*((_QWORD *)v1 + 49);
      if ( *((_DWORD *)v33 + 16) )
      {
        *((_DWORD *)v33 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v33, 1, 0x2000u);
      }
      v34 = (CAtlasedImage *)*((_QWORD *)v1 + 50);
      if ( *((_DWORD *)v34 + 16) )
      {
        *((_DWORD *)v34 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v34, 1, 0x2000u);
      }
      v35 = (CAtlasedImage *)*((_QWORD *)v1 + 51);
      if ( *((_DWORD *)v35 + 16) )
      {
        *((_DWORD *)v35 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v35, 1, 0x2000u);
      }
      v36 = (CAtlasedImage *)*((_QWORD *)v1 + 52);
      if ( *((_DWORD *)v36 + 16) )
      {
        *((_DWORD *)v36 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v36, 1, 0x2000u);
      }
      v37 = (CAtlasedImage *)*((_QWORD *)v1 + 53);
      if ( *((_DWORD *)v37 + 16) )
      {
        *((_DWORD *)v37 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v37, 1, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)v1 + 54);
      if ( !*((_DWORD *)v38 + 16) )
        goto LABEL_56;
      *((_DWORD *)v38 + 16) = 0;
    }
    CAtlasedImage::SetDirtyFlags(v38, 1, 0x2000u);
  }
LABEL_56:
  updated = CTopLevelWindow::UpdateButtonVisuals(v1, v5);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x80Fu);
    return v2;
  }
  v40 = *((_DWORD *)v1 + 148);
  v41 = *((_QWORD *)v1 + 66);
  if ( (v40 & 0x10080) != 0 )
  {
    if ( !v41 )
    {
      v68 = CImage::Create((struct CImage **)v1 + 66);
      v2 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v68, 0x815u);
        return v2;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)v1 + 33) + 32LL),
                   *((struct CVisual **)v1 + 66),
                   *((struct CVisual **)v1 + 35),
                   1,
                   1);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x816u);
        return v2;
      }
      CVisual::SetDirtyFlags(v1, 0x20000);
      v40 = *((_DWORD *)v1 + 148);
      v41 = *((_QWORD *)v1 + 66);
    }
    v42 = v95;
    if ( (v40 & 0x80u) != 0 )
      v22 = 3;
    *(_DWORD *)(v41 + 192) = v22;
    CVisual::SetRTLMirror(*((CVisual **)v1 + 66), v95);
  }
  else
  {
    if ( v41 )
    {
      v88 = *(_QWORD *)(v41 + 24);
      if ( v88 )
      {
        v89 = VisualCollection::Remove((VisualCollection *)(v88 + 32), *((struct CVisual **)v1 + 66));
        v2 = v89;
        if ( v89 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v89, 0x825u);
          return v2;
        }
        CVisual::SetDirtyFlags(v1, 4096);
        v41 = *((_QWORD *)v1 + 66);
      }
      if ( v41 )
      {
        CBaseObject::Release((CBaseObject *)v41);
        *((_QWORD *)v1 + 66) = 0LL;
      }
    }
    v42 = v95;
  }
  v43 = (struct CVisual *)*((_QWORD *)v1 + 65);
  if ( (*((_BYTE *)v1 + 592) & 8) != 0 )
  {
    if ( !v43 )
    {
      v70 = CText::Create((struct CText **)v1 + 65);
      v2 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v70, 0x832u);
        return v2;
      }
      v71 = VisualCollection::InsertRelative(
              (VisualCollection *)(*((_QWORD *)v1 + 35) + 32LL),
              *((struct CVisual **)v1 + 65),
              0LL,
              1,
              1);
      v2 = v71;
      if ( v71 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v71, 0x835u);
        return v2;
      }
      CVisual::SetDirtyFlags(v1, 0x10000);
    }
    CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(v1, v100);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(v1, *CurrentDefaultColorizationFlags | 8u);
    CText::SetBackgroundColor(*((CText **)v1 + 65), WindowColorizationColor);
    if ( v5 )
    {
      v66 = BYTE2(WindowColorizationColor)
          + 5 * BYTE1(WindowColorizationColor)
          + 2 * (unsigned __int8)WindowColorizationColor;
      if ( v66 > 0x400 == (unsigned __int8)BYTE2(*((_DWORD *)v5 + 462))
                        + 5 * BYTE1(*((_DWORD *)v5 + 462))
                        + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)v5 + 462) > 0x400 )
      {
        v90 = 321LL;
        if ( v66 <= 0x400 )
          v90 = 292LL;
        ColorCache::GetColor(v90);
      }
      if ( !CTopLevelWindow::TreatAsActiveWindow(v1) )
        v67 = BlendColors(WindowColorizationColor, v67, 0.40000001);
      CText::SetColor(*((CText **)v1 + 65), v67);
    }
    memset_0(&v102, 0, sizeof(v102));
    CWindowData::GetNonClientCaptionFont(*((CWindowData **)v1 + 91), &v102);
    CText::SetFont(*((CText **)v1 + 65), &v102);
    CText::SetScalingFactor(*((CText **)v1 + 65), *(double *)(*((_QWORD *)v1 + 91) + 296LL));
    CVisual::SetRTLMirror(*((CVisual **)v1 + 65), v42);
    CText::SetRTLReading(*((CText **)v1 + 65), (*((_DWORD *)v1 + 148) & 0x80000) != 0);
    CText::SetReverseAlignment(*((CText **)v1 + 65), (*((_DWORD *)v1 + 148) & 0x400000) != 0);
  }
  else if ( v43 )
  {
    v91 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v1 + 35) + 32LL), v43);
    v2 = v91;
    if ( v91 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v91, 0x85Eu);
      return v2;
    }
    v92 = (CBaseObject *)*((_QWORD *)v1 + 65);
    if ( v92 )
    {
      CBaseObject::Release(v92);
      *((_QWORD *)v1 + 65) = 0LL;
    }
  }
  v44 = CTopLevelWindow::EnsureClientAreaNode(v1);
  v2 = v44;
  if ( v44 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x863u);
    return v2;
  }
  v2 = 0;
  if ( (*((_BYTE *)v1 + 241) & 2) != 0 )
  {
    HolographicSlate = CTopLevelWindow::CreateHolographicSlate(v1);
    v2 = HolographicSlate;
    if ( HolographicSlate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, HolographicSlate, 0x134u);
  }
  else
  {
    CTopLevelWindow::ReleaseHolographicSlate(v1);
  }
  if ( (v2 & 0x80000000) != 0 )
  {
    v94 = 2149;
    goto LABEL_205;
  }
  return v2;
}
