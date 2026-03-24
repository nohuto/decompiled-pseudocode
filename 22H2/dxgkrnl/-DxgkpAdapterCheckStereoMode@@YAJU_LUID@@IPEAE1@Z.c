/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DE194
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C011EB60 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000A33C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000A39C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001AA94 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0036660 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00DE6F8 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C00DE784 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012F308 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C0133134 (MonitorGetLinkInfoFromTarget.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C014E2EC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(struct _LUID a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  __int64 v4; // rdi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v7; // r14d
  DWORD LowPart; // ebx
  __int64 v9; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct DXGADAPTER **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // r8d
  unsigned int v28; // r14d
  _QWORD *v29; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char v31; // si
  __int64 v32; // rbx
  int v33; // eax
  int LinkInfoFromTarget; // eax
  int v35; // esi
  __int64 v36; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r10
  UINT v38; // r9d
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // rax
  int CachedStereoStates; // eax
  _QWORD *v44; // rax
  unsigned __int8 v46[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v47; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v48[3]; // [rsp+45h] [rbp-BBh] BYREF
  unsigned __int8 v49[8]; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v50; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  _D3DKMT_GETDISPLAYMODELIST v52; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v53; // [rsp+78h] [rbp-88h] BYREF
  struct _LUID v54; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  int v56; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v57[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v58[8]; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGADAPTER *v59; // [rsp+B0h] [rbp-50h]
  char v60; // [rsp+B8h] [rbp-48h]
  _BYTE v61[88]; // [rsp+C0h] [rbp-40h] BYREF
  DXGADAPTER *v62; // [rsp+118h] [rbp+18h]

  v4 = 0LL;
  v54 = a1;
  v7 = a2;
  LowPart = a1.LowPart;
  if ( !a4 || !a3 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2);
    *(_QWORD *)(v9 + 24) = 8791LL;
    WdLogEvent5_WdAssertion(v9);
  }
  Current = DXGPROCESS::GetCurrent();
  *a3 = 0;
  v13 = Current;
  *a4 = 0;
  if ( !Current )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v44[3] = 0LL;
    LODWORD(v4) = -1073741811;
    v44[6] = -1073741811LL;
    v44[4] = a3;
    v44[5] = a4;
    WdLogEvent5_WdError(v44);
    return (unsigned int)v4;
  }
  v57[0] = 0LL;
  memset(&v52, 0, sizeof(v52));
  v52.VidPnSourceId = v7;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v57, &v54) )
  {
    v50 = 0LL;
    v17 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v50, v14);
    if ( (int)DxgkpGetPairingAdapters(v57[0], v52.VidPnSourceId, 0LL, 0LL, v17, &v51, 0) < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
      v20[3] = v57[0] != 0LL;
      v20[4] = v52.VidPnSourceId;
      v20[5] = 0LL;
LABEL_56:
      DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(&v50);
      goto LABEL_57;
    }
    if ( !v50 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v21 + 24) = 8822LL;
      WdLogEvent5_WdAssertion(v21);
    }
    v48[0] = 0;
    v22 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v48, 0);
    v25 = v22;
    if ( v22 < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v26 + 24) = v25;
      WdLogEvent5_WdError(v26);
      LODWORD(v4) = v25;
