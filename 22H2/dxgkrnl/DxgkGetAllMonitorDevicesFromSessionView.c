/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C012DE8C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C012D8F0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000A170 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000A1C4 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     MonitorIsMonitorConnected @ 0x1C00E67DC (MonitorIsMonitorConnected.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C012E038 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C012F130 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012F308 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01303F0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130410 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C026A0F4 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        __int64 a2,
        bool *a3,
        _DWORD *a4,
        __int64 a5)
{
  __int64 v6; // rdi
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 LowPart; // rcx
  __int64 v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v25; // rbx
  bool v26; // al
  __int64 v27; // rcx
  bool v28; // cf
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int IsMonitorConnected; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  bool v54; // al
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v59; // r8d
  DXGADAPTERSOURCEHASH *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  DXGADAPTERSOURCEHASH *v65; // rcx
  char HashBitShift; // al
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v67; // edi
  __int64 v68; // rdx
  int HashBitMask; // eax
  _BYTE v70[4]; // [rsp+20h] [rbp-C1h] BYREF
  unsigned int v71; // [rsp+24h] [rbp-BDh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v72; // [rsp+28h] [rbp-B9h] BYREF
  int HashForAdapterAndSource; // [rsp+2Ch] [rbp-B5h]
  int v74; // [rsp+30h] [rbp-B1h]
  __int64 v75; // [rsp+38h] [rbp-A9h]
  DXGADAPTERSOURCEHASH *v76; // [rsp+40h] [rbp-A1h]
  SESSION_VIEW *v77; // [rsp+48h] [rbp-99h]
  _BYTE v78[144]; // [rsp+50h] [rbp-91h] BYREF

  v6 = (unsigned int)a2;
  v74 = a2;
  v75 = a5;
  v9 = 0LL;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 102);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v29 = WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v32) = -1073741811;
    *(_QWORD *)(v29 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v31, v30);
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    return (unsigned int)v32;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, a1, v6);
  v77 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
    v18[3] = v6;
    v18[4] = a1->HighPart;
    LowPart = a1->LowPart;
    v18[5] = LowPart;
    v18[6] = (unsigned int)PsGetCurrentProcessSessionId(LowPart, v20);
    WdLogEvent5_WdEvent(v18);
    *a3 = 1;
    *a4 = 0;
    return 0LL;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
    v36 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v36 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v36);
  }
  v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
  v26 = *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 && *a1 == v25;
  *a3 = v26;
  while ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( a1->LowPart != *(_DWORD *)(v27 + 316) || a1->HighPart != *(_DWORD *)(v27 + 320) )
      break;
LABEL_15:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v77, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
    {
      v28 = *a4 < (unsigned int)v9;
      *a4 = v9;
      return v28 ? 0x80000005 : 0;
    }
    LODWORD(v6) = v74;
  }
  v37 = *((_QWORD *)PrimaryDisplaySource + 1);
  v71 = 0;
  v72 = D3DKMDT_VOT_HD15;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v78, *(struct DXGADAPTER *const *)(v37 + 16), 0LL);
  v38 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v78, 0LL);
  v41 = v38;
  if ( v38 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v40, v39);
    v42[3] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
    v42[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
    v42[5] = v41;
LABEL_28:
    WdLogEvent5_WdEvent(v42);
LABEL_44:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v78, v39);
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 250LL) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v43 + 24) = 1201LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !v75 || (unsigned int)v9 >= *a4 )
  {
LABEL_43:
    v9 = (unsigned int)(v9 + 1);
    goto LABEL_44;
  }
  if ( DmmEnumClientVidPnPathTargetsFromSource(
         *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
         *((_DWORD *)PrimaryDisplaySource + 4),
         1uLL,
         &v71) < 0
    || v71 != -1 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v45, v44);
    *(_QWORD *)(v46 + 24) = 1219LL;
    WdLogEvent5_WdAssertion(v46);
  }
  v47 = DmmEnumClientVidPnPathTargetsFromSource(
          *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
          *((_DWORD *)PrimaryDisplaySource + 4),
          0LL,
          &v71);
  v32 = v47;
  if ( v47 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48);
LABEL_22:
    v34 = *((unsigned int *)PrimaryDisplaySource + 4);
    goto LABEL_23;
  }
  if ( v71 == -1 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v49, 0xFFFFFFFFLL);
    v32 = -1073741811LL;
    goto LABEL_22;
  }
  v50 = *((_QWORD *)PrimaryDisplaySource + 1);
  v70[0] = 0;
  IsMonitorConnected = MonitorIsMonitorConnected(*(_QWORD *)(v50 + 16), v71, 1u, v70);
  v32 = IsMonitorConnected;
  if ( IsMonitorConnected >= 0 )
  {
    if ( !v70[0] )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v53, v52);
      v42[3] = v71;
      v42[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
      v42[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
      v42[6] = v32;
      goto LABEL_28;
    }
    DmmGetVideoOutputTechnology(*(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL), v71, &v72, 0LL);
    v54 = IsInternalVideoOutput(v72);
    v55 = v75;
    v72 = D3DKMDT_VOT_HD15;
    *(_BYTE *)(v75 + 20 * v9 + 16) = v54;
    *(_DWORD *)(v55 + 20 * v9) = 536870913;
    Global = DXGGLOBAL::GetGlobal(v57, v56);
    v59 = *((_DWORD *)PrimaryDisplaySource + 4);
    v60 = (struct DXGGLOBAL *)((char *)Global + 1272);
    v61 = *((_QWORD *)PrimaryDisplaySource + 1);
    v76 = v60;
    HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                v60,
                                (const struct _LUID *)(*(_QWORD *)(v61 + 16) + 316LL),
                                v59,
                                (unsigned int *)&v72);
    if ( HashForAdapterAndSource >= 0 )
    {
      v65 = v76;
      *(_QWORD *)(v55 + 20 * v9 + 8) = v25;
      HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v65);
      v67 = v72 << HashBitShift;
      HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v76, v68);
      *(_DWORD *)(v75 + 20 * v9 + 4) = v67 + (v71 & ~HashBitMask);
    }
    else
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
      v64[3] = *((unsigned int *)PrimaryDisplaySource + 4);
      v64[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
      v64[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
      v64[6] = HashForAdapterAndSource;
      WdLogEvent5_WdError(v64);
      *(_QWORD *)(v55 + 20 * v9 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
      *(_DWORD *)(v55 + 20 * v9 + 4) = v71;
    }
    goto LABEL_43;
  }
  v33 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
  v34 = v71;
LABEL_23:
  v33[3] = v34;
  v33[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 320LL);
  v33[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 316LL);
  v33[6] = v32;
  WdLogEvent5_WdError(v33);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v78, v35);
  return (unsigned int)v32;
}
