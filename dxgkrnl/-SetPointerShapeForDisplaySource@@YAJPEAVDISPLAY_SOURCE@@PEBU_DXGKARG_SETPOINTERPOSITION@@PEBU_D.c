/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01E4050
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01E3D30 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0335F08 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000469C (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0040104 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C005435C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0173D44 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C017FDC8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01B021C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01BE97C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01C5CF0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C022039E (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C02B8814 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C02B8E78 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C02C6620 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C032A55C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C03338B8 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C03344B8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C0334914 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0334BC8 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        bool a9,
        bool a10)
{
  _DXGKARG_SETPOINTERPOSITION v10; // xmm0
  __int64 v11; // rax
  __int64 v14; // r14
  int v16; // ebx
  __int64 v18; // rcx
  UINT v19; // edx
  UINT v20; // r8d
  UINT XHot; // ecx
  UINT v22; // eax
  INT Y; // r9d
  INT X; // r8d
  const wchar_t *v25; // r9
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v27; // ecx
  unsigned int v28; // edx
  bool v29; // r13
  bool v30; // r12
  __int64 v31; // rbx
  int IsMonitorVirtualModeDisabled; // eax
  __int64 v33; // r15
  char v34; // al
  int v35; // ebx
  UINT v36; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v37; // r13d
  UINT Height; // ecx
  UINT v39; // edx
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // r15
  void *pPixels; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r12
  const struct tagRECT *v43; // rcx
  signed int v44; // ebx
  const struct _DXGKARG_SETPOINTERSHAPE *v45; // rcx
  void *v46; // rcx
  UINT YHot; // eax
  void *v48; // rcx
  int v49; // r10d
  int v50; // ecx
  int v51; // r11d
  __int128 v52; // xmm0
  int v53; // r9d
  int v54; // r8d
  int v55; // edx
  signed int v56; // r12d
  int v57; // r13d
  int v58; // eax
  int v59; // r9d
  INT v60; // eax
  INT v61; // r8d
  INT v62; // edx
  UINT v63; // r8d
  struct _DXGKARG_SETPOINTERSHAPE *v64; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // r8
  char v68; // al
  int v69; // eax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v71; // rbx
  struct DISPLAY_SOURCE *v72; // r15
  struct _DXGKARG_SETPOINTERSHAPE *v73; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v74; // rbx
  void *v75; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v76; // [rsp+20h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v77; // [rsp+28h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v78; // [rsp+30h] [rbp-D0h]
  int *v79; // [rsp+38h] [rbp-C8h]
  char v80[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v81; // [rsp+54h] [rbp-ACh] BYREF
  int v82; // [rsp+58h] [rbp-A8h]
  int v83; // [rsp+5Ch] [rbp-A4h]
  __int64 v84; // [rsp+60h] [rbp-A0h]
  int v85; // [rsp+68h] [rbp-98h]
  int Width; // [rsp+6Ch] [rbp-94h]
  SESSION_VIEW *v87; // [rsp+70h] [rbp-90h]
  __int64 v88; // [rsp+78h] [rbp-88h]
  __int128 v89; // [rsp+80h] [rbp-80h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // [rsp+90h] [rbp-70h]
  _BYTE v91[16]; // [rsp+98h] [rbp-68h] BYREF
  void *v92; // [rsp+A8h] [rbp-58h]
  __int128 v93; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v94; // [rsp+C0h] [rbp-40h]
  _DXGKARG_SETPOINTERPOSITION v95; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v96[144]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = *a2;
  v94 = 0LL;
  v11 = *((_QWORD *)a1 + 1);
  v95 = v10;
  v87 = a4;
  v88 = (__int64)a2;
  v14 = *(_QWORD *)(v11 + 16);
  v92 = a5;
  v93 = 0LL;
  if ( !v14 )
  {
    WdLogSingleEntry1(1LL, 1090LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1090LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v14 + 2920) )
  {
    WdLogSingleEntry1(1LL, 1091LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1091LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v96, (struct DXGADAPTER *const)v14, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v96, 0LL);
  if ( v16 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v91, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v14 + 2920) + 464LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v91);
    if ( !a9 )
    {
LABEL_7:
      if ( !a8 )
      {
        v85 = a7;
        Width = a6;
        goto LABEL_9;
      }
      if ( *(_DWORD *)(v14 + 2096) < 0x7000u )
      {
        WdLogSingleEntry1(1LL, 1137LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->GetDriverDdiInterfaceVersion() >= DXGKDDI_INTERFACE_VERSION_WDDM2_2_RS2_1",
          1137LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      PristineCursor = DISPLAY_SOURCE::GetPristineCursor(a1, 0);
      a3 = PristineCursor;
      if ( PristineCursor->pPixels )
      {
        v27 = (PristineCursor->Flags.Value & 1) + 1;
        Width = PristineCursor->Width;
        v85 = PristineCursor->Height * v27;
LABEL_9:
        if ( (*(_DWORD *)(v14 + 436) & 0x100) == 0 && (**(_DWORD **)(v14 + 2824) & 8) != 0 )
          goto LABEL_112;
        v95.VidPnSourceId = *((_DWORD *)a1 + 4);
        if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v14 + 2920), v95.VidPnSourceId) )
        {
          v16 = -1073741823;
          WdLogSingleEntry4(2LL, -1073741823LL, *((unsigned int *)a1 + 4), a3->Flags.Value, a5);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x VidPnSourceId=0x%I64x Primary is not visible: 0x%I64x DXGADAPTER=0x%I64x",
            -1073741823LL,
            *((unsigned int *)a1 + 4),
            a3->Flags.Value,
            (__int64)a5,
            0LL);
          goto LABEL_13;
        }
        if ( (*(_DWORD *)(v14 + 436) & 0x20) != 0
          && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v14 + 2920)) )
        {
          goto LABEL_112;
        }
        v28 = *((_DWORD *)a1 + 272);
        v29 = 1;
        v80[0] = 1;
        v30 = 1;
        if ( v28 == -1 )
          goto LABEL_52;
        v31 = *(_QWORD *)(v14 + 2920);
        if ( !v31 )
        {
          WdLogSingleEntry1(2LL, 9698LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The selected adapter is render-only",
            9698LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_52:
          v35 = -1073741811;
LABEL_53:
          WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), *(int *)(v14 + 408), *(unsigned int *)(v14 + 404), v35);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
            *((unsigned int *)a1 + 4),
            *(int *)(v14 + 408),
            *(unsigned int *)(v14 + 404),
            v35,
            0LL);
