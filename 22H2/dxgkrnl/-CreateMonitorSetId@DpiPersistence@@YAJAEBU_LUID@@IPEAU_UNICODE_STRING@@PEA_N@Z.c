/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C014ABC0
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C014AEA8 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000A258 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C000CA98 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C012E038 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C012F520 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130410 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C014AB3C (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGPROCESS *Current; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGPROCESS *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rbx
  unsigned __int16 v24; // si
  unsigned __int16 v25; // si
  unsigned __int16 v26; // r15
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DISPLAY_SOURCE *v31; // r13
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r12
  unsigned int v40; // edi
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  char **v46; // r13
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v52; // rdx
  unsigned __int16 *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int16 v56; // si
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int16 v75; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v76; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v77; // [rsp+38h] [rbp-C8h]
  unsigned int v78[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v79; // [rsp+48h] [rbp-B8h]
  __int64 v80; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v81; // [rsp+58h] [rbp-A8h] BYREF
  _WORD *v82; // [rsp+60h] [rbp-A0h]
  _BYTE v83[144]; // [rsp+70h] [rbp-90h] BYREF

  SessionDataForSpecifiedSession = 0LL;
  v82 = (_WORD *)a3;
  LODWORD(v5) = 0;
  v6 = (unsigned int)a2;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v58 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v58 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v60, v59);
    v61 = (_QWORD *)v58;
    *(_QWORD *)(v58 + 32) = -1073741811LL;
LABEL_42:
    WdLogEvent5_WdError(v61);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v11, v10, v13, v14);
  v19 = Current;
  if ( !Current )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v62[3] = 225LL;
LABEL_41:
    v61 = v62;
    goto LABEL_42;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    v63 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v63 + 24) = v19;
    WdLogEvent5_WdError(v63);
    return 3221225506LL;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, this, v6);
  if ( !SessionViewFromSource )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v22, 0LL);
    v62[3] = v6;
    v62[4] = this->HighPart;
    v62[5] = this->LowPart;
    goto LABEL_41;
  }
  if ( a4 )
    LOBYTE(a4->Length) = 0;
  v24 = *(_WORD *)(a3 + 2);
  if ( (v24 & 1) != 0 )
  {
    v64 = WdLogNewEntry5_WdAssertion(v22, 0LL);
    *(_QWORD *)(v64 + 24) = 262LL;
    WdLogEvent5_WdAssertion(v64);
    v24 = *(_WORD *)(a3 + 2);
  }
  v25 = v24 >> 1;
  v26 = v25;
  v79 = *(unsigned __int16 **)(a3 + 8);
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  v31 = PrimaryDisplaySource;
  if ( PrimaryDisplaySource )
  {
    v32 = *((_QWORD *)PrimaryDisplaySource + 1);
    v33 = *(_QWORD *)(v32 + 16);
    if ( !v33 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v32, v28);
      *(_QWORD *)(v65 + 24) = 277LL;
      WdLogEvent5_WdAssertion(v65);
      v28 = 0LL;
    }
    if ( *(_QWORD *)(v33 + 2696) == v28 )
    {
      v66 = WdLogNewEntry5_WdAssertion(v32, v28);
      *(_QWORD *)(v66 + 24) = 278LL;
      WdLogEvent5_WdAssertion(v66);
    }
    v34 = *(_QWORD *)(v33 + 316);
    *(_QWORD *)v78 = v34;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v83, (struct DXGADAPTER *const)v33, 0LL);
    v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v83, 0LL);
    v5 = v35;
    if ( v35 < 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
      v67[4] = (int)v78[1];
      v67[5] = (unsigned int)v34;
      v67[3] = v5;
      WdLogEvent5_WdError(v67);
    }
    else
    {
      if ( a4 )
        LOBYTE(a4->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(
                                             *(ADAPTER_DISPLAY **)(v33 + 2696),
                                             v36) != 0;
      v38 = *(_QWORD *)(v33 + 2696);
      v39 = 0LL;
      v40 = *((_DWORD *)v31 + 4);
      v77 = v40;
      v41 = *(_QWORD *)(v38 + 88);
      if ( v41 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v81, *(_QWORD *)(v38 + 88));
        v42 = *(_QWORD *)(v41 + 88);
        v80 = 0LL;
        if ( v42 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v42 + 32));
          v43 = *(_QWORD *)(v41 + 88);
          LODWORD(v34) = v78[0];
        }
        else
        {
          v43 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v80, v43);
        if ( v80 )
        {
          v46 = (char **)(v80 + 96);
          while ( 1 )
          {
            v76 = -1;
            v47 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v46, v40, v39, &v76);
            v5 = v47;
            if ( v47 < 0 )
              break;
            if ( v76 == -1 )
            {
              auto_rc<DMMVIDPN const>::reset(&v80, 0LL);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v81 + 40), v54);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83, v55);
              goto LABEL_36;
            }
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v41 + 80) + 72LL));
            v50 = *(_QWORD *)(v41 + 80);
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v50, v76);
            if ( TargetById && *((_DWORD *)TargetById + 22) )
            {
              if ( v50 )
                ReferenceCounted::Release((ReferenceCounted *)(v50 + 64), v52);
            }
            else
            {
              if ( v50 )
                ReferenceCounted::Release((ReferenceCounted *)(v50 + 64), v52);
              v53 = v79;
              v75 = 0;
              if ( v26 && v26 != v25 )
              {
                LODWORD(v5) = RtlStringCchCopyW(v79, v26, L"^");
                if ( (_DWORD)v5 == -2147483643 )
                  LODWORD(v5) = -1073741789;
                if ( (int)v5 < 0 )
                  goto LABEL_56;
                --v26;
                ++v53;
              }
              LODWORD(v5) = DpiPersistence::AppendMonitorId(
                              (DpiPersistence *)v76,
                              v78,
                              (struct _LUID *)v41,
                              (struct VIDPN_MGR *)v26,
                              &v75,
                              v53);
              if ( (int)v5 < 0 )
                goto LABEL_56;
              v26 -= v75;
              v79 = &v53[v75];
            }
            v40 = v77;
            ++v39;
          }
          v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v49, v48);
          v72 = v77;
          v71[3] = v39;
          v71[4] = v72;
          v71[5] = v46;
          v71[6] = v5;
        }
        else
        {
          v70 = WdLogNewEntry5_WdError(v45, v44);
          *(_QWORD *)(v70 + 24) = (int)v78[1];
          *(_QWORD *)(v70 + 32) = (unsigned int)v34;
          WdLogEvent5_WdError(v70);
          LODWORD(v5) = -1071774884;
        }
LABEL_56:
        auto_rc<DMMVIDPN const>::reset(&v80, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v81 + 40), v73);
      }
      else
      {
        v69 = WdLogNewEntry5_WdError(v37, v36);
        *(_QWORD *)(v69 + 24) = (int)v78[1];
        *(_QWORD *)(v69 + 32) = (unsigned int)v34;
        WdLogEvent5_WdError(v69);
        LODWORD(v5) = -1071774923;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83, v68);
  }
  else
  {
LABEL_36:
    v56 = v25 - v26;
    *v82 = 2 * v56;
    if ( !(2 * v56) )
    {
      LODWORD(v5) = -1073741637;
      v74 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v74 + 24) = 416LL;
      WdLogEvent5_WdWarning(v74);
    }
  }
  return (unsigned int)v5;
}
