/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001008 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001064 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00035F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000469C (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00046DC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0015854 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0040BB0 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0162810 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0163330 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0163594 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C0164B54 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164DD8 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0176CA0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C01787D0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01B021C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8330 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8B78 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01BE97C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01C167C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01C36FC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CE1EC (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C02DBCD4 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03128E4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1C03CEB9C (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1)
{
  char v2; // r12
  int PairingAdapters; // eax
  __int64 v4; // rdi
  DXGADAPTER *v5; // rbx
  DXGSESSIONMGR *v6; // rsi
  unsigned int v7; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  int v9; // eax
  ADAPTER_DISPLAY *v10; // r14
  struct SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v12; // rsi
  __int64 v13; // rax
  struct DISPLAY_SOURCE *v14; // rbx
  ADAPTER_DISPLAY *v15; // rax
  struct DXGDEVICE *v16; // rsi
  __int64 v17; // rbx
  struct DXGGLOBAL *Global; // rax
  PVOID v19; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  struct DXGDEVICE *v21; // r14
  __int64 v22; // r9
  __int64 v23; // r9
  int v24; // eax
  D3DKMT_HANDLE v25; // ecx
  DXGDEVICE *v26; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // esi
  unsigned int v31; // r14d
  ADAPTER_DISPLAY *v32; // r13
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v33; // r12d
  __int64 v34; // rdi
  struct tagRECT *v35; // rbx
  int v36; // eax
  struct tagRECT *v37; // r8
  char v38; // r14
  char *v39; // r14
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v44; // eax
  struct tagRECT v45; // xmm1
  int v46; // eax
  unsigned int v47; // ebx
  struct DXGCONTEXT *v48; // rsi
  struct DXGDEVICE *v49; // rcx
  struct DXGGLOBAL *v50; // rax
  unsigned int v51; // ebx
  int v53; // eax
  int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned __int64 v57; // rax
  const wchar_t *v58; // r9
  __int64 v59; // r9
  LONG right; // ecx
  unsigned int v61; // edx
  __int64 v62; // rcx
  int v63; // eax
  unsigned int v64; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v65; // r8d
  int CddShadowPitch; // eax
  __int64 v67; // rdx
  ADAPTER_DISPLAY *v68; // rbx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdx
  int v72; // eax
  const wchar_t *v73; // r9
  LONG v74; // eax
  unsigned int v75; // r13d
  unsigned int v76; // r12d
  ADAPTER_DISPLAY *v77; // r14
  int v78; // edi
  unsigned __int8 *v79; // rsi
  int v80; // ebx
  int v81; // eax
  __int64 v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rsi
  struct DXGDEVICE *v86; // rbx
  __int64 v87; // rax
  __int64 v88; // r9
  char *v89; // rdx
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // r9
  char *v93; // rdx
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // r9
  char *v97; // rdx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v99; // eax
  __int64 v100; // [rsp+30h] [rbp-D8h]
  __int64 v101; // [rsp+30h] [rbp-D8h]
  __int64 v102; // [rsp+38h] [rbp-D0h]
  __int64 hAllocation; // [rsp+38h] [rbp-D0h]
  struct tagRECT *v104; // [rsp+40h] [rbp-C8h]
  struct tagRECT *v105; // [rsp+40h] [rbp-C8h]
  char v106; // [rsp+58h] [rbp-B0h]
  char v107; // [rsp+59h] [rbp-AFh]
  char v108; // [rsp+5Ah] [rbp-AEh] BYREF
  unsigned int v109; // [rsp+5Ch] [rbp-ACh] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v110[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGCONTEXT *v111; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v112[2]; // [rsp+70h] [rbp-98h]
  struct tagRECT *v113; // [rsp+78h] [rbp-90h]
  struct DXGDEVICE *v114; // [rsp+80h] [rbp-88h]
  ADAPTER_DISPLAY *v115; // [rsp+88h] [rbp-80h]
  struct DXGDEVICE *v116; // [rsp+90h] [rbp-78h]
  unsigned int v117; // [rsp+98h] [rbp-70h]
  struct DXGHWQUEUE *v118; // [rsp+A0h] [rbp-68h]
  int v119; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v120; // [rsp+B0h] [rbp-58h]
  struct DXGHWQUEUE *v121; // [rsp+B8h] [rbp-50h]
  PVOID Entry; // [rsp+C0h] [rbp-48h]
  int v123; // [rsp+C8h] [rbp-40h]
  DXGADAPTER *v124; // [rsp+D0h] [rbp-38h] BYREF
  struct DXGDEVICE *v125; // [rsp+D8h] [rbp-30h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+E0h] [rbp-28h]
  _D3DKMT_UNLOCK v127; // [rsp+E8h] [rbp-20h] BYREF
  _D3DKMT_LOCK v128; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v129[8]; // [rsp+128h] [rbp+20h] BYREF
  char v130[8]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v131; // [rsp+170h] [rbp+68h]
  char v132; // [rsp+178h] [rbp+70h]
  SESSION_VIEW *v133; // [rsp+180h] [rbp+78h]
  struct _LUID v134; // [rsp+188h] [rbp+80h] BYREF
  char v135[8]; // [rsp+190h] [rbp+88h] BYREF
  __int64 v136; // [rsp+198h] [rbp+90h]
  char v137; // [rsp+1A0h] [rbp+98h]
  char v138[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v139; // [rsp+1B0h] [rbp+A8h]
  char v140; // [rsp+1B8h] [rbp+B0h]
  char v141[8]; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v142; // [rsp+1C8h] [rbp+C0h]
  char v143; // [rsp+1D0h] [rbp+C8h]
  _QWORD v144[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v145[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v146[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v147[16]; // [rsp+208h] [rbp+100h] BYREF
  unsigned __int64 v148; // [rsp+218h] [rbp+110h] BYREF
  _QWORD v149[7]; // [rsp+220h] [rbp+118h] BYREF
  struct tagRECT v150; // [rsp+258h] [rbp+150h] BYREF
  struct tagRECT v151; // [rsp+268h] [rbp+160h] BYREF
  char v152[8]; // [rsp+278h] [rbp+170h] BYREF
  char v153[64]; // [rsp+280h] [rbp+178h] BYREF
  char v154[88]; // [rsp+2C0h] [rbp+1B8h] BYREF
  char v155[8]; // [rsp+318h] [rbp+210h] BYREF
  char v156[64]; // [rsp+320h] [rbp+218h] BYREF
  char v157[88]; // [rsp+360h] [rbp+258h] BYREF
  char v158[8]; // [rsp+3B8h] [rbp+2B0h] BYREF
  char v159[64]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v160[88]; // [rsp+400h] [rbp+2F8h] BYREF
  char v161[8]; // [rsp+458h] [rbp+350h] BYREF
  char v162[64]; // [rsp+460h] [rbp+358h] BYREF
  char v163[88]; // [rsp+4A0h] [rbp+398h] BYREF
  _BYTE v164[64]; // [rsp+4F8h] [rbp+3F0h] BYREF

  v124 = 0LL;
  v2 = 0;
  v107 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCddPresentOnScreen receives NULL pPresentOnScreen, returning 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 > 3u )
  {
    WdLogSingleEntry2(4LL, *(int *)a1, -1073741811LL);
    return 3221225485LL;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *((struct DXGADAPTER **)a1 + 1),
                      *((_DWORD *)a1 + 4),
                      0LL,
                      0LL,
                      &v124,
                      &v148,
                      0);
  v4 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, *((_QWORD *)a1 + 1), *((unsigned int *)a1 + 4), PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound display adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddPresentOnScree"
                "n (ntStatus = 0x%I64x).",
      *((_QWORD *)a1 + 1),
      *((unsigned int *)a1 + 4),
      v4,
      0LL,
      0LL);
    return (unsigned int)v4;
  }
  v5 = v124;
  if ( !v124 )
  {
    WdLogSingleEntry1(1LL, 1006LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1006LL, 0LL, 0LL, 0LL, 0LL);
  }
  v134 = *(struct _LUID *)((char *)v5 + 404);
  DXGADAPTER::ReleaseReference(v5);
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v6
    || (v7 = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, v7)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v99 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v99,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v108 = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v108, 0);
  v10 = (ADAPTER_DISPLAY *)v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      (__int64)v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              &v134,
                              *((_DWORD *)a1 + 4));
    v133 = SessionViewFromSource;
    v12 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      if ( *((_DWORD *)a1 + 8) == *((_DWORD *)SessionViewFromSource + 8) - *((_DWORD *)SessionViewFromSource + 6)
        && *((_DWORD *)a1 + 9) == *((_DWORD *)SessionViewFromSource + 9) - *((_DWORD *)SessionViewFromSource + 7) )
      {
        v13 = *((unsigned int *)a1 + 19);
        if ( (unsigned int)v13 > 4 )
        {
          v57 = 16 * v13;
          if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
            v57 = -1LL;
          v113 = (struct tagRECT *)operator new[](v57, 0x4B677844u, 256LL);
          if ( !v113 )
          {
            v51 = -1073741801;
            WdLogSingleEntry2(6LL, *((unsigned int *)a1 + 19), -1073741801LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate buffer for destination rectangle list for 0x%I64x RECTs, returning 0x%I64x.",
              *((unsigned int *)a1 + 19),
              -1073741801LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_66;
          }
        }
        else
        {
          v113 = (struct tagRECT *)v164;
        }
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v12);
        v14 = PrimaryDisplaySource;
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v14 + 1);
            v111 = 0LL;
            v116 = 0LL;
            v150 = 0LL;
            v121 = 0LL;
            memset(&v128, 0, sizeof(v128));
            v109 = 0;
            v110[0] = D3DKMDT_VPPR_UNINITIALIZED;
            v16 = (struct DXGDEVICE *)*((_QWORD *)v15 + 2);
            v106 = 0;
            v115 = v15;
            v125 = v16;
            v124 = v16;
            v127 = 0LL;
            if ( !v16 )
            {
              WdLogSingleEntry1(1LL, 1104LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter != NULL",
                1104LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( !*((_QWORD *)v16 + 365) )
            {
              WdLogSingleEntry1(1LL, 1105LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
                1105LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v17 = *((unsigned int *)v14 + 4);
            v112[0] = v17;
            Global = DXGGLOBAL::GetGlobal();
            v19 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1232));
            Entry = v19;
            if ( !v19 )
            {
              v51 = -1073741801;
              goto LABEL_66;
            }
            memset(v19, 0, 0x5E0uLL);
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                     (struct _LUID *)((char *)v16 + 404),
                                                     0);
            v10 = (ADAPTER_DISPLAY *)CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession >= 0 )
              break;
            WdLogSingleEntry2(2LL, v16, CddDeviceAndContextForCurrentSession);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get CDD device and context on adapter 0x%I64x for current session (Status = 0x%I64x).",
              (__int64)v16,
              (__int64)v10,
              0LL,
              0LL,
              0LL);
LABEL_60:
            v50 = DXGGLOBAL::GetGlobal();
            ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v50 + 1232), Entry);
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v133, PrimaryDisplaySource);
            v14 = PrimaryDisplaySource;
            if ( !PrimaryDisplaySource )
            {
              v2 = v107;
              goto LABEL_62;
            }
          }
          v21 = v116;
          v114 = v116;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
            (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v147,
            v116);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v149,
            &v111,
            1u,
            v22,
            1);
          v131 = *(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL);
          v132 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, (__int64)v21, 1, v23, 0);
          v118 = v121;
          if ( !v149[0] )
          {
            LODWORD(v10) = -1073741801;
            WdLogSingleEntry1(6LL, -1073741801LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Out of memory - could not initialize context array lock exclusive, returning 0x%I64x.",
              -1073741801LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_52;
          }
          v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v152, 0LL);
          v10 = (ADAPTER_DISPLAY *)v24;
          if ( v24 < 0 )
          {
            v16 = v114;
            WdLogSingleEntry2(2LL, v114, v24);
            v58 = L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).";
            v104 = 0LL;
            v102 = 0LL;
            v100 = (__int64)v10;
            goto LABEL_88;
          }
          v10 = v115;
          ADAPTER_DISPLAY::GetCddAllocationHandles(v115, v17, &v109, (unsigned int *)v110);
          if ( v109 )
          {
            v25 = v110[0];
            if ( v110[0] )
            {
LABEL_25:
              v26 = v114;
              v127.NumAllocations = 1;
              v128.hDevice = *((_DWORD *)v114 + 117);
              v128.hAllocation = v25;
              v127.hDevice = *((_DWORD *)v114 + 117);
              v127.phAllocations = &v128.hAllocation;
              ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v115, v17);
              v120 = v17;
              v150 = *(struct tagRECT *)(4000 * v17 + *((_QWORD *)v115 + 16) + 688);
              if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v115, (unsigned int)v17, 1LL) - 2) & 0xFFFFFFFD) == 0 )
              {
                right = v150.right;
                v150.right = v150.bottom;
                v150.bottom = right;
              }
              CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v115, (unsigned int)v17, 0LL);
              v28 = *(int *)a1;
              v110[1] = CurrentOrientation;
              if ( (_DWORD)v28 == 1 )
              {
                if ( !*((_QWORD *)v16 + 366) && ADAPTER_DISPLAY::IsIdenticalMode(v115, (unsigned int)v17) )
                {
                  v37 = v113;
                  v61 = 0;
                  if ( !*((_DWORD *)a1 + 19) )
                  {
                    v38 = 0;
LABEL_36:
                    if ( !*((_QWORD *)v16 + 366) )
                    {
                      memset(v129, 0, sizeof(v129));
                      LODWORD(v129[0]) = v17;
                      LODWORD(v129[2]) = 4;
                      if ( v38 )
                      {
                        v129[1] = v128.pData;
                        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v115, v17);
                      }
                      else
                      {
                        v129[1] = *((_QWORD *)a1 + 3);
                        CddShadowPitch = *((_DWORD *)a1 + 10);
                      }
                      HIDWORD(v129[2]) = CddShadowPitch;
                      v67 = (unsigned int)v17;
                      LODWORD(v129[3]) = 0;
                      v68 = v115;
                      v69 = ADAPTER_DISPLAY::GetCurrentOrientation(v115, v67, 1LL);
                      v129[4] = 0LL;
                      v129[3] = (v69 != 1) | (unsigned __int64)(v129[3] & 0xFFFFFFFE);
                      LODWORD(v129[5]) = *((_DWORD *)a1 + 19);
                      v129[6] = v113;
                      v70 = *((_QWORD *)v68 + 56);
                      if ( v70 )
                      {
                        if ( LODWORD(v129[0]) < *(_DWORD *)v70 && (v71 = *(_QWORD *)(v70 + 8)) != 0 )
                          LODWORD(v10) = BLTQUEUE::PresentDisplayOnly(v71 + 2920LL * LODWORD(v129[0]), v129, 0LL, 1LL);
                        else
                          LODWORD(v10) = -1073741811;
                        if ( (int)v10 >= 0 )
                        {
LABEL_45:
                          if ( *(_DWORD *)a1 != 2 )
                          {
LABEL_46:
                            if ( DXGADAPTER::UsingSetTimingsFromVidPn(v16) )
                            {
                              v47 = v112[0];
                              if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                                    *((ADAPTER_DISPLAY **)v16 + 365),
                                                    v112[0]) )
                              {
                                if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v16 + 365), v47) )
                                {
                                  if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v16 + 365), v47) )
                                  {
                                    v54 = ADAPTER_DISPLAY::PresentCddPrimary(
                                            *((PERESOURCE ***)v16 + 365),
                                            v111,
                                            v47,
                                            (struct COREDEVICEACCESS *)v152);
                                    if ( v54 < 0 )
                                    {
                                      v82 = v54;
                                      WdLogSingleEntry3(2LL, v111, v54, 1587LL);
                                      DxgkLogInternalTriageEvent(
                                        0LL,
                                        0x40000,
                                        -1,
                                        (__int64)L"PresentFromCdd failed to present the newly created Cdd Primary (Status = 0x%I64x).",
                                        (__int64)v111,
                                        v82,
                                        1587LL,
                                        0LL,
                                        0LL);
                                    }
                                  }
                                }
                              }
                            }
                            v107 = 1;
                            goto LABEL_51;
                          }
                          v72 = DXGDEVICE::Lock(v114, &v128, (struct COREDEVICEACCESS *)v152);
                          v10 = (ADAPTER_DISPLAY *)v72;
                          v123 = v72;
                          if ( v72 >= 0 )
                          {
                            v74 = *((_DWORD *)a1 + 8);
                            v151.left = 0;
                            v151.top = 0;
                            v151.right = v74;
                            v151.bottom = *((_DWORD *)a1 + 9);
                            v106 = 1;
                            if ( v110[1] != D3DKMDT_VPPR_IDENTITY )
                            {
                              if ( v110[1] == D3DKMDT_VPPR_ROTATE90 )
                              {
                                v110[1] = D3DKMDT_VPPR_ROTATE270;
                              }
                              else if ( v110[1] == D3DKMDT_VPPR_ROTATE270 )
                              {
                                v110[1] = D3DKMDT_VPPR_ROTATE90;
                              }
                            }
                            v117 = 0;
                            if ( *((_DWORD *)a1 + 19) )
                            {
                              v75 = v112[0];
                              v76 = v117;
                              v77 = v115;
                              do
                              {
                                v78 = *((_DWORD *)a1 + 10);
                                v79 = (unsigned __int8 *)*((_QWORD *)a1 + 3);
                                v80 = ADAPTER_DISPLAY::GetCddShadowPitch(v77, v75);
                                v81 = ADAPTER_DISPLAY::GetCddShadowPitch(v77, v75);
                                DxgkpBlitA8R8R8G8(
                                  (unsigned __int8 *)v128.pData + 4 * v150.left + (unsigned int)(v150.top * v81),
                                  v150.right - v150.left,
                                  v150.bottom - v150.top,
                                  v80,
                                  v110[1],
                                  v79,
                                  v78,
                                  &v151,
                                  &v113[v76],
                                  &v113[v76]);
                                ++v76;
                              }
                              while ( v76 < *((_DWORD *)a1 + 19) );
                              LODWORD(v10) = v123;
                              v16 = v125;
                            }
                            goto LABEL_46;
                          }
                          WdLogSingleEntry4(2LL, v16, v120, v128.hAllocation, v72);
                          v73 = L"Failed to lock CDD shadow allocation on Adapter 0x%I64x VidPn source 0x%I64x (hShadow = "
                                 "0x%I64x) (Status = 0x%I64x).";
                          v105 = (struct tagRECT *)v10;
                          hAllocation = v128.hAllocation;
                          v101 = v120;
