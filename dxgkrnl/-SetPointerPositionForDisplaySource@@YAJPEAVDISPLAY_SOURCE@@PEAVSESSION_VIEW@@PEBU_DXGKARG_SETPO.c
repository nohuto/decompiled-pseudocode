/*
 * XREFs of ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0335294
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C03340B0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
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
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0040104 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C005435C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0173D44 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C017FDC8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01B021C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01BE97C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C02B8814 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C02B8E78 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C02C6620 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C032A818 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C03338B8 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C03344B8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 */

__int64 __fastcall SetPointerPositionForDisplaySource(
        struct DISPLAY_SOURCE *a1,
        struct SESSION_VIEW *a2,
        const struct _DXGKARG_SETPOINTERPOSITION *a3,
        int a4,
        int a5)
{
  __int64 v5; // rax
  const struct _DXGKARG_SETPOINTERPOSITION *v6; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // r14
  int v12; // ecx
  _DWORD *v13; // rax
  INT Y; // r8d
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // edx
  bool v21; // r13
  bool v22; // r12
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // r8
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v27; // r15
  const void *pPixels; // r9
  int v29; // r10d
  int v30; // r9d
  int v31; // r11d
  __int128 v32; // xmm0
  int v33; // r8d
  int v34; // ecx
  bool v35; // zf
  int v36; // edx
  signed int v37; // r12d
  signed int v38; // ebx
  int IsMonitorVirtualModeDisabled; // eax
  char v40; // al
  int v41; // r8d
  int v42; // r9d
  int v43; // eax
  int v44; // eax
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v46; // rbx
  const void *v47; // r9
  __int64 v48; // r8
  int v49; // eax
  __int64 v50; // rbx
  int v51; // r13d
  INT v52; // r8d
  INT v53; // edx
  __int64 Height; // rcx
  const wchar_t *v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // r9
  _QWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // [rsp+20h] [rbp-E0h]
  __int64 v66; // [rsp+28h] [rbp-D8h]
  int v67[2]; // [rsp+30h] [rbp-D0h]
  __int64 v68; // [rsp+38h] [rbp-C8h]
  char v69[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v70; // [rsp+54h] [rbp-ACh]
  int v71; // [rsp+58h] [rbp-A8h]
  int CurrentOrientation; // [rsp+5Ch] [rbp-A4h]
  UINT Width; // [rsp+60h] [rbp-A0h]
  int v74; // [rsp+64h] [rbp-9Ch]
  __int64 v75; // [rsp+68h] [rbp-98h]
  signed int v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+78h] [rbp-88h]
  SESSION_VIEW *v78; // [rsp+80h] [rbp-80h]
  __int128 v79; // [rsp+88h] [rbp-78h]
  _BYTE v80[16]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v81; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-48h]
  struct _DXGKARG_SETPOINTERPOSITION v83; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v84[144]; // [rsp+D0h] [rbp-30h] BYREF

  v78 = a2;
  v82 = 0LL;
  v5 = *((_QWORD *)a1 + 1);
  v6 = a3;
  v77 = (__int64)a3;
  v9 = *(_QWORD *)(v5 + 16);
  v81 = 0LL;
  if ( !v9 )
  {
    WdLogSingleEntry1(1LL, 1787LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1787LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v9 + 2920) )
  {
    WdLogSingleEntry1(1LL, 1788LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1788LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v83 = *v6;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v84, (struct DXGADAPTER *const)v9, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v84, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry3(2LL, *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get CoreAdapterAccess lock on adapter 0x%I64x%08I64x, returning 0x%I64x.",
      *(int *)(v9 + 408),
      *(unsigned int *)(v9 + 404),
      v11,
      0LL,
      0LL);
    LODWORD(v11) = 0;
    goto LABEL_90;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v80, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v9 + 2920) + 464LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v80);
  if ( a4 && (v6->Flags.Value & 1) != 0 )
  {
    v12 = *((_DWORD *)a1 + 943);
    v13 = (_DWORD *)((char *)a1 + 3776);
    Y = v6->Y;
    if ( v12 == -1 && *v13 == -1
      || (v15 = v6->X + v12, v15 < 0)
      || v15 >= *((_DWORD *)a1 + 252)
      || Y + *v13 < 0
      || Y + *v13 >= *((_DWORD *)a1 + 253) )
    {
      WdLogSingleEntry3(2LL, *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), *((unsigned int *)a1 + 4));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkSetPointerPosition() function: Adapter LUID: (0x%I64x%"
                  "08I64x) VidpnSourceId: (0x%I64x).",
        *(int *)(v9 + 408),
        *(unsigned int *)(v9 + 404),
        *((unsigned int *)a1 + 4),
        0LL,
        0LL);
      LODWORD(v11) = -1073741811;
      goto LABEL_88;
    }
    LODWORD(v11) = 0;
  }
  if ( (*(_DWORD *)(v9 + 436) & 0x100) == 0 && (**(_DWORD **)(v9 + 2824) & 8) != 0 )
  {
    LODWORD(v11) = 0;
    goto LABEL_88;
  }
  v83.VidPnSourceId = *((_DWORD *)a1 + 4);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v9 + 2920), v83.VidPnSourceId) )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    v63[3] = -1073741823LL;
    v63[4] = v83.VidPnSourceId;
    v64 = *(_BYTE *)&v83.Flags.0 & 1;
    v63[6] = v9;
    v63[5] = v64;