LABEL_54:
          if ( v29 && v30 && !*((_BYTE *)a1 + 704) || a10 )
          {
            v69 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 2920), a3);
            if ( v69 < 0 )
              goto LABEL_126;
            goto LABEL_115;
          }
          CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                               *((_QWORD *)a1 + 1),
                                               *((_DWORD *)a1 + 4),
                                               v29);
          v36 = *(_DWORD *)(v14 + 2240);
          v37 = CurrentOrientation;
          if ( a3->Width <= v36 )
          {
            Height = a3->Height;
            v39 = *(_DWORD *)(v14 + 2244);
            if ( Height <= v39 && a3->Pitch * ((a3->Flags.Value & 1) + 1) * Height <= 4 * (unsigned __int64)(v36 * v39) )
            {
              SavedCursor = DISPLAY_SOURCE::GetSavedCursor(a1, 1);
              pPixels = (void *)SavedCursor->pPixels;
              if ( !pPixels
                || (memset(
                      pPixels,
                      0,
                      4 * *(unsigned int *)(v14 + 2244) * (unsigned __int64)*(unsigned int *)(v14 + 2240)),
                    ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(a1, 1),
                    !ClippedCursor->pPixels) )
              {
                v16 = -1073741801;
                goto LABEL_13;
              }
              v81 = 0;
              if ( *((_BYTE *)a1 + 704) )
              {
                *(_QWORD *)&v89 = 0LL;
                v43 = (const struct tagRECT *)&v89;
                *((_QWORD *)&v89 + 1) = *(_QWORD *)((char *)a1 + 708);
              }
              else
              {
                v43 = (const struct tagRECT *)((char *)a1 + 688);
              }
              v16 = ScaleCursorShape(
                      v43,
                      (const struct tagRECT *)((char *)v87 + 24),
                      v37,
                      a3,
                      ClippedCursor,
                      SavedCursor,
                      (const struct _DXGK_DRIVERCAPS *)(v14 + 2216),
                      &v81);
              if ( v16 < 0 )
                goto LABEL_13;
              v44 = 0;
              if ( v81 )
              {
                if ( v37 != D3DKMDT_VPPR_IDENTITY && !v80[0] )
                {
                  v45 = ClippedCursor;
LABEL_76:
                  RotateCursorShape(v45, SavedCursor, v37, (const struct _DXGK_DRIVERCAPS *)(v14 + 2216));
                  goto LABEL_79;
                }
                v46 = (void *)SavedCursor->pPixels;
                SavedCursor->Flags.Value = ClippedCursor->Flags.Value;
                SavedCursor->Width = ClippedCursor->Width;
                SavedCursor->Height = ClippedCursor->Height;
                SavedCursor->Pitch = ClippedCursor->Pitch;
                memmove(
                  v46,
                  ClippedCursor->pPixels,
                  ClippedCursor->Height * ClippedCursor->Pitch * ((ClippedCursor->Flags.Value & 1) + 1));
                SavedCursor->XHot = ClippedCursor->XHot;
                YHot = ClippedCursor->YHot;
              }
              else
              {
                if ( v37 != D3DKMDT_VPPR_IDENTITY && !v80[0] )
                {
                  v45 = a3;
                  goto LABEL_76;
                }
                v48 = (void *)SavedCursor->pPixels;
                SavedCursor->Flags.Value = a3->Flags.Value;
                SavedCursor->Width = a3->Width;
                SavedCursor->Height = a3->Height;
                SavedCursor->Pitch = a3->Pitch;
                memmove(v48, a3->pPixels, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
                SavedCursor->XHot = a3->XHot;
                YHot = a3->YHot;
              }
              SavedCursor->YHot = YHot;
LABEL_79:
              v49 = *((_DWORD *)a1 + 174) - *((_DWORD *)a1 + 172);
              v50 = *((_DWORD *)v87 + 8) - *((_DWORD *)v87 + 6);
              v51 = *((_DWORD *)a1 + 175) - *((_DWORD *)a1 + 173);
              v52 = *((_OWORD *)a1 + 43);
              v53 = *((_DWORD *)a1 + 178);
              v54 = *((_DWORD *)v87 + 9) - *((_DWORD *)v87 + 7);
              v55 = *(_QWORD *)((char *)a1 + 708);
              v84 = *(_QWORD *)((char *)a1 + 708);
              v89 = v52;
              v81 = v49;
              v82 = v51;
              if ( *((_BYTE *)a1 + 704) )
              {
                v49 = v55;
                v81 = v55;
                v51 = v53;
                v82 = v53;
                v56 = 0;
              }
              else
              {
                v44 = DWORD1(v89);
                v56 = v89;
                v84 = *((_QWORD *)&v89 + 1);
              }
              if ( ((v37 - 1) & 0xFFFFFFFD) != 0 )
              {
                v57 = *(_DWORD *)(v88 + 4) * v51 / v50;
                v58 = v49;
              }
              else
              {
                v57 = *(_DWORD *)(v88 + 4) * v49 / v50;
                v58 = v51;
              }
              v59 = *(_DWORD *)(v88 + 8) * v58 / v54;
              v83 = v59;
              if ( v80[0] )
              {
                v95.X = v56 + v57;
                v60 = v59 + v44;
                goto LABEL_104;
              }
              switch ( CurrentOrientation )
              {
                case D3DKMDT_VPPR_IDENTITY:
                  goto LABEL_95;
                case D3DKMDT_VPPR_ROTATE90:
                  v62 = v59 + v56;
                  v95.X = v59 + v56;
                  v63 = v44 - SavedCursor->Height - v57;
                  break;
                case D3DKMDT_VPPR_ROTATE180:
                  v62 = v49 + v56 - SavedCursor->Width - v57;
                  v95.X = v62;
                  v63 = v44 - SavedCursor->Height - v59;
                  break;
                case D3DKMDT_VPPR_ROTATE270:
                  v61 = v44 + v57;
                  v62 = v49 + v56 - SavedCursor->Width - v59;
LABEL_98:
                  v95.X = v62;
LABEL_99:
                  v95.Y = v61;
                  if ( (signed int)(v62 + SavedCursor->Width) >= v56
                    && v62 <= (int)v84
                    && (signed int)(v61 + SavedCursor->Height) >= v44
                    && v61 <= SHIDWORD(v84) )
                  {
                    goto LABEL_105;
                  }
                  v95.X = v56 + v49 / 2;
                  v60 = v44 + v51 / 2;
LABEL_104:
                  v95.Y = v60;
LABEL_105:
                  FillClipParams(SavedCursor, a1, &v95, (struct CURSOR_CLIP_PARAMS *)&v93);
                  if ( HIDWORD(v94) )
                  {
                    v64 = DISPLAY_SOURCE::GetClippedCursor(a1, 1);
                    v65 = v64;
                    if ( !v64->pPixels )
                    {
LABEL_127:
                      v16 = -1073741801;
                      goto LABEL_13;
                    }
                    ClipCurrentCursor(SavedCursor, v64, (struct CURSOR_CLIP_PARAMS *)&v93);
                    v65->VidPnSourceId = *((_DWORD *)a1 + 4);
                    v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 2920), v65);
                    if ( v16 < 0 )
                      goto LABEL_13;
                    v68 = 1;
                  }
                  else
                  {
                    SavedCursor->VidPnSourceId = *((_DWORD *)a1 + 4);
                    v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 2920), SavedCursor);
                    if ( v16 < 0 )
                      goto LABEL_13;
                    v68 = 0;
                  }
                  *((_BYTE *)a1 + 766) = v68;
