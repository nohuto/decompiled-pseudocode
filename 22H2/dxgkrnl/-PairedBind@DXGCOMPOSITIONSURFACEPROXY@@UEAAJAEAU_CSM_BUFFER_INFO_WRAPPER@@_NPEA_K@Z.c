/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C028D820
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C02B73F0 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C02B7A50 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02B7E70 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct _LUID *a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGADAPTER *v15; // rbx
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _LUID v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  DXGSESSIONMGR *v43; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int HighPart; // edx
  __int64 i; // r8
  void *v50; // rax
  void *v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rdx
  unsigned int v67; // [rsp+44h] [rbp-BCh] BYREF
  struct DXGADAPTER *v68; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v69; // [rsp+50h] [rbp-B0h] BYREF
  char v70; // [rsp+58h] [rbp-A8h]
  _BYTE v71[144]; // [rsp+60h] [rbp-A0h] BYREF
  void *v72[32]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v72, 0, sizeof(v72));
  SessionDataForSpecifiedSession = 0LL;
  v67 = 0;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[19], (unsigned __int64 *)&v68);
  v15 = v11;
  if ( !v11 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = 1224LL;
LABEL_3:
    WdLogEvent5_WdWarning(v16);
    return 3221225485LL;
  }
  v68 = 0LL;
  DxgkpGetPairingAdapters(v11, 0LL, &v68, &v69, 0LL, 0LL, 0);
  DXGADAPTER::ReleaseReference(v15);
  v21 = v68;
  if ( !v68 )
  {
    v16 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v16 + 24) = 1245LL;
    goto LABEL_3;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v71, v68, 0LL);
  v22 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v71, 0LL);
  DXGADAPTER::ReleaseReference(v21);
  if ( (int)v22 >= 0 )
  {
    v28 = *(struct _LUID *)((char *)v21 + 4324);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v71);
    Current = DXGPROCESS::GetCurrent(v30, v29, v31, v32);
    if ( Current )
    {
      KeEnterCriticalRegion();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v69, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v69);
      if ( *((_DWORD *)Current + 106)
        && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
      {
        if ( !*((_BYTE *)Current + 488) )
        {
          LODWORD(v22) = -2147483611;
          v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
          *(_QWORD *)(v40 + 24) = -2147483611LL;
          WdLogEvent5_WdWarning(v40);
        }
        if ( (int)v22 >= 0 )
        {
          v43 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v38, v37) + 102);
          if ( v43 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v42, v41);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v43,
                                               CurrentProcessSessionId);
          }
          if ( !SessionDataForSpecifiedSession )
          {
            LODWORD(v22) = -1073741811;
            v45 = WdLogNewEntry5_WdError(v42, v41);
            *(_QWORD *)(v45 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v47, v46);
            *(_QWORD *)(v45 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v45);
          }
          if ( (int)v22 >= 0 )
          {
            if ( *((_DWORD *)this + 5) && *((_BYTE *)this + 24) )
            {
              HighPart = a2[17].HighPart;
              for ( i = 0LL; (unsigned int)i < HighPart; HighPart = a2[17].HighPart )
              {
                v50 = (void *)a2[3 * i + 18];
                a2[3 * i + 18] = 0LL;
                v72[i] = v50;
                a2[3 * i + 19] = v28;
                i = (unsigned int)(i + 1);
              }
              v51 = (void *)a2[113];
              a2[113] = 0LL;
              v72[HighPart] = v51;
              v52 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
                      SessionDataForSpecifiedSession,
                      HighPart + 1,
                      v72,
                      &v67);
              v22 = v52;
              if ( v52 < 0
                || (v56 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                            SessionDataForSpecifiedSession,
                            *((_DWORD *)this + 5),
                            a3,
                            (struct _CSM_BUFFER_INFO_WRAPPER *)a2,
                            v67,
                            a4),
                    v22 = v56,
                    v56 < 0) )
              {
                v57 = WdLogNewEntry5_WdWarning(v54, v53, v55);
                *(_QWORD *)(v57 + 24) = v22;
                WdLogEvent5_WdWarning(v57);
              }
              if ( v67 )
              {
                v58 = DXGSESSIONDATA::VailSendDestroyBundleObject(SessionDataForSpecifiedSession, v67);
                v61 = v58;
                if ( v58 < 0 )
                {
                  v62 = WdLogNewEntry5_WdError(v60, v59);
                  *(_QWORD *)(v62 + 24) = v61;
                  *(_QWORD *)(v62 + 32) = this;
                  WdLogEvent5_WdError(v62);
                }
              }
              if ( (int)v22 >= 0 )
              {
                *((_BYTE *)this + 25) = 1;
                v63 = *a4;
                ++*((_DWORD *)this + 10);
                *((_QWORD *)this + 4) = v63;
              }
            }
            else
            {
              v64 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
              LODWORD(v22) = -1073741823;
              v64[3] = -1073741823LL;
              v64[4] = *((unsigned int *)this + 5);
              v64[5] = *((unsigned __int8 *)this + 24);
              v64[6] = this;
              WdLogEvent5_WdError(v64);
            }
          }
        }
      }
      KeLeaveCriticalRegion();
      if ( v70 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v69, v65);
      KeLeaveCriticalRegion();
    }
    else
    {
      v36 = WdLogNewEntry5_WdError(v34, v33);
      *(_QWORD *)(v36 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v36);
      LODWORD(v22) = -1073741811;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v21;
    *(_QWORD *)(v26 + 32) = v22;
    WdLogEvent5_WdWarning(v26);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71, v27);
  return (unsigned int)v22;
}
