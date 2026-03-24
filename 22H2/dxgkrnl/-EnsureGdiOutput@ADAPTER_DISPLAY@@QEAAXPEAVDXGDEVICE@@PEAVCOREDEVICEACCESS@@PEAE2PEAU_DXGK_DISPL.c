/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E316C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E3A58 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0112FB0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0255090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0001E6C (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0002A6C (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A478 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E0278 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00E1F48 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E3390 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E6D88 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EC320 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0214E58 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
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
  PRKPROCESS *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rdi
  DXGADAPTER *v15; // rsi
  __int64 v16; // rax
  struct _ERESOURCE *CurrentThread; // r14
  DXGADAPTER *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  struct DXGPROCESS *Current; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  struct DXGGLOBAL *Global; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r14
  _QWORD *v47; // rax
  _BYTE v49[8]; // [rsp+40h] [rbp-69h] BYREF
  DXGADAPTER *v50; // [rsp+48h] [rbp-61h]
  DXGADAPTER *v51; // [rsp+50h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-51h] BYREF
  char v53; // [rsp+88h] [rbp-21h]
  __int128 v54; // [rsp+90h] [rbp-19h] BYREF

  v54 = 0LL;
  v9 = 0;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                     CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v29 + 24) = 2572LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v53 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2329]);
  v14 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(this, v14) )
      {
        v22 = *((_QWORD *)this + 14);
        v23 = 3968LL * (unsigned int)v14;
        if ( *(_QWORD *)(v23 + v22 + 688) )
        {
          v24 = *(_DWORD *)(v23 + v22 + 696) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent();
          v24 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 304LL))(0LL) == 0;
        }
        *((_BYTE *)&v54 + v14) = v24;
        if ( v24 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v14, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, (unsigned int)v14) )
          {
            v9 = 1;
            v31 = DmmEnablePathsFromVidPnSource(a2, v14, 1, a3, a6);
            v34 = v31;
            if ( v31 < 0 )
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
              v36[3] = *((_QWORD *)this + 2);
              v36[4] = (unsigned int)v14;
              v36[5] = v34;
              WdLogEvent5_WdError(v36);
LABEL_43:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_26;
            }
            Global = DXGGLOBAL::GetGlobal(v33, v32);
            QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 172), 0);
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < *((_DWORD *)this + 20) );
    if ( !v9 )
      goto LABEL_25;
    v15 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v16 = *((_QWORD *)a2 + 2);
    CurrentThread = (struct _ERESOURCE *)KeGetCurrentThread();
    v50 = v15;
    v18 = *(DXGADAPTER **)(v16 + 16);
    v51 = v18;
    if ( v15 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v50, CurrentThread);
    if ( v18 && v15 != v18 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v51, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL)
                                                                                        + 184LL))(
            *((_QWORD *)this + 2),
            &v54,
            *((unsigned int *)this + 20),
            a5) )
    {
      v37 = WdLogNewEntry5_WdEvent();
      v38 = 0LL;
      v39 = v37;
      *(_QWORD *)(v37 + 24) = a2;
      v40 = (_QWORD *)(v37 + 32);
      do
      {
        v41 = *((unsigned __int8 *)&v54 + v38++);
        *v40++ = v41;
      }
      while ( v38 < 2 );
      *(_QWORD *)(v39 + 48) = *((unsigned int *)this + 20);
      WdLogEvent5_WdEvent(v39);
    }
    v19 = *((_DWORD *)this + 20);
    v20 = 0LL;
    if ( v19 )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)&v54 + v20) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v20, 1u) )
          {
            v25 = DmmDisablePathsFromVidPnSource(a2, v20);
            v28 = v25;
            if ( v25 < 0 )
              break;
          }
        }
        v19 = *((_DWORD *)this + 20);
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= v19 )
          goto LABEL_19;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v42[3] = *((_QWORD *)this + 2);
      v42[4] = (unsigned int)v20;
      v42[5] = v28;
      WdLogEvent5_WdError(v42);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v49);
      goto LABEL_43;
    }
LABEL_19:
    if ( v53 )
    {
      KeUnstackDetachProcess(&ApcState);
      v19 = *((_DWORD *)this + 20);
      v53 = 0;
    }
    v21 = 0LL;
    if ( v19 )
    {
      do
      {
        if ( *((_BYTE *)&v54 + v21) )
        {
          v43 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(this, v21);
          v46 = v43;
          if ( v43 < 0 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
            v47[3] = *((_QWORD *)this + 2);
            v47[4] = (unsigned int)v21;
            v47[5] = v46;
            WdLogEvent5_WdError(v47);
          }
        }
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (unsigned int)v21 < *((_DWORD *)this + 20) );
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v49);
  }
LABEL_25:
  *a4 = v9;
LABEL_26:
  if ( v53 )
    KeUnstackDetachProcess(&ApcState);
}