LABEL_115:
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  {
                    LODWORD(v79) = v95.Flags.0;
                    LODWORD(v78) = v95.Y;
                    LODWORD(v77) = v95.X;
                    LODWORD(v76) = v95.VidPnSourceId;
                    McTemplateK0pqtqq_EtwWriteTransfer(v66, &EventSetPointerPosition, v67, v92, v76, v77, v78, v79);
                  }
                  v69 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v14 + 2920), &v95, v67);
                  if ( v69 >= 0 )
                  {
                    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v87);
                    v71 = v88;
                    v72 = PrimaryDisplaySource;
                    ADAPTER_DISPLAY::SavePointerInfo(
                      *(ADAPTER_DISPLAY **)(v14 + 2920),
                      v95.VidPnSourceId,
                      *(_BYTE *)&v95.Flags.0 & 1,
                      v95.X,
                      v95.Y,
                      *(_DWORD *)(v88 + 4),
                      *(_DWORD *)(v88 + 8));
                    if ( a8 || *(_DWORD *)(v14 + 2096) < 0x7000u )
                      goto LABEL_123;
                    v73 = DISPLAY_SOURCE::GetPristineCursor(a1, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
                    v74 = v73;
                    v75 = (void *)v73->pPixels;
                    if ( v75 )
                    {
                      v73->Flags.Value = a3->Flags.Value;
                      v73->Width = a3->Width;
                      v73->Height = a3->Height;
                      v73->Pitch = a3->Pitch;
                      memmove(v75, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
                      v74->XHot = a3->XHot;
                      v74->YHot = a3->YHot;
                      v71 = v88;
LABEL_123:
                      if ( a1 == v72 )
                      {
                        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v91);
                        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v96);
                        OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
                          (struct DXGADAPTER *)v14,
                          v71,
                          (__int64)a3,
                          Width,
                          v85,
                          (__int64)_lambda_103e920f2f8a7257353075347c127b30_::_lambda_invoker_cdecl_);
                      }
                      v16 = 0;
                      goto LABEL_13;
                    }
                    goto LABEL_127;
                  }
