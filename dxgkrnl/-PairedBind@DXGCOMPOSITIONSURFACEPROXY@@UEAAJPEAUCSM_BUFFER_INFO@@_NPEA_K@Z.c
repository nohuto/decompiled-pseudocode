/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02DD6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EC0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1C035E004 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C035E514 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C035E9B0 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct _LUID *a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  DXGADAPTER *v9; // rbx
  struct DXGADAPTER *v10; // rbx
  unsigned int v11; // ebx
  DXGCOMPOSITIONSURFACEPROXY *v12; // rdi
  DXGCOMPOSITIONSURFACEPROXY *v13; // r8
  struct DXGADAPTER *v14; // rdx
  struct _LUID v15; // rbx
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v25; // r15
  __int64 v26; // rax
  unsigned int HighPart; // edx
  unsigned int i; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // rax
  void *v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rbx
  unsigned __int64 v42; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // eax
  char v51; // [rsp+54h] [rbp-ACh] BYREF
  char v52; // [rsp+55h] [rbp-ABh]
  unsigned int v53; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v54; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  char v56; // [rsp+70h] [rbp-90h]
  _BYTE v57[144]; // [rsp+80h] [rbp-80h] BYREF
  void *v58[32]; // [rsp+110h] [rbp+10h] BYREF

  memset(v58, 0, sizeof(v58));
  v53 = 0;
  v52 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v51);
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[22], (unsigned __int64 *)&v54);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(3LL, 1499LL);
LABEL_5:
    v11 = -1073741811;
    goto LABEL_37;
  }
  v54 = 0LL;
  DxgkpGetPairingAdapters(v8, 0, &v54, &v55, 0LL, 0LL, 0);
  DXGADAPTER::ReleaseReference(v9);
  v10 = v54;
  if ( !v54 )
  {
    WdLogSingleEntry1(3LL, 1520LL);
    goto LABEL_5;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, v54, 0LL);
  v12 = (DXGCOMPOSITIONSURFACEPROXY *)(int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57, 0LL);
  DXGADAPTER::ReleaseReference(v10);
  if ( (int)v12 < 0 )
  {
    v13 = v12;
    v14 = v10;
LABEL_35:
    WdLogSingleEntry2(3LL, v14, v13);
    goto LABEL_36;
  }
  v15 = *(struct _LUID *)((char *)v10 + 4572);
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v57);
  Current = DXGPROCESS::GetCurrent(v16);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v55, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v55);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v20
          && (v23 = PsGetCurrentProcessSessionId(v19, v18, v21, v22),
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v20, v23),
              v22 = 0LL,
              (v25 = SessionDataForSpecifiedSession) != 0LL) )
        {
          v26 = *((unsigned int *)this + 5);
          if ( (_DWORD)v26 && *((_BYTE *)this + 40) )
          {
            HighPart = a2[20].HighPart;
            for ( i = 0; i < HighPart; v58[v30] = v31 )
            {
              v29 = 4LL * i;
              v30 = i++;
              v31 = (void *)a2[v29 + 21];
              a2[v29 + 21] = 0LL;
              a2[v29 + 22] = v15;
              HighPart = a2[20].HighPart;
            }
            v32 = (void *)a2[147];
            a2[147] = 0LL;
            v58[HighPart] = v32;
            v33 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(v25, HighPart + 1, v58, &v53);
            LODWORD(v12) = v33;
            if ( v33 >= 0 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
              v38[3] = *((unsigned int *)this + 5);
              v38[4] = this;
              v38[5] = a3;
              v38[6] = a2[1];
              v39 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                      v25,
                      *((_DWORD *)this + 5),
                      a3,
                      (const struct CSM_BUFFER_INFO *)a2,
                      v53,
                      a4);
              LODWORD(v12) = v39;
              if ( v39 < 0 )
                WdLogSingleEntry5(3LL, *((unsigned int *)this + 5), this, a3, *(_QWORD *)&a2[1], v39);
            }
            else
            {
              WdLogSingleEntry2(3LL, v33, this);
            }
            if ( v53 )
            {
              v40 = DXGSESSIONDATA::VailSendDestroyBundleObject(v25, v53);
              if ( v40 < 0 )
              {
                v41 = v40;
                WdLogSingleEntry2(2LL, v40, this);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed SendDestroyBundleObject Returning 0x%I64x",
                  v41,
                  (__int64)this,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            if ( (int)v12 >= 0 )
            {
              *((_BYTE *)this + 41) = 1;
              v42 = *a4;
              ++*((_DWORD *)this + 14);
              *((_QWORD *)this + 6) = v42;
            }
          }
          else
          {
            LODWORD(v12) = -1073741823;
            WdLogSingleEntry4(2LL, -1073741823LL, v26, *((unsigned __int8 *)this + 40), this);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"PairedBind is called without promote Returning  0x%I64x",
              -1073741823LL,
              *((unsigned int *)this + 5),
              *((unsigned __int8 *)this + 40),
              (__int64)this,
              0LL);
          }
        }
        else
        {
          LODWORD(v12) = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18, v21, v22);
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          v48 = PsGetCurrentProcessSessionId(v45, v44, v46, v47);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v48,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        LODWORD(v12) = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v56 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v55);
    if ( (int)v12 >= 0 )
      goto LABEL_36;
    v14 = (struct DXGADAPTER *)(int)v12;
    v13 = this;
    goto LABEL_35;
  }
  WdLogSingleEntry1(2LL, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid process context. Returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v12) = -1073741811;
LABEL_36:
  v11 = (unsigned int)v12;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
LABEL_37:
  if ( v52 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v51);
  return v11;
}
