/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01A9CE0
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C01A95D0 (DxgkGetDisplayModeList.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01A9CE0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C02D9700 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02F5694 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01A9CE0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01AA0AC (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C01AA154 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01AFC34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01BE97C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01C36FC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01E80D0 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C020EA90 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C02197F4 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     _CombineModeList @ 0x1C02FC23C (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0350A90 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        struct DXGADAPTER *a1,
        struct COREADAPTERACCESS *a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        const struct _D3DKMT_DISPLAYMODE **a5,
        unsigned __int8 *a6)
{
  const struct _D3DKMT_DISPLAYMODE **v6; // r15
  unsigned __int8 *v8; // rax
  unsigned __int8 v9; // di
  struct DXGADAPTER *v10; // rsi
  int v11; // r12d
  bool v12; // r13
  int CachedModeList; // eax
  COREADAPTERACCESS *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  const struct _D3DKMT_DISPLAYMODE *v19; // rsi
  UINT Width; // r11d
  int v21; // r8d
  unsigned int Height; // r10d
  UINT ModeCount; // r9d
  unsigned int v24; // edx
  COREADAPTERACCESS *pModeList; // rcx
  unsigned int *v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v32; // r15
  int v33; // eax
  int v34; // eax
  int ModeList; // eax
  void *v36; // r15
  unsigned __int8 *v37; // rbx
  int v38; // eax
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  struct DISPLAY_SOURCE *NextDisplaySource; // rsi
  __int64 v41; // rcx
  struct DXGADAPTER *v42; // rdi
  unsigned int v43; // r11d
  int v44; // eax
  int DisplayModeList; // eax
  D3DKMT_DISPLAYMODE **p_pModeList; // rsi
  UINT *p_ModeCount; // rdi
  int v48; // eax
  D3DKMT_DISPLAYMODE *v49; // rcx
  __int64 v50; // rax
  int v51; // r10d
  unsigned int v52; // r9d
  D3DKMT_DISPLAYMODE *v53; // r8
  int v54; // edx
  __int64 v55; // rcx
  UINT i; // edx
  __int64 v57; // rax
  unsigned __int8 v58; // [rsp+50h] [rbp-B0h]
  char v59; // [rsp+51h] [rbp-AFh] BYREF
  char v60; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int8 v61; // [rsp+53h] [rbp-ADh] BYREF
  int v62; // [rsp+54h] [rbp-ACh] BYREF
  int v63; // [rsp+58h] [rbp-A8h] BYREF
  void *v64; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v65; // [rsp+68h] [rbp-98h]
  COREADAPTERACCESS *v66; // [rsp+70h] [rbp-90h]
  unsigned __int8 *v67; // [rsp+78h] [rbp-88h]
  const struct _D3DKMT_DISPLAYMODE **v68; // [rsp+80h] [rbp-80h]
  _D3DKMT_GETDISPLAYMODELIST v69; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v70[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a5;
  v8 = a6;
  v9 = a3;
  v68 = a5;
  v10 = a1;
  v67 = a6;
  v58 = a3;
  v66 = a2;
  v65 = a1;
  while ( 1 )
  {
    v62 = 0;
    v11 = 0;
    v64 = 0LL;
    v12 = 0;
    v63 = 0;
    *v8 = 0;
    if ( v6 )
      *v6 = 0LL;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                v10,
                *(unsigned int *)(4000LL * a4->VidPnSourceId + *(_QWORD *)(*((_QWORD *)v10 + 365) + 128LL) + 1088),
                &v62) >= 0 )
      v12 = v62 != 0;
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)v10 + 365), a4);
    LODWORD(v14) = CachedModeList;
    if ( (int)(CachedModeList + 0x80000000) >= 0 && CachedModeList != -1073741275 )
    {
      WdLogSingleEntry3(7LL, a4->VidPnSourceId, v10, CachedModeList);
      return (unsigned int)v14;
    }
    if ( CachedModeList == -1073741275 )
    {
      v28 = 4000LL * a4->VidPnSourceId;
      v29 = *((_QWORD *)v10 + 365);
      v60 = 0;
      v30 = *(_DWORD *)(v28 + *(_QWORD *)(v29 + 128) + 1088);
      if ( v30 != -1
        && (int)DxgkQueryMonitorTypeLockHeld((_DWORD)v10, v30, 0, 0, 0LL, (__int64)&v60, 0LL, 0LL, 0LL, 0LL) < 0 )
      {
        WdLogSingleEntry1(1LL, 5448LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5448LL, 0LL, 0LL, 0LL, 0LL);
      }
      v14 = v66;
      if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v66 + 11)) )
        COREADAPTERACCESS::Release(v14);
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v10 + 365), a4->VidPnSourceId);
      v32 = SessionViewOwner;
      if ( SessionViewOwner
        && *((_DWORD *)SessionViewOwner + 10) > 1u
        && (SESSION_VIEW::IsCrossAdapterView(SessionViewOwner) || v9) )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v32);
        if ( PrimaryDisplaySource == (const struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)v10 + 365) + 128LL)
                                                                   + 4000LL * a4->VidPnSourceId) )
        {
          NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v32, PrimaryDisplaySource);
          if ( NextDisplaySource )
          {
            do
            {
              v41 = *((_QWORD *)NextDisplaySource + 1);
              v59 = 0;
              v42 = *(struct DXGADAPTER **)(v41 + 16);
              v61 = 0;
              memset(&v69, 0, sizeof(v69));
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v70, v42, 0LL);
              v44 = COREADAPTERACCESS::AcquireExclusive((__int64)v70, v43);
              LODWORD(v14) = v44;
              if ( v44 < 0 )
              {
                WdLogSingleEntry2(7LL, v42, v44);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v70);
                return (unsigned int)v14;
              }
              if ( (int)MonitorGetMonitorOrientationsFromTarget(v42, *((unsigned int *)NextDisplaySource + 272), &v62) >= 0
                && v62 )
              {
                v12 = 1;
              }
              if ( (int)DxgkQueryMonitorTypeLockHeld(
                          (_DWORD)v42,
                          *((_DWORD *)NextDisplaySource + 272),
                          0,
                          0,
                          0LL,
                          (__int64)&v59,
                          0LL,
                          0LL,
                          0LL,
                          0LL) < 0 )
              {
                WdLogSingleEntry1(1LL, 5530LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5530LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( v60 == v59 )
              {
                v69.VidPnSourceId = *((_DWORD *)NextDisplaySource + 4);
                DisplayModeList = DxgkpGetDisplayModeList(v42, (struct COREADAPTERACCESS *)v70, v58, &v69, 0LL, &v61);
                v14 = (COREADAPTERACCESS *)DisplayModeList;
                if ( DisplayModeList < 0 )
                {
                  if ( DisplayModeList == -1071775483 )
                  {
                    WdLogSingleEntry1(1LL, 5549LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"Status != STATUS_GRAPHICS_TRY_AGAIN_NOW",
                      5549LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
LABEL_71:
                  WdLogSingleEntry3(7LL, v42, v69.VidPnSourceId, v14);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v70);
                  goto LABEL_72;
                }
                v14 = (COREADAPTERACCESS *)(int)CombineModeList(
                                                  (unsigned int)&v63,
                                                  (unsigned int)&v64,
                                                  v69.ModeCount,
                                                  v69.pModeList,
                                                  1);
                if ( v61 )
                  operator delete(v69.pModeList);
                if ( (int)v14 < 0 )
                  goto LABEL_71;
              }
              NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v32, NextDisplaySource);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v70);
            }
            while ( NextDisplaySource );
            v11 = v63;
            v9 = v58;
            v14 = v66;
          }
          v10 = v65;
        }
      }
      v33 = COREADAPTERACCESS::AcquireExclusive((__int64)v14, 1LL);
      LODWORD(v14) = v33;
      if ( v33 < 0 )
      {
        WdLogSingleEntry1(7LL, v33);
      }
      else
      {
        v34 = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)v10 + 365), a4);
        LODWORD(v14) = v34;
        if ( v34 < 0 )
        {
          if ( v34 == -1073741275 )
          {
            ModeList = ADAPTER_DISPLAY::CreateModeList(*((ADAPTER_DISPLAY **)v10 + 365), v9, a4);
            v14 = (COREADAPTERACCESS *)ModeList;
            if ( ModeList >= 0 )
            {
              if ( !v11 )
              {
                v36 = v64;
LABEL_47:
                v37 = v67;
                *v67 = 1;
                if ( v12 )
                {
                  for ( i = 0; i < a4->ModeCount; *((_DWORD *)&a4->pModeList[v57].Flags + 1) &= ~0x80u )
                    v57 = i++;
                }
                v38 = ADAPTER_DISPLAY::SetCachedModeList(*((ADAPTER_DISPLAY **)v10 + 365), a4);
                if ( v38 < 0 )
                  WdLogSingleEntry3(7LL, a4->VidPnSourceId, a4, v38);
                else
                  *v37 = 0;
                LODWORD(v14) = 0;
                goto LABEL_51;
              }
              p_pModeList = &a4->pModeList;
              v36 = v64;
              p_ModeCount = &a4->ModeCount;
              v48 = CombineModeList((int)a4 + 16, (int)a4 + 8, v11, (_DWORD)v64, 1);
              LODWORD(v14) = v48;
              if ( v48 >= 0 )
              {
                v63 = 0;
                if ( *p_ModeCount )
                {
                  v50 = 0LL;
                  v51 = 0;
                  v52 = 0;
                  do
                  {
                    v53 = *p_pModeList;
                    v54 = *((_DWORD *)&(*p_pModeList)[v50].Flags + 1);
                    v55 = v52;
                    v50 = (unsigned int)(v51 + 1);
                    v52 = v50;
                    v63 = ++v51;
                    *((_DWORD *)&v53[v55].Flags + 1) = v54 & 0xFFFFFF7F;
                  }
                  while ( (unsigned int)v50 < *p_ModeCount );
                }
                v10 = v65;
                goto LABEL_47;
              }
              WdLogSingleEntry3(7LL, v65, a4->VidPnSourceId, v48);
              v49 = *p_pModeList;
              *p_ModeCount = 0;
              operator delete(v49);
              *p_pModeList = 0LL;
LABEL_51:
              if ( v36 )
                operator delete(v36);
              v6 = v68;
              v9 = v58;
              v10 = v65;
              goto LABEL_8;
            }
            if ( v9 && ModeList == -1071775483 )
            {
              WdLogSingleEntry1(1LL, 5624LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"!ForceCrossAdapterClone || (Status != STATUS_GRAPHICS_TRY_AGAIN_NOW)",
                5624LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            WdLogSingleEntry2(7LL, a4->VidPnSourceId, v14);
          }
          else
          {
            WdLogSingleEntry3(7LL, a4->VidPnSourceId, v10, v34);
          }
        }
      }
LABEL_72:
      v36 = v64;
      goto LABEL_51;
    }
