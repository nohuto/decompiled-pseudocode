/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02F5694
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009274 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009954 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01A9CE0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01AFF6C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C01B0120 (MonitorGetLinkInfoFromTarget.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C02B8214 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C02BABF8 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(
        struct _LUID a1,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  DWORD LowPart; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rsi
  __int64 HighPart; // rdi
  signed int CachedStereoStates; // ebx
  struct DXGADAPTER **v12; // rax
  struct DXGADAPTER *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  bool v19; // zf
  int v20; // eax
  __int64 v21; // rdi
  bool v22; // di
  int v23; // eax
  int LinkInfoFromTarget; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  unsigned int v27; // r9d
  __int64 v28; // r8
  int v29; // eax
  int v30; // eax
  unsigned __int8 v32[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v33; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v34[3]; // [rsp+55h] [rbp-ABh] BYREF
  bool v35[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  struct _LUID v38; // [rsp+70h] [rbp-90h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v39; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGK_MONITORLINKINFO v40; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v41[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[8]; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGADAPTER *v43; // [rsp+B8h] [rbp-48h]
  char v44; // [rsp+C0h] [rbp-40h]
  _BYTE v45[88]; // [rsp+D0h] [rbp-30h] BYREF
  DXGADAPTER *v46; // [rsp+128h] [rbp+28h]

  v38 = a1;
  LowPart = a1.LowPart;
  if ( !a4 || !a3 )
  {
    WdLogSingleEntry1(1LL, 9109LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAnyStereoExists && pCurModeSupportsStereo",
      9109LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(*(_QWORD *)&a1);
  *a3 = 0;
  v9 = Current;
  *a4 = 0;
  if ( !Current )
  {
    CachedStereoStates = -1073741811;
    WdLogSingleEntry4(2LL, 0LL, a3, a4, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Exception encountered validating process or input. pProcess=0x%I64x, pAnyStereoExists=0x%I64x, pCurModeSu"
                "pportsStereo=0x%I64x. Returning 0x%I64x",
      0LL,
      (__int64)a3,
      (__int64)a4,
      -1073741811LL,
      0LL);
    return (unsigned int)CachedStereoStates;
  }
  v41[0] = 0LL;
  memset(&v39, 0, sizeof(v39));
  v39.VidPnSourceId = a2;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v41, &v38) )
  {
    v36 = 0LL;
    v12 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v36);
    v13 = v41[0];
    if ( (int)DxgkpGetPairingAdapters(v41[0], v39.VidPnSourceId, 0LL, 0LL, v12, &v37, 0) < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v19 = v13 == 0LL;
      CachedStereoStates = 0;
      v18[3] = !v19;
      v18[4] = v39.VidPnSourceId;
      v18[5] = 0LL;
LABEL_58:
      DXGADAPTER_REFERENCE::Assign(&v36, 0LL);
      goto LABEL_59;
    }
    if ( !v36 )
    {
      WdLogSingleEntry1(1LL, 9140LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter.Get() != NULL", 9140LL, 0LL, 0LL, 0LL, 0LL);
    }
    v34[0] = 0;
    v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v34, 0);
    v21 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(2LL, v20);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
        v21,
        0LL,
        0LL,
        0LL,
        0LL);
      CachedStereoStates = v21;
LABEL_56:
      if ( v34[0] )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_58;
    }
    v43 = v36;
    v44 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v36, 0LL);
    if ( *((_DWORD *)v36 + 50) != 1 )
    {
      CachedStereoStates = -1073741130;
      WdLogSingleEntry4(7LL, v9, v39.hAdapter, v36 != 0LL, -1073741130LL);
      goto LABEL_54;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v36 + 365), v39.VidPnSourceId) )
    {
      CachedStereoStates = -1071774238;
      WdLogSingleEntry3(7LL, v36 != 0LL, v39.VidPnSourceId, -1071774238LL);
      goto LABEL_54;
    }
    if ( *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v36 + 365), v39.VidPnSourceId) + 19) )
    {
      *a3 = 0;
      CachedStereoStates = 0;
      *a4 = 0;
      goto LABEL_54;
    }
    *(_WORD *)v32 = 0;
    v22 = 0;
    CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(
                           *((ADAPTER_DISPLAY **)v36 + 365),
                           v39.VidPnSourceId,
                           (bool *)v32,
                           (bool *)&v32[1]);
    if ( CachedStereoStates == -1073741275 )
    {
      v38.LowPart = -1;
      v23 = DmmEnumClientVidPnPathTargetsFromSource(v36, v39.VidPnSourceId, 0LL, (unsigned int *const)&v38);
      CachedStereoStates = v23;
      if ( v23 < 0 )
      {
        WdLogSingleEntry1(7LL, v23);
      }
      else
      {
        *(_QWORD *)&v40.UsageHints.0 = 0LL;
        v40.DitheringSupport.Value = 0;
        LinkInfoFromTarget = MonitorGetLinkInfoFromTarget((__int64)v36, v38.LowPart, &v40);
        CachedStereoStates = LinkInfoFromTarget;
        if ( LinkInfoFromTarget < 0 )
        {
          if ( LinkInfoFromTarget != -1073741275 )
          {
            WdLogSingleEntry1(7LL, LinkInfoFromTarget);
            goto LABEL_54;
          }
          goto LABEL_28;
        }
        if ( (*(_BYTE *)&v40.Capabilities.0 & 1) == 0 )
          *(_WORD *)v32 = 0;
        CachedStereoStates = (*(_BYTE *)&v40.Capabilities.0 & 1) != 0 ? 0xC0000225 : 0;
        v22 = !(*(_BYTE *)&v40.Capabilities.0 & 1);
      }
      if ( CachedStereoStates == -1073741275 )
      {
LABEL_28:
        v33 = 0;
        CachedStereoStates = DxgkpGetDisplayModeList(v36, (struct COREADAPTERACCESS *)v45, 0, &v39, 0LL, &v33);
        if ( CachedStereoStates < 0 )
        {
          pModeList = v39.pModeList;
        }
        else
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v36 + 365), v39.VidPnSourceId);
          pModeList = v39.pModeList;
          v27 = 0;
          if ( v39.ModeCount )
          {
            while ( 1 )
            {
              v28 = v27;
              if ( (*((_DWORD *)&v39.pModeList[v28].Flags + 1) & 0x10) != 0 )
              {
                v32[1] = 1;
                if ( v39.pModeList[v28].Width == *(_DWORD *)DisplayModeInfo
                  && v39.pModeList[v28].Height == *((_DWORD *)DisplayModeInfo + 1)
                  && v39.pModeList[v28].Format == *((_DWORD *)DisplayModeInfo + 2) )
                {
                  break;
                }
              }
              if ( ++v27 >= v39.ModeCount )
                goto LABEL_37;
            }
            v32[0] = 1;
          }
