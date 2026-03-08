/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01C11E4
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01C21D4 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0009F04 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C000AC48 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01830A8 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01BE97C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01C167C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C01C1CF0 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  DXGPROCESS *Current; // rax
  __int64 v17; // rdi
  SESSION_VIEW *SessionViewFromSource; // rdi
  unsigned __int16 v19; // r14
  unsigned __int16 v20; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v22; // r15
  int v23; // eax
  unsigned int appended; // edi
  __int64 v25; // rax
  __int64 v26; // r15
  VIDPN_MGR *v27; // r13
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v29; // rdi
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned __int16 *v37; // rbx
  __int16 v38; // r14
  __int64 v40; // r14
  __int64 v41; // r9
  __int64 v42; // rbx
  const wchar_t *v43; // r9
  __int64 v44; // rcx
  unsigned __int16 *v45; // rbx
  unsigned __int16 *v46; // rdx
  signed __int64 v47; // r9
  unsigned __int16 v48; // ax
  unsigned __int16 *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // eax
  unsigned __int16 *v58; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v59; // [rsp+50h] [rbp-B0h] BYREF
  int v60; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v61; // [rsp+58h] [rbp-A8h]
  unsigned int v62[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v63; // [rsp+68h] [rbp-98h]
  __int64 v64; // [rsp+70h] [rbp-90h] BYREF
  struct DISPLAY_SOURCE *v65; // [rsp+78h] [rbp-88h] BYREF
  __int64 v66; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v67; // [rsp+88h] [rbp-78h]
  _BYTE v68[144]; // [rsp+90h] [rbp-70h] BYREF

  v66 = a3;
  LODWORD(v4) = 0;
  v5 = (unsigned int)a2;
  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v11
    || (v14 = PsGetCurrentProcessSessionId(v10, v9, v12, v13),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, v14)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v12, v13);
    appended = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v57 = PsGetCurrentProcessSessionId(v54, v53, v55, v56);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v57,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return appended;
  }
  Current = DXGPROCESS::GetCurrent(v10);
  v17 = (__int64)Current;
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
    WdLogSingleEntry1(2LL, v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).",
      v17,
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
  v19 = *(_WORD *)(a3 + 2) >> 1;
  v20 = v19;
  v63 = *(unsigned __int16 **)(v66 + 8);
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  v65 = PrimaryDisplaySource;
  if ( PrimaryDisplaySource )
  {
    v22 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( !v22 )
    {
      WdLogSingleEntry1(1LL, 279LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 279LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( !*(_QWORD *)(v22 + 2920) )
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
    v4 = *(_QWORD *)(v22 + 404);
    *(_QWORD *)v62 = v4;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, (struct DXGADAPTER *const)v22, 0LL);
    v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68, 0LL);
    appended = v23;
    if ( v23 < 0 )
    {
      v40 = (int)v62[1];
      v26 = (unsigned int)v4;
      v41 = (unsigned int)v4;
      v42 = v23;
      WdLogSingleEntry3(2LL, v23, (int)v62[1], v41);
      v43 = L"Failed (0x%I64x) to acquire shared access for adapter LUID: 0x%I64x%08I64x";
    }
    else
    {
      if ( a4 )
        LOBYTE(a4->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(*(ADAPTER_DISPLAY **)(v22 + 2920)) != 0;
      v61 = *((_DWORD *)v65 + 4);
      v25 = *(_QWORD *)(v22 + 2920);
      v26 = 0LL;
      v27 = *(VIDPN_MGR **)(v25 + 104);
      if ( v27 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v65, *(_QWORD *)(v25 + 104));
        v64 = 0LL;
        ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v27);
        auto_rc<DMMVIDPN const>::reset(&v64, (__int64)ClientCommittedVidPnRef);
        if ( v64 )
        {
          v29 = (DMMVIDPNTOPOLOGY *)(v64 + 96);
          v67 = (DMMVIDPNTOPOLOGY *)(v64 + 96);
          while ( 1 )
          {
            v60 = -1;
            v30 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v29, (char *)v61, v26, (unsigned int *)&v60);
            v4 = v30;
            if ( v30 < 0 )
              break;
            if ( v60 == -1 )
            {
              auto_rc<DMMVIDPN const>::reset(&v64, 0LL);
              DXGFASTMUTEX::Release((struct _KTHREAD **)v65 + 5);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
              goto LABEL_34;
            }
            _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v27 + 15) + 72LL));
            v35 = *((_QWORD *)v27 + 15);
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v35, v60);
            if ( TargetById && *((_DWORD *)TargetById + 23) )
            {
              if ( v35 )
                ReferenceCounted::Release((ReferenceCounted *)(v35 + 64));
            }
            else
            {
              if ( v35 )
                ReferenceCounted::Release((ReferenceCounted *)(v35 + 64));
              v59 = 0;
              if ( v20 && v20 != v19 )
              {
                v44 = v20;
                v45 = v63;
                v46 = v63;
                v47 = (char *)L"^" - (char *)v63;
                do
                {
                  if ( !(2147483646LL - v20 + v44) )
                    break;
                  v48 = *(unsigned __int16 *)((char *)v46 + v47);
                  if ( !v48 )
                    break;
                  *v46++ = v48;
                  --v44;
                }
                while ( v44 );
                v49 = v46 - 1;
                if ( v44 )
                  v49 = v46;
                *v49 = 0;
                appended = v44 == 0 ? 0x80000005 : 0;
                if ( appended == -2147483643 )
                {
                  appended = -1073741789;
                  goto LABEL_59;
                }
                if ( !v44 )
                  goto LABEL_59;
                --v20;
                v37 = v45 + 1;
              }
              else
              {
                v37 = v63;
              }
              appended = DpiPersistence::AppendMonitorId(
                           (DpiPersistence *)(unsigned int)v60,
                           (unsigned int)v62,
                           (const struct _LUID *)v27,
                           (struct VIDPN_MGR *)v20,
                           (unsigned __int16)&v59,
                           v37,
                           v58);
              if ( (appended & 0x80000000) != 0 )
                goto LABEL_59;
              v20 -= v59;
              v29 = v67;
              v63 = &v37[v59];
            }
            ++v26;
          }
          v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31, v33, v34);
          v51 = v61;
          v50[3] = v26;
          v50[4] = v51;
          v50[5] = v29;
          v50[6] = v4;
        }
        else
        {
          WdLogSingleEntry2(2LL, (int)v62[1], (unsigned int)v4);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client VidPN is not set on adapter 0x%I64x%08I64x (i.e. no user initiated mode changes took place yet)",
            (int)v62[1],
            (unsigned int)v4,
            0LL,
            0LL,
            0LL);
          LODWORD(v4) = -1071774884;
        }
        appended = v4;
LABEL_59:
        auto_rc<DMMVIDPN const>::reset(&v64, 0LL);
        DXGFASTMUTEX::Release((struct _KTHREAD **)v65 + 5);
        goto LABEL_60;
      }
      v40 = (unsigned int)v4;
      v42 = (int)v62[1];
      WdLogSingleEntry2(2LL, (int)v62[1], (unsigned int)v40);
      v43 = L"Specified display adapter 0x%I64x%08I64x does not have a valid VidPN manager associated with it";
      appended = -1071774923;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v43, v42, v40, v26, 0LL, 0LL);
LABEL_60:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
    return appended;
  }
LABEL_34:
  v38 = v19 - v20;
  *(_WORD *)v66 = 2 * v38;
  if ( !(2 * v38) )
  {
    LODWORD(v4) = -1073741637;
    WdLogSingleEntry1(3LL, 418LL);
  }
  return (unsigned int)v4;
}