LABEL_8:
    if ( (_DWORD)v14 != -1071775483 )
      break;
    if ( v9 )
      return (unsigned int)v14;
    v8 = v67;
    if ( *v67 )
    {
      WdLogSingleEntry1(1LL, 5706LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!*FreeModeList", 5706LL, 0LL, 0LL, 0LL, 0LL);
      v8 = v67;
    }
    v9 = 1;
    v58 = 1;
  }
  if ( (int)v14 < 0 )
    return (unsigned int)v14;
  if ( !v6 )
    return (unsigned int)v14;
  v15 = 4000LL * a4->VidPnSourceId;
  v16 = *(_QWORD *)(*((_QWORD *)v10 + 365) + 128LL);
  v17 = *(_DWORD *)(v15 + v16 + 1120);
  if ( v17 == 1 )
    return (unsigned int)v14;
  v19 = (const struct _D3DKMT_DISPLAYMODE *)(v16 + v15 + 644);
  *v6 = v19;
  if ( v17 != -1 )
    return (unsigned int)v14;
  Width = v19->Width;
  v21 = 1;
  if ( !v19->Width )
    goto LABEL_33;
  Height = v19->Height;
  if ( !Height )
    goto LABEL_33;
  ModeCount = a4->ModeCount;
  v24 = 0;
  v21 = 0;
  if ( !ModeCount )
    goto LABEL_33;
  pModeList = (COREADAPTERACCESS *)a4->pModeList;
  v66 = pModeList;
  while ( 2 )
  {
    v26 = (unsigned int *)((char *)pModeList + 44 * v24);
    v27 = *v26;
    if ( (_DWORD)v27 != Width
      || *(_QWORD *)(v26 + 1) != __PAIR64__(v19->Format, Height)
      || v26[3] != v19->IntegerRefreshRate
      || v26[7] != v19->DisplayOrientation
      || v26[8] != v19->DisplayFixedOutput
      || v26[6] != v19->ScanLineOrdering )
    {
LABEL_21:
      if ( ++v24 >= ModeCount )
      {
        v21 = 0;
        goto LABEL_33;
      }
      continue;
    }
    break;
  }
  if ( ((*((_BYTE *)&v19->Flags + 4) ^ *((_BYTE *)v26 + 40)) & 0x10) != 0
    || ((*(_BYTE *)&v19->Flags ^ *((_BYTE *)v26 + 36)) & 2) != 0 )
  {
    pModeList = v66;
    goto LABEL_21;
  }
  if ( v26[4] != v19->RefreshRate.Numerator || v26[5] != v19->RefreshRate.Denominator )
  {
    WdLogSingleEntry4(7LL, v27, v26[1], (int)v26[2], v26[3]);
    WdLogSingleEntry4(7LL, v26[4], v26[5], v19->RefreshRate.Numerator, v19->RefreshRate.Denominator);
  }
  v21 = 1;
  *v68 = 0LL;
LABEL_33:
  *(_DWORD *)(4000LL * a4->VidPnSourceId + *(_QWORD *)(*((_QWORD *)v65 + 365) + 128LL) + 1120) = v21;
  return (unsigned int)v14;
}