LABEL_55:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v48);
      goto LABEL_56;
    }
    v59 = v50;
    v60 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v61, v50, 0LL);
    v28 = v27 + 1;
    if ( *((_DWORD *)v50 + 50) != v27 + 1 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v29[3] = v13;
      v29[4] = v52.hAdapter;
      LOBYTE(v4) = v50 != 0LL;
      v29[5] = v4;
      LODWORD(v4) = -1073741130;
      v29[6] = -1073741130LL;
LABEL_17:
      WdLogEvent5_WdDmmEvent(v29);
LABEL_54:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61, (__int64)pModeList);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
      goto LABEL_55;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v50 + 337), v52.VidPnSourceId) )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      LOBYTE(v4) = v50 != 0LL;
      v29[3] = v4;
      LODWORD(v4) = -1071774238;
      v29[4] = v52.VidPnSourceId;
      v29[5] = -1071774238LL;
      goto LABEL_17;
    }
    *(_WORD *)v46 = 0;
    v31 = 0;
    LODWORD(v32) = ADAPTER_DISPLAY::GetCachedStereoStates(
                     *((ADAPTER_DISPLAY **)v50 + 337),
                     v52.VidPnSourceId,
                     v46,
                     &v46[1]);
    if ( (_DWORD)v32 != -1073741275 )
      goto LABEL_40;
    v53 = -1;
    v33 = DmmEnumClientVidPnPathTargetsFromSource(v50, v52.VidPnSourceId, 0LL, &v53);
    v32 = v33;
    if ( v33 >= 0 )
    {
      v55 = 0LL;
      v56 = 0;
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v50, v53, &v55);
      v32 = LinkInfoFromTarget;
      if ( LinkInfoFromTarget >= 0 )
      {
        v35 = v28 & HIDWORD(v55);
        if ( (v28 & HIDWORD(v55)) == 0 )
          *(_WORD *)v46 = 0;
        LODWORD(v32) = v35 != 0 ? 0xC0000225 : 0;
        v31 = v28 ^ v35;
LABEL_26:
        if ( (_DWORD)v32 == -1073741275 )
          goto LABEL_27;
LABEL_40:
        if ( (int)v32 >= 0 )
        {
          if ( v31 )
          {
            if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v62) )
            {
              if ( DXGADAPTER::IsCoreResourceSharedOwner(v62) )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)v61);
              v40 = COREADAPTERACCESS::AcquireExclusive((__int64)v61, v28);
              v41 = v40;
              if ( v40 < 0 )
              {
                v42 = WdLogNewEntry5_WdDmmEvent();
                *(_QWORD *)(v42 + 24) = v41;
                WdLogEvent5_WdDmmEvent(v42);
              }
            }
            *(_WORD *)v49 = 0;
            CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(
                                   *((ADAPTER_DISPLAY **)v50 + 337),
                                   v52.VidPnSourceId,
                                   v49,
                                   &v49[1]);
            LODWORD(v32) = CachedStereoStates;
            if ( CachedStereoStates < 0 )
            {
              if ( CachedStereoStates == -1073741275 )
                LODWORD(v32) = ADAPTER_DISPLAY::SetCachedStereoStates(
                                 *((_QWORD *)v50 + 337),
                                 v52.VidPnSourceId,
                                 v46[1] != 0,
                                 v46[0] != 0);
            }
            else
            {
              *(_WORD *)v46 = *(_WORD *)v49;
            }
          }
          if ( (int)v32 >= 0 )
          {
            *a3 = v46[0];
            *a4 = v46[1];
          }
        }
        LODWORD(v4) = v32;
        goto LABEL_54;
      }
      if ( LinkInfoFromTarget == -1073741275 )
      {
LABEL_27:
        v47 = 0;
        LODWORD(v32) = DxgkpGetDisplayModeList(v50, (struct COREADAPTERACCESS *)v61, 0, &v52, &v47);
        if ( (int)v32 < 0 )
        {
          pModeList = v52.pModeList;
        }
        else
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v50 + 337), v52.VidPnSourceId);
          pModeList = v52.pModeList;
          v38 = 0;
          if ( v52.ModeCount )
          {
            while ( 1 )
            {
              v39 = v38;
              if ( (*((_DWORD *)&v52.pModeList[v39].Flags + 1) & 0x10) != 0 )
              {
                v46[1] = v28;
                if ( v52.pModeList[v39].Width == *(_DWORD *)DisplayModeInfo
                  && v52.pModeList[v39].Height == *((_DWORD *)DisplayModeInfo + 1)
                  && v52.pModeList[v39].Format == *((_DWORD *)DisplayModeInfo + 2) )
                {
                  break;
                }
              }
              v38 += v28;
              if ( v38 >= v52.ModeCount )
                goto LABEL_36;
            }
            v46[0] = v28;
          }
LABEL_36:
          v31 = v28;
        }
        if ( v47 )
        {
          operator delete[](pModeList);
          v52.pModeList = 0LL;
        }
        goto LABEL_40;
      }
    }
    v36 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v36 + 24) = v32;
    WdLogEvent5_WdDmmEvent(v36);
    goto LABEL_26;
  }
  v16 = WdLogNewEntry5_WdError(v15, v14);
  *(_QWORD *)(v16 + 24) = v54.HighPart;
  *(_QWORD *)(v16 + 32) = LowPart;
  WdLogEvent5_WdError(v16);
  LODWORD(v4) = -1073741811;
LABEL_57:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v57);
  return (unsigned int)v4;
}
