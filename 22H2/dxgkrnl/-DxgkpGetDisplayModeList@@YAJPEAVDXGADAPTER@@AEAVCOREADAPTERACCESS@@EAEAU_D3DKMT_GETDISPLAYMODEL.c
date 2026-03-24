/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C014E2EC
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DE194 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C014E110 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C014E2EC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkGetDisplayModeList @ 0x1C016FC30 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00E108C (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C01217A4 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01303F0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130410 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C013E304 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C014E2EC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C014E54C (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0151440 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0151550 (DxgkQueryMonitorTypeLockHeld.c)
 *     _CombineModeList @ 0x1C025E810 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C029F458 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        struct DXGADAPTER *a1,
        struct COREADAPTERACCESS *a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rbx
  unsigned __int8 *v6; // r14
  unsigned __int8 v8; // si
  struct COREADAPTERACCESS *v9; // r15
  int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  int CachedModeList; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int **SessionViewOwner; // rax
  SESSION_VIEW *v24; // r15
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int ModeList; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // r15
  bool v32; // zf
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  struct DISPLAY_SOURCE *NextDisplaySource; // rsi
  __int64 v38; // rcx
  struct DXGADAPTER *v39; // r14
  unsigned int v40; // r11d
  int v41; // eax
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int DisplayModeList; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // rax
  D3DKMT_DISPLAYMODE **p_pModeList; // r14
  UINT *p_ModeCount; // rsi
  int v58; // eax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  D3DKMT_DISPLAYMODE *v61; // rcx
  UINT v62; // edx
  __int64 v63; // rax
  UINT i; // edx
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned __int8 v71; // [rsp+50h] [rbp-B0h]
  char v72; // [rsp+51h] [rbp-AFh] BYREF
  char v73; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int8 v74[5]; // [rsp+53h] [rbp-ADh] BYREF
  void *v75; // [rsp+58h] [rbp-A8h] BYREF
  int v76; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v77; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 *v78; // [rsp+68h] [rbp-98h]
  int v79; // [rsp+70h] [rbp-90h] BYREF
  struct COREADAPTERACCESS *v80; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_GETDISPLAYMODELIST v81; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v82[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a5;
  v78 = a5;
  v8 = a3;
  v71 = a3;
  v9 = a2;
  v80 = a2;
  while ( 1 )
  {
    v76 = 0;
    v11 = 0;
    LOBYTE(v5) = 0;
    v75 = 0LL;
    *v6 = 0;
    v12 = 3968LL * a4->VidPnSourceId;
    v13 = *((_QWORD *)a1 + 337);
    v77 = v5;
    v79 = 0;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                (__int64)a1,
                *(unsigned int *)(v12 + *(_QWORD *)(v13 + 112) + 1068),
                &v76) >= 0 )
      v77 = v76 != 0;
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)a1 + 337), a4);
    v5 = CachedModeList;
    v16 = CachedModeList + 0x80000000;
    if ( (int)v16 >= 0 && CachedModeList != -1073741275 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
      v68[3] = a4->VidPnSourceId;
      v68[4] = a1;
      v68[5] = v5;
      WdLogEvent5_WdDmmEvent(v68);
      return (unsigned int)v5;
    }
    if ( CachedModeList == -1073741275 )
      break;
LABEL_6:
    if ( (_DWORD)v5 != -1071775483 || v8 )
      return (unsigned int)v5;
    if ( *v6 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v67 + 24) = 5530LL;
      WdLogEvent5_WdAssertion(v67);
    }
    v8 = 1;
    v71 = 1;
  }
  v18 = 3968LL * a4->VidPnSourceId;
  v19 = *((_QWORD *)a1 + 337);
  v73 = 0;
  v20 = *(_DWORD *)(v18 + *(_QWORD *)(v19 + 112) + 1068);
  if ( v20 != -1 && (int)DxgkQueryMonitorTypeLockHeld((_DWORD)a1, v20, 0, 0, 0LL, (__int64)&v73, 0LL, 0LL, 0LL) < 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v35 + 24) = 5274LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v9 + 11)) )
    COREADAPTERACCESS::Release(v9);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a1 + 337), a4->VidPnSourceId);
  v24 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner) && !v8
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v24),
        PrimaryDisplaySource != (const struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 337) + 112LL)
                                                              + 3968LL * a4->VidPnSourceId)) )
  {
LABEL_17:
    v25 = COREADAPTERACCESS::AcquireExclusive((__int64)v80, 1LL);
    v5 = v25;
    if ( v25 < 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26);
      v54[3] = v5;
    }
    else
    {
      v27 = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)a1 + 337), a4);
      v5 = v27;
      if ( v27 >= 0 )
      {
LABEL_49:
        v31 = v75;
        goto LABEL_27;
      }
      if ( v27 == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList(*((ADAPTER_DISPLAY **)a1 + 337), v8, a4);
        v5 = ModeList;
        if ( ModeList >= 0 )
        {
          if ( !v11 )
          {
            v31 = v75;
LABEL_23:
            v32 = !v77;
            *v6 = 1;
            if ( !v32 )
            {
              for ( i = 0; i < a4->ModeCount; *((_DWORD *)&a4->pModeList[v65].Flags + 1) &= ~0x80u )
                v65 = i++;
            }
            v33 = ADAPTER_DISPLAY::SetCachedModeList(*((ADAPTER_DISPLAY **)a1 + 337), a4);
            v34 = v33;
            if ( v33 < 0 )
            {
              v66 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
              v66[3] = a4->VidPnSourceId;
              v66[4] = a4;
              v66[5] = v34;
              WdLogEvent5_WdDmmEvent(v66);
            }
            else
            {
              *v6 = 0;
            }
            LODWORD(v5) = 0;
            goto LABEL_27;
          }
          p_pModeList = &a4->pModeList;
          v31 = v75;
          p_ModeCount = &a4->ModeCount;
          v58 = CombineModeList((int)a4 + 16, (int)a4 + 8, v11, (_DWORD)v75, 1);
          v5 = v58;
          if ( v58 >= 0 )
          {
            v62 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v63 = v62++;
                *((_DWORD *)&(*p_pModeList)[v63].Flags + 1) &= ~0x80u;
              }
              while ( v62 < *p_ModeCount );
              v31 = v75;
            }
            v6 = v78;
            goto LABEL_23;
          }
          v60 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59);
          v60[3] = a1;
          v60[4] = a4->VidPnSourceId;
          v60[5] = v5;
          WdLogEvent5_WdDmmEvent(v60);
          v61 = *p_pModeList;
          *p_ModeCount = 0;
          operator delete[](v61);
          *p_pModeList = 0LL;
          v6 = v78;
