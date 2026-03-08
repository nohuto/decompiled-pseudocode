/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176048
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E58D0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00046DC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009274 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C00165C4 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0016884 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C017586C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0176278 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179A9C (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C40F4 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01C6250 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BA704 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // rbx
  DXGADAPTER *v17; // rsi
  __int64 v18; // rax
  struct _ERESOURCE *CurrentThread; // r14
  DXGADAPTER *v20; // rbx
  unsigned int v21; // ebx
  __int64 v22; // rsi
  unsigned int i; // esi
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  bool v27; // zf
  int v28; // eax
  struct DXGPROCESS *Current; // rax
  int v30; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rbx
  _BYTE v41[8]; // [rsp+60h] [rbp-69h] BYREF
  DXGADAPTER *v42; // [rsp+68h] [rbp-61h]
  DXGADAPTER *v43; // [rsp+70h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-49h] BYREF
  char v45; // [rsp+B0h] [rbp-19h]
  __int128 v46; // [rsp+B8h] [rbp-11h] BYREF

  v46 = 0LL;
  v9 = 0;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !SessionDataForSpecifiedSession
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v13, v14),
        (SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                          (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                          CurrentProcessSessionId)) == 0LL) )
  {
    WdLogSingleEntry1(1LL, 2617LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 2617LL, 0LL, 0LL, 0LL, 0LL);
  }
  v45 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2331]);
  v16 = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(this, v16) )
      {
        v24 = *((_QWORD *)this + 16);
        v25 = (unsigned int)v16;
        v26 = 4000LL * (unsigned int)v16;
        if ( *(_QWORD *)(v26 + v24 + 728) )
        {
          v27 = *(_DWORD *)(v26 + v24 + 736) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent();
          v27 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 304LL))(0LL) == 0;
        }
        *((_BYTE *)&v46 + v16) = v27;
        if ( v27 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v16, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, v16) )
          {
            v9 = 1;
            v30 = DmmEnablePathsFromVidPnSource(a2, v16, 1u, a3, a6);
            if ( v30 < 0 )
            {
              v34 = (unsigned int)v16;
              v35 = v30;
              WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v34, v30);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to restore CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
                *((_QWORD *)this + 2),
                v25,
                v35,
                0LL,
                0LL);
LABEL_40:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_25;
            }
            Global = DXGGLOBAL::GetGlobal();
            QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v32, v33);
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < *((_DWORD *)this + 24) );
    if ( !v9 )
      goto LABEL_24;
    v17 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v18 = *((_QWORD *)a2 + 2);
    CurrentThread = (struct _ERESOURCE *)KeGetCurrentThread();
    v42 = v17;
    v20 = *(DXGADAPTER **)(v18 + 16);
    v43 = v20;
    if ( v17 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v42, CurrentThread);
    if ( v20 && v17 != v20 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v43, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL)
                                                                                        + 184LL))(
            *((_QWORD *)this + 2),
            &v46,
            *((unsigned int *)this + 24),
            a5) )
      WdLogSingleEntry4(4LL, a2, (unsigned __int8)v46, BYTE1(v46), *((unsigned int *)this + 24));
    v21 = 0;
    if ( *((_DWORD *)this + 24) )
    {
      while ( 1 )
      {
        v22 = v21;
        if ( !*((_BYTE *)&v46 + v21) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v21, 1u) )
          {
            v28 = DmmDisablePathsFromVidPnSource(a2, v21);
            if ( v28 < 0 )
              break;
          }
        }
        if ( ++v21 >= *((_DWORD *)this + 24) )
          goto LABEL_18;
      }
      v36 = v21;
      v37 = v28;
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v36, v28);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to disable CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
        *((_QWORD *)this + 2),
        v22,
        v37,
        0LL,
        0LL);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v41);
      goto LABEL_40;
    }
LABEL_18:
    if ( v45 )
    {
      KeUnstackDetachProcess(&ApcState);
      v45 = 0;
    }
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
    {
      if ( *((_BYTE *)&v46 + i) )
      {
        v38 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(this, i);
        if ( v38 < 0 )
        {
          v39 = v38;
          WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), i, v38);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in restoring copy protection on adapter 0x%I64x VidPnSourceId 0x%I64x %08I64x (Status = 0x%I64x)",
            *((_QWORD *)this + 2),
            i,
            v39,
            0LL,
            0LL);
        }
      }
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v41);
  }
LABEL_24:
  *a4 = v9;
LABEL_25:
  if ( v45 )
    KeUnstackDetachProcess(&ApcState);
}