LABEL_126:
                  v16 = v69;
                  goto LABEL_13;
                default:
LABEL_95:
                  if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY )
                  {
                    WdLogSingleEntry1(1LL, 686LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"Orientation == D3DKMDT_VPPR_IDENTITY",
                      686LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v49 = v81;
                    v51 = v82;
                  }
                  v62 = v56 + v57;
                  v61 = v44 + v83;
                  goto LABEL_98;
              }
              v61 = v51 + v63;
              goto LABEL_99;
            }
          }
LABEL_112:
          v16 = -1073741823;
LABEL_13:
          if ( v91[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v91);
          goto LABEL_15;
        }
        v80[0] = 0;
        IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(v14, v28, v80);
        v33 = IsMonitorVirtualModeDisabled;
        if ( IsMonitorVirtualModeDisabled == -1073741632 )
        {
          v34 = 0;
          LODWORD(v33) = 0;
        }
        else
        {
          if ( IsMonitorVirtualModeDisabled < 0 )
          {
            WdLogSingleEntry1(1LL, IsMonitorVirtualModeDisabled);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
              v33,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_50;
          }
          v34 = v80[0];
        }
        if ( !v34 )
        {
          v29 = *(_BYTE *)(v31 + 289) == 0;
          v30 = *(_BYTE *)(v31 + 290) == 0;
        }