LABEL_27:
          if ( v31 )
            operator delete[](v31);
          v9 = v80;
          v8 = v71;
          goto LABEL_6;
        }
        if ( v8 && ModeList == -1071775483 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v30, v29);
          *(_QWORD *)(v55 + 24) = 5448LL;
          WdLogEvent5_WdAssertion(v55);
        }
        v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
        v54[3] = a4->VidPnSourceId;
        v54[4] = v5;
      }
      else
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
        v54[3] = a4->VidPnSourceId;
        v54[4] = a1;
        v54[5] = v5;
      }
    }
    WdLogEvent5_WdDmmEvent(v54);
    goto LABEL_49;
  }
  NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, PrimaryDisplaySource);
  if ( !NextDisplaySource )
  {
LABEL_53:
    v8 = v71;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v38 = *((_QWORD *)NextDisplaySource + 1);
    v72 = 0;
    v39 = *(struct DXGADAPTER **)(v38 + 16);
    v74[0] = 0;
    memset(&v81, 0, sizeof(v81));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v82, v39, 0LL);
    v41 = COREADAPTERACCESS::AcquireExclusive((__int64)v82, v40);
    v5 = v41;
    if ( v41 < 0 )
      break;
    if ( (int)MonitorGetMonitorOrientationsFromTarget((__int64)v39, *((unsigned int *)NextDisplaySource + 267), &v76) >= 0 )
    {
      v43 = v77;
      if ( v76 )
        v43 = 1;
      LOBYTE(v77) = v43;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                (_DWORD)v39,
                *((_DWORD *)NextDisplaySource + 267),
                0,
                0,
                0LL,
                (__int64)&v72,
                0LL,
                0LL,
                0LL) < 0 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v45, v44);
      *(_QWORD *)(v46 + 24) = 5355LL;
      WdLogEvent5_WdAssertion(v46);
    }
    if ( v73 == v72 )
    {
      v81.VidPnSourceId = *((_DWORD *)NextDisplaySource + 4);
      DisplayModeList = DxgkpGetDisplayModeList(v39, (struct COREADAPTERACCESS *)v82, v71, &v81, v74);
      v5 = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v49, v48);
          *(_QWORD *)(v51 + 24) = 5373LL;
          WdLogEvent5_WdAssertion(v51);
        }
LABEL_48:
        v52 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v49);
        v52[3] = v39;
        v52[4] = v81.VidPnSourceId;
        v52[5] = v5;
        WdLogEvent5_WdDmmEvent(v52);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82, v53);
        v6 = v78;
        goto LABEL_49;
      }
      v5 = (int)CombineModeList((unsigned int)&v79, (unsigned int)&v75, v81.ModeCount, v81.pModeList, 1);
      if ( v74[0] )
        operator delete[](v81.pModeList);
      if ( (int)v5 < 0 )
        goto LABEL_48;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, NextDisplaySource);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82, v50);
    if ( !NextDisplaySource )
    {
      v11 = v79;
      v6 = v78;
      goto LABEL_53;
    }
  }
  v69 = WdLogNewEntry5_WdDmmEvent(v42);
  *(_QWORD *)(v69 + 24) = v39;
  *(_QWORD *)(v69 + 32) = v5;
  WdLogEvent5_WdDmmEvent(v69);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82, v70);
  return (unsigned int)v5;
}