LABEL_132:
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)v73,
                            (__int64)v16,
                            v101,
                            hAllocation,
                            (__int64)v105,
                            0LL);
LABEL_51:
                          if ( !v106 )
                            goto LABEL_52;
                          DXGDEVICE::Unlock(v114, &v127, 0);
                          if ( (int)v10 >= 0 )
                            goto LABEL_52;
                          v83 = v120;
                          WdLogSingleEntry3(2LL, v16, v120, (int)v10);
                          v58 = L"Failed to unlock the CDD shadow allocation on Adapter 0x%I64x VidPnSource 0x%I64x (Status = 0x%I64x).";
                          v104 = 0LL;
                          v102 = (int)v10;
                          v100 = v83;
                          goto LABEL_88;
                        }
                      }
                      else
                      {
                        LODWORD(v10) = -1073741811;
                      }
                      WdLogSingleEntry3(2LL, v16, (int)v10, 1395LL);
                      v73 = L"PresentDisplayOnlyCdd on Adapter 0x%I64x failed (Status = 0x%I64x).";
                      v105 = 0LL;
                      hAllocation = 1395LL;
                      v101 = (int)v10;
                      goto LABEL_132;
                    }
                    v119 = 0;
                    v39 = (char *)Entry;
                    if ( v118 )
                    {
                      v119 = *((_DWORD *)v118 + 6);
                      *(_QWORD *)Entry = &v119;
                    }
                    v40 = *((_DWORD *)v111 + 6);
                    *((_QWORD *)v39 + 2) = 0LL;
                    *((_DWORD *)v39 + 2) = v40;
                    v41 = *((_DWORD *)a1 + 19);
                    *((_DWORD *)v39 + 25) = 0;
                    *((_DWORD *)v39 + 18) = v41;
                    v42 = *((_DWORD *)v39 + 24);
                    *((_QWORD *)v39 + 10) = v37;
                    v43 = *(_DWORD *)a1;
                    if ( !*(_DWORD *)a1 )
                    {
                      *((_DWORD *)v39 + 24) = v42 | 2;
                      v63 = *((_DWORD *)a1 + 5);
                      *((_DWORD *)v39 + 7) = 0;
                      *((_DWORD *)v39 + 9) = v63;
                      *((_DWORD *)v39 + 8) = v109;
                      *(struct tagRECT *)(v39 + 40) = v150;
LABEL_44:
                      v46 = DXGCONTEXT::PresentFromCdd(
                              v111,
                              (struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *)v39,
                              v17,
                              (struct COREDEVICEACCESS *)v152,
                              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v130,
                              &v111);
                      v10 = (ADAPTER_DISPLAY *)v46;
                      if ( v46 < 0 )
                      {
                        if ( v46 == -1071775482 )
                        {
                          WdLogSingleEntry3(4LL, v111, -1071775482LL, 1488LL);
                        }
                        else if ( v46 != -1071774910 )
                        {
                          WdLogSingleEntry3(2LL, v111, v46, 1495LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"PresentFromCdd on DxgContext 0x%I64x failed (Status = 0x%I64x).",
                            (__int64)v111,
                            (__int64)v10,
                            1495LL,
                            0LL,
                            0LL);
                        }
                        goto LABEL_51;
                      }
                      goto LABEL_45;
                    }
                    *((_DWORD *)v39 + 24) = v42 | 1;
                    if ( v43 == 1 )
                    {
                      *((_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v39 + 7) = v110[0];
                      v44 = v109;
                    }
                    else
                    {
                      v64 = v109;
                      *((_DWORD *)v39 + 7) = v109;
                      if ( v43 != 2 )
                      {
                        v65 = v110[1];
                        *((_DWORD *)v39 + 8) = v64;
                        DxgkpConvertRects(
                          *((_DWORD *)a1 + 8),
                          *((_DWORD *)a1 + 9),
                          v65,
                          &v150,
                          2u,
                          (struct tagRECT *)((char *)a1 + 44),
                          (struct tagRECT *)((char *)a1 + 44));
                        LODWORD(v17) = v112[0];
                        *(_OWORD *)(v39 + 56) = *(_OWORD *)((char *)a1 + 44);
                        v45 = *(struct tagRECT *)((char *)a1 + 60);
                        goto LABEL_43;
                      }
                      v44 = v110[0];
                    }
                    *((_DWORD *)v39 + 8) = v44;
                    *(struct tagRECT *)(v39 + 56) = v150;
                    v45 = v150;
LABEL_43:
                    *(struct tagRECT *)(v39 + 40) = v45;
                    goto LABEL_44;
                  }
                  do
                  {
                    v62 = v61++;
                    v37[v62] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v62);
                  }
                  while ( v61 < *((_DWORD *)a1 + 19) );