LABEL_50:
        v80[0] = v29;
        v35 = v33;
        if ( (int)v33 >= 0 )
          goto LABEL_54;
        goto LABEL_53;
      }
LABEL_33:
      v16 = -1073741811;
      goto LABEL_13;
    }
    v18 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL);
    if ( ((a3->Flags.Value - 2) & 0xFFFFFFFD) == 0
      && (v19 = a3->Width, v19 <= *(_DWORD *)(v18 + 2240))
      && (v20 = a3->Height, v20 <= *(_DWORD *)(v18 + 2244))
      && a3->Pitch == 4 * v19
      && a3->VidPnSourceId < *(_DWORD *)(*(_QWORD *)(v18 + 2920) + 96LL)
      && a3->pPixels
      && (XHot = a3->XHot, XHot < v19)
      && (v22 = a3->YHot, v22 < v20) )
    {
      *((_DWORD *)a1 + 943) = XHot;
      *((_DWORD *)a1 + 944) = v22;
      Y = a2->Y;
      X = a2->X;
      if ( (XHot != -1 || v22 != -1)
        && (int)(XHot + X) >= 0
        && (signed int)(XHot + X) < *((_DWORD *)a1 + 252)
        && (int)(v22 + Y) >= 0
        && (signed int)(v22 + Y) < *((_DWORD *)a1 + 253) )
      {
        goto LABEL_7;
      }
      WdLogSingleEntry3(2LL, *(int *)(v14 + 408), *(unsigned int *)(v14 + 404), *((unsigned int *)a1 + 4));
      v25 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%I"
             "64x%08I64x) VidpnSourceId: (0x%I64x).";
    }
    else
    {
      WdLogSingleEntry3(2LL, *(int *)(v14 + 408), *(unsigned int *)(v14 + 404), *((unsigned int *)a1 + 4));
      v25 = L"Invalid DXGKARG_SETPOINTERSHAPE passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%I64x"
             "%08I64x) VidpnSourceId: (0x%I64x).";
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)v25,
      *(int *)(v14 + 408),
      *(unsigned int *)(v14 + 404),
      *((unsigned int *)a1 + 4),
      0LL,
      0LL);
    goto LABEL_33;
  }
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v96);
  return (unsigned int)v16;
}
