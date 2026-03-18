/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01838EC
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C0184F64 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0003954 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00049B8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0005DCC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007124 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C0007298 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000A4DC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0180FCC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0183F9C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C01845C4 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C019A618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rdi
  unsigned int v11; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  DXGPROCESS *Current; // rax
  __int64 v14; // rdi
  SESSION_VIEW *SessionViewFromSource; // rdi
  unsigned __int16 v16; // r14
  unsigned __int16 v17; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v19; // r15
  int v20; // eax
  unsigned int appended; // edi
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  VIDPN_MGR *v24; // r13
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned __int16 *v34; // rbx
  __int16 v35; // r14
  __int64 v37; // r14
  __int64 v38; // r9
  __int64 v39; // rbx
  const wchar_t *v40; // r9
  __int64 v41; // rcx
  unsigned __int16 *v42; // rbx
  unsigned __int16 *v43; // rdx
  signed __int64 v44; // r9
  unsigned __int16 v45; // ax
  unsigned __int16 *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned __int16 *v52; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v53; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v55; // [rsp+58h] [rbp-A8h]
  unsigned int v56[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  struct DISPLAY_SOURCE *v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v61; // [rsp+88h] [rbp-78h]
  _BYTE v62[144]; // [rsp+90h] [rbp-70h] BYREF

  v60 = a3;
  LODWORD(v4) = 0;
  v5 = (unsigned int)a2;
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v10
    || (v11 = PsGetCurrentProcessSessionId(v9),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v11)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    appended = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v51 = PsGetCurrentProcessSessionId(v50);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v51,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return appended;
  }
  Current = DXGPROCESS::GetCurrent();
  v14 = (__int64)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 227LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get current DXGPROCESS",
      227LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811LL;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    WdLogSingleEntry1(2LL, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225506LL;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, this, v5);
  if ( !SessionViewFromSource )
  {
    WdLogSingleEntry3(2LL, v5, this->HighPart, this->LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.",
      v5,
      this->HighPart,
      this->LowPart,
      0LL,
      0LL);
    return -1073741811LL;
  }
  if ( a4 )
    LOBYTE(a4->Length) = 0;
  if ( (*(_BYTE *)(a3 + 2) & 1) != 0 )
  {
    WdLogSingleEntry1(1LL, 264LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"io_MonitorId->MaximumLength % sizeof(WCHAR) == 0",
      264LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = *(_WORD *)(a3 + 2) >> 1;
  v17 = v16;
  v57 = *(unsigned __int16 **)(v60 + 8);
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  v59 = PrimaryDisplaySource;
  if ( PrimaryDisplaySource )
  {
    v19 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( !v19 )
    {
      WdLogSingleEntry1(1LL, 279LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 279LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( !*(_QWORD *)(v19 + 2920) )
    {
      WdLogSingleEntry1(1LL, 280LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        280LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v4 = *(_QWORD *)(v19 + 404);
    *(_QWORD *)v56 = v4;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, (struct DXGADAPTER *const)v19, 0LL);
    v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62, 0LL);
    appended = v20;
    if ( v20 < 0 )
    {
      v37 = (int)v56[1];
      v23 = (unsigned int)v4;
      v38 = (unsigned int)v4;
      v39 = v20;
      WdLogSingleEntry3(2LL, v20, (int)v56[1], v38);
      v40 = L"Failed (0x%I64x) to acquire shared access for adapter LUID: 0x%I64x%08I64x";
    }
    else
    {
      if ( a4 )
        LOBYTE(a4->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(*(ADAPTER_DISPLAY **)(v19 + 2920)) != 0;
      v55 = *((_DWORD *)v59 + 4);
      v22 = *(_QWORD *)(v19 + 2920);
      v23 = 0LL;
      v24 = *(VIDPN_MGR **)(v22 + 104);
      if ( v24 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v59, *(_QWORD *)(v22 + 104));
        v58 = 0LL;
        ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v24);
        auto_rc<DMMVIDPN const>::reset(&v58, (__int64)ClientCommittedVidPnRef);
        if ( v58 )
        {
          v26 = (DMMVIDPNTOPOLOGY *)(v58 + 96);
          v61 = (DMMVIDPNTOPOLOGY *)(v58 + 96);
          while ( 1 )
          {
            v54 = -1;
            v27 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v26, v55, v23, &v54);
            v4 = v27;
            if ( v27 < 0 )
              break;
            if ( v54 == -1 )
            {
              auto_rc<DMMVIDPN const>::reset(&v58, 0LL);
              DXGFASTMUTEX::Release((struct _KTHREAD **)v59 + 5);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
              goto LABEL_34;
            }
            _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v24 + 15) + 72LL));
            v32 = *((_QWORD *)v24 + 15);
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v32, v54);
            if ( TargetById && *((_DWORD *)TargetById + 23) )
            {
              if ( v32 )
                ReferenceCounted::Release((ReferenceCounted *)(v32 + 64));
            }
            else
            {
              if ( v32 )
                ReferenceCounted::Release((ReferenceCounted *)(v32 + 64));
              v53 = 0;
              if ( v17 && v17 != v16 )
              {
                v41 = v17;
                v42 = v57;
                v43 = v57;
                v44 = (char *)L"^" - (char *)v57;
                do
                {
                  if ( !(2147483646LL - v17 + v41) )
                    break;
                  v45 = *(unsigned __int16 *)((char *)v43 + v44);
                  if ( !v45 )
                    break;
                  *v43++ = v45;
                  --v41;
                }
                while ( v41 );
                v46 = v43 - 1;
                if ( v41 )
                  v46 = v43;
                *v46 = 0;
                appended = v41 == 0 ? 0x80000005 : 0;
                if ( appended == -2147483643 )
                {
                  appended = -1073741789;
                  goto LABEL_59;
                }
                if ( !v41 )
                  goto LABEL_59;
                --v17;
                v34 = v42 + 1;
              }
              else
              {
                v34 = v57;
              }
              appended = DpiPersistence::AppendMonitorId(
                           (DpiPersistence *)v54,
                           (unsigned int)v56,
                           (const struct _LUID *)v24,
                           (struct VIDPN_MGR *)v17,
                           (unsigned __int16)&v53,
                           v34,
                           v52);
              if ( (appended & 0x80000000) != 0 )
                goto LABEL_59;
              v17 -= v53;
              v26 = v61;
              v57 = &v34[v53];
            }
            ++v23;
          }
          v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
          v48 = v55;
          v47[3] = v23;
          v47[4] = v48;
          v47[5] = v26;
          v47[6] = v4;
        }
        else
        {
          WdLogSingleEntry2(2LL, (int)v56[1], (unsigned int)v4);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client VidPN is not set on adapter 0x%I64x%08I64x (i.e. no user initiated mode changes took place yet)",
            (int)v56[1],
            (unsigned int)v4,
            0LL,
            0LL,
            0LL);
          LODWORD(v4) = -1071774884;
        }
        appended = v4;
LABEL_59:
        auto_rc<DMMVIDPN const>::reset(&v58, 0LL);
        DXGFASTMUTEX::Release((struct _KTHREAD **)v59 + 5);
        goto LABEL_60;
      }
      v37 = (unsigned int)v4;
      v39 = (int)v56[1];
      WdLogSingleEntry2(2LL, (int)v56[1], (unsigned int)v37);
      v40 = L"Specified display adapter 0x%I64x%08I64x does not have a valid VidPN manager associated with it";
      appended = -1071774923;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, v39, v37, v23, 0LL, 0LL);
LABEL_60:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
    return appended;
  }
LABEL_34:
  v35 = v16 - v17;
  *(_WORD *)v60 = 2 * v35;
  if ( !(2 * v35) )
  {
    LODWORD(v4) = -1073741637;
    WdLogSingleEntry1(3LL, 418LL);
  }
  return (unsigned int)v4;
}