LABEL_86:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v9 + 2920),
      v83.VidPnSourceId,
      *(_BYTE *)&v83.Flags.0 & 1,
      v83.X,
      v83.Y,
      v6->X,
      v6->Y);
    if ( a1 == SESSION_VIEW::GetPrimaryDisplaySource(v78) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v80);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v84);
      OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        (struct DXGADAPTER *)v9,
        v60,
        v6->VidPnSourceId,
        v61,
        (__int64)v6,
        (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *, const struct _DXGKARG_SETPOINTERPOSITION *), __int64))_lambda_b9a5656a752cedcbf1444dc35c6078d9_::_lambda_invoker_cdecl_);
    }
    goto LABEL_88;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v68) = v83.Flags.0;
    v67[0] = v83.Y;
    LODWORD(v66) = v83.X;
    LODWORD(v65) = v83.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(v17, &EventSetPointerPosition, v18, v9, v65, v66, *(_QWORD *)v67, v68);
  }
  v20 = *((_DWORD *)a1 + 272);
  v21 = 1;
  v22 = 1;
  LODWORD(v11) = -1073741811;
  if ( v20 == -1 )
    goto LABEL_27;
  v23 = *(_QWORD *)(v9 + 2920);
  if ( !v23 )
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
LABEL_27:
    LODWORD(v24) = -1073741811;
LABEL_28:
    WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), (int)v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
      *((unsigned int *)a1 + 4),
      *(int *)(v9 + 408),
      *(unsigned int *)(v9 + 404),
      (int)v24,
      0LL);
    goto LABEL_29;
  }
  v69[0] = 0;
  IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(v9, v20, v69);
  v24 = IsMonitorVirtualModeDisabled;
  if ( IsMonitorVirtualModeDisabled == -1073741632 )
  {
    v40 = 0;
    LODWORD(v24) = 0;
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
        v24,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_45;
    }
    v40 = v69[0];
  }
  if ( !v40 )
  {
    v21 = *(_BYTE *)(v23 + 289) == 0;
    v22 = *(_BYTE *)(v23 + 290) == 0;
  }
LABEL_45:
  if ( (int)v24 < 0 )
    goto LABEL_28;