LABEL_73:
                  v38 = v106;
                  goto LABEL_36;
                }
                v29 = DXGDEVICE::Lock(v26, &v128, (struct COREDEVICEACCESS *)v152);
                v10 = (ADAPTER_DISPLAY *)v29;
                if ( v29 >= 0 )
                {
                  v117 = 0;
                  v106 = 1;
                  if ( *((_DWORD *)a1 + 19) )
                  {
                    v30 = v117;
                    v31 = v17;
                    v32 = v115;
                    v33 = v110[1];
                    do
                    {
                      v34 = v30;
                      v35 = (struct tagRECT *)(v34 * 16 + *((_QWORD *)a1 + 10));
                      v36 = ADAPTER_DISPLAY::GetCddShadowPitch(v32, v31);
                      DxgkpBlitA8R8R8G8(
                        *((unsigned __int8 **)a1 + 3),
                        *((_DWORD *)a1 + 8),
                        *((_DWORD *)a1 + 9),
                        *((_DWORD *)a1 + 10),
                        v33,
                        (unsigned __int8 *)v128.pData,
                        v36,
                        &v150,
                        v35,
                        &v113[v34]);
                      ++v30;
                    }
                    while ( v30 < *((_DWORD *)a1 + 19) );
                    v16 = v125;
                    LODWORD(v17) = v31;
                  }
                  if ( *((_QWORD *)v16 + 366) )
                  {
                    DXGDEVICE::Unlock(v114, &v127, 0);
                    v37 = v113;
                    v38 = 0;
                    v106 = 0;
                    goto LABEL_36;
                  }
                  goto LABEL_72;
                }
                WdLogSingleEntry4(2LL, v16, v120, v128.hAllocation, v29);
                v58 = L"Failed to lock CDD shadow allocation on Adapter 0x%I64x VidPn source 0x%I64x (hShadow = 0x%I64x) ("
                       "Status = 0x%I64x).";
                v104 = (struct tagRECT *)v10;
                v102 = v128.hAllocation;
                v100 = v120;
              }
              else
              {
                if ( *((_QWORD *)v16 + 366) )
                {
                  DxgkpConvertRects(
                    *((_DWORD *)a1 + 8),
                    *((_DWORD *)a1 + 9),
                    CurrentOrientation,
                    &v150,
                    *((_DWORD *)a1 + 19),
                    *((struct tagRECT **)a1 + 10),
                    v113);
LABEL_72:
                  v37 = v113;
                  goto LABEL_73;
                }
                LODWORD(v10) = -1073741637;
                WdLogSingleEntry3(2LL, v16, v28, -1073741637LL);
                v58 = L"Display only adapter 0x%I64x does not support PresentOnScreen operation 0x%I64x, returning 0x%I64x.";
                v104 = 0LL;
                v102 = -1073741637LL;
                v100 = *(int *)a1;
              }