LABEL_37:
          v22 = 1;
        }
        if ( v33 )
        {
          operator delete(pModeList);
          v39.pModeList = 0LL;
        }
      }
    }
    if ( CachedStereoStates < 0 )
      goto LABEL_54;
    if ( !v22 )
      goto LABEL_52;
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v46) )
    {
      if ( DXGADAPTER::IsCoreResourceSharedOwner(v46) )
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v45);
      v29 = COREADAPTERACCESS::AcquireExclusive((__int64)v45, 1LL);
      if ( v29 < 0 )
        WdLogSingleEntry1(7LL, v29);
    }
    *(_WORD *)v35 = 0;
    v30 = ADAPTER_DISPLAY::GetCachedStereoStates(*((ADAPTER_DISPLAY **)v36 + 365), v39.VidPnSourceId, v35, &v35[1]);
    CachedStereoStates = v30;
    if ( v30 >= 0 )
    {
      *(_WORD *)v32 = *(_WORD *)v35;
LABEL_52:
      *a3 = v32[0];
      *a4 = v32[1];
      goto LABEL_54;
    }
    if ( v30 == -1073741275 )
    {
      CachedStereoStates = ADAPTER_DISPLAY::SetCachedStereoStates(
                             *((_QWORD *)v36 + 365),
                             v39.VidPnSourceId,
                             v32[1] != 0,
                             v32[0] != 0);
      if ( CachedStereoStates >= 0 )
        goto LABEL_52;
    }
LABEL_54:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
    if ( v44 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
    goto LABEL_56;
  }
  HighPart = v38.HighPart;
  WdLogSingleEntry2(2LL, v38.HighPart, LowPart);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkpAdapterCheckStereoMode function.",
    HighPart,
    LowPart,
    0LL,
    0LL,
    0LL);
  CachedStereoStates = -1073741811;
LABEL_59:
  DXGADAPTER_REFERENCE::Assign(v41, 0LL);
  return (unsigned int)CachedStereoStates;
}