LABEL_29:
  if ( v21 && v22 || (*(_BYTE *)&v83.Flags.0 & 1) == 0 || a5 )
  {
LABEL_83:
    LODWORD(v11) = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v9 + 2920), &v83, v25);
    if ( (int)v11 < 0 )
    {
      WdLogSingleEntry1(1LL, 1972LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 1972LL, 0LL, 0LL, 0LL, 0LL);
    }
    v6 = (const struct _DXGKARG_SETPOINTERPOSITION *)v77;
    goto LABEL_86;
  }
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)a1 + 1), *((_DWORD *)a1 + 4), v21);
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(a1, 0);
  v27 = SavedCursor;
  pPixels = SavedCursor->pPixels;
  if ( pPixels )
  {
    Width = SavedCursor->Width;
    if ( Width <= *(_DWORD *)(v9 + 2240) && SavedCursor->Height <= *(_DWORD *)(v9 + 2244) )
    {
      v29 = *((_DWORD *)a1 + 174) - *((_DWORD *)a1 + 172);
      v30 = *((_DWORD *)v78 + 8) - *((_DWORD *)v78 + 6);
      v31 = *((_DWORD *)a1 + 175) - *((_DWORD *)a1 + 173);
      v32 = *((_OWORD *)a1 + 43);
      v33 = *((_DWORD *)a1 + 178);
      v34 = *((_DWORD *)v78 + 9) - *((_DWORD *)v78 + 7);
      v35 = *((_BYTE *)a1 + 704) == 0;
      v36 = *(_QWORD *)((char *)a1 + 708);
      v75 = *(_QWORD *)((char *)a1 + 708);
      v79 = v32;
      v70 = v29;
      v74 = v31;
      v71 = v34;
      if ( v35 )
      {
        v38 = DWORD1(v79);
        v37 = v79;
        v75 = *((_QWORD *)&v79 + 1);
      }
      else
      {
        v37 = 0;
        v70 = v36;
        v38 = 0;
        v74 = v33;
        v29 = v36;
        v31 = v33;
      }
      v41 = CurrentOrientation;
      v76 = v37;
      if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
      {
        v42 = *(_DWORD *)(v77 + 4) * v31 / v30;
        v43 = v29;
      }
      else
      {
        v42 = *(_DWORD *)(v77 + 4) * v29 / v30;
        v43 = v31;
      }
      v44 = *(_DWORD *)(v77 + 8) * v43;
      CurrentOrientation = v42;
      v71 = v44 / v71;
      if ( v21 )
      {
        v83.X = v42 + v37;
        v83.Y = v71 + v38;
LABEL_53:
        FillClipParams(v27, a1, &v83, (struct CURSOR_CLIP_PARAMS *)&v81);
        if ( !HIDWORD(v82) )
        {
          if ( *((_BYTE *)a1 + 766) )
          {
            v58 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v9 + 2920), v27, v25);
            if ( v58 < 0 )
            {
              v59 = v58;
              WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), v58);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DdiSetPointerShape failed while setting last saved cursor shape on VidPn Source 0x%I64x adapter"
                          " 0x%I64x%08I64x, returning 0x%I64x.",
                *((unsigned int *)a1 + 4),
                *(int *)(v9 + 408),
                *(unsigned int *)(v9 + 404),
                v59,
                0LL);
            }
            *((_BYTE *)a1 + 766) = 0;
          }
          goto LABEL_83;
        }
        ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(a1, 0);
        v46 = ClippedCursor;
        v47 = ClippedCursor->pPixels;
        if ( v47 && ClippedCursor->Width <= *(_DWORD *)(v9 + 2240) && ClippedCursor->Height <= *(_DWORD *)(v9 + 2244) )
        {
          ClipCurrentCursor(v27, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)&v81);
          v46->VidPnSourceId = *((_DWORD *)a1 + 4);
          v49 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v9 + 2920), v46, v48);
          if ( v49 < 0 )
          {
            v50 = v49;
            WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), v49);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DdiSetPointerShape failed while setting clipped shape on VidPn Source 0x%I64x adapter 0x%I64x%08I"
                        "64x, returning 0x%I64x.",
              *((unsigned int *)a1 + 4),
              *(int *)(v9 + 408),
              *(unsigned int *)(v9 + 404),
              v50,
              0LL);
          }
          *((_BYTE *)a1 + 766) = 1;
          goto LABEL_83;
        }
        WdLogSingleEntry3(2LL, ClippedCursor->Width, ClippedCursor->Height, v47);
        Height = v46->Height;
        v55 = L"GetClippedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.";
        v56 = v46->Width;
        v57 = (__int64)v46->pPixels;
        goto LABEL_82;
      }
      switch ( v41 )
      {
        case 1:
          goto LABEL_67;
        case 2:
          v51 = v70;
          v53 = v71 + v37;
          v83.X = v71 + v37;
          v52 = v31 + v38 - v27->Height - v42;
          break;
        case 3:
          v51 = v70;
          v53 = v70 + v37 - v42 - Width;
          v83.X = v53;
          v52 = v31 + v38 - v27->Height - v71;
          break;
        case 4:
          v51 = v70;
          v52 = v42 + v38;
          v53 = v70 + v37 - v71 - Width;
LABEL_70:
          v83.X = v53;
          break;
        default:
LABEL_67:
          if ( v41 != 1 )
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
            v31 = v74;
          }
          v53 = v37 + CurrentOrientation;
          v51 = v70;
          v52 = v38 + v71;
          goto LABEL_70;
      }
      v83.Y = v52;
      if ( (signed int)(v53 + v27->Width) < v37
        || v53 > (int)v75
        || (signed int)(v52 + v27->Height) < v38
        || v52 > SHIDWORD(v75) )
      {
        v83.X = v76 + v51 / 2;
        v83.Y = v38 + v31 / 2;
      }
      goto LABEL_53;
    }
  }
  WdLogSingleEntry3(2LL, SavedCursor->Width, SavedCursor->Height, pPixels);
  Height = v27->Height;
  v55 = L"GetSavedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.";
  v56 = v27->Width;
  v57 = (__int64)v27->pPixels;
LABEL_82:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v55, v56, Height, v57, 0LL, 0LL);
LABEL_88:
  if ( v80[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v80);
LABEL_90:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
  return (unsigned int)v11;
}