LABEL_88:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v58, (__int64)v16, v100, v102, (__int64)v104, 0LL);
LABEL_52:
              COREACCESS::~COREACCESS((COREACCESS *)v154);
              COREACCESS::~COREACCESS((COREACCESS *)v153);
              if ( v132 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v149);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v147);
              if ( v118 )
              {
                v84 = _InterlockedDecrement64((volatile signed __int64 *)v118 + 13);
                if ( v84 >= 0 )
                {
                  if ( !v84 )
                  {
                    v85 = *((_QWORD *)v121 + 2);
                    v86 = *(struct DXGDEVICE **)(v85 + 16);
                    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v144,
                      v86);
                    v87 = *((_QWORD *)v86 + 2);
                    v143 = 0;
                    v142 = *(_QWORD *)(v87 + 16);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v141);
                    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v155, (__int64)v86, 2, v88, 0);
                    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v155, v89);
                    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v86 + 2) + 16LL) + 200LL) != 4 )
                      DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v85, v121, (struct COREDEVICEACCESS *)v155);
                    COREACCESS::~COREACCESS((COREACCESS *)v157);
                    COREACCESS::~COREACCESS((COREACCESS *)v156);
                    if ( v143 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v141);
                    if ( v144[0] )
                      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v144);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      v90 = *(_QWORD *)(v85 + 16);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v145,
                        (struct DXGDEVICE *)v90);
                      v91 = *(_QWORD *)(v85 + 16);
                      v137 = 0;
                      v136 = *(_QWORD *)(*(_QWORD *)(v91 + 16) + 16LL);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v135);
                      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v158, v90, 2, v92, 0);
                      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v158, v93);
                      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 16) + 16LL) + 200LL) != 4 )
                        DXGDEVICE::DestroyContext(
                          (DXGDEVICE *)v90,
                          (struct DXGCONTEXT *)v85,
                          (struct COREDEVICEACCESS *)v158);
                      COREACCESS::~COREACCESS((COREACCESS *)v160);
                      COREACCESS::~COREACCESS((COREACCESS *)v159);
                      if ( v137 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v135);
                      if ( v145[0] )
                        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v145);
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v90 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v90 + 16), (struct DXGDEVICE *)v90);
                    }
                  }
                }
                else
                {
                  WdLogSingleEntry1(1LL, 141LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"NewReferenceCount >= 0",
                    141LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v114 = v116;
              }
              v48 = v111;
              if ( v111 )
              {
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v111 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v94 = *((_QWORD *)v48 + 2);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v146,
                    (struct DXGDEVICE *)v94);
                  v95 = *((_QWORD *)v48 + 2);
                  v140 = 0;
                  v139 = *(_QWORD *)(*(_QWORD *)(v95 + 16) + 16LL);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, v94, 2, v96, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v161, v97);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v94 + 16) + 16LL) + 200LL) != 4 )
                    DXGDEVICE::DestroyContext((DXGDEVICE *)v94, v48, (struct COREDEVICEACCESS *)v161);
                  COREACCESS::~COREACCESS((COREACCESS *)v163);
                  COREACCESS::~COREACCESS((COREACCESS *)v162);
                  if ( v140 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
                  if ( v146[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v146);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v94 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v94 + 16), (struct DXGDEVICE *)v94);
                }
                v49 = v116;
              }
              else
              {
                v49 = v114;
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v116 + 2), v116);
              goto LABEL_60;
            }
          }
          v53 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                  v10,
                  v114,
                  v17,
                  &v109,
                  (unsigned int *)v110,
                  (struct COREDEVICEACCESS *)v152);
          LODWORD(v10) = v53;
          if ( v53 == -1073741637 )
          {
            LODWORD(v10) = -1071775482;
            v59 = -1071775482LL;
          }
          else
          {
            if ( v53 >= 0 )
            {
              v25 = v110[0];
              goto LABEL_25;
            }
            v59 = v53;
          }
          WdLogSingleEntry3(4LL, v16, v17, v59);
          goto LABEL_52;
        }
LABEL_62:
        if ( v113 != (struct tagRECT *)v164 )
          operator delete(v113);
        v51 = 0;
        if ( !v2 )
          v51 = (unsigned int)v10;
        goto LABEL_66;
      }
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified shadow surface size dose not match the virtual mode size in session view, returning 0x%I64x.",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v55 = PsGetCurrentProcessSessionId();
      WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), v5, v55, -1073741811LL);
      v56 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x in session 0x%I64x, returning 0x%I64x.",
        *((unsigned int *)a1 + 4),
        (__int64)v5,
        v56,
        -1073741811LL,
        0LL);
    }
    LODWORD(v10) = -1073741811;
  }
  v51 = (unsigned int)v10;
LABEL_66:
  if ( v108 )
    DxgkReleaseSessionModeChangeLock();
  return v51;
}
