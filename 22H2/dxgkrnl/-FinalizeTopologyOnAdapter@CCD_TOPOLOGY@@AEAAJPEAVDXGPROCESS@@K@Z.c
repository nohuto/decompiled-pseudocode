/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00E361C
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00E34F4 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000278C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00DDB84 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E43CC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00EC83C (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01610C8 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0168BA0 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C02A04F8 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3)
{
  __int64 v5; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // esi
  char v17; // bl
  __int64 v18; // r12
  __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  int v25; // r10d
  __int64 v26; // rdx
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _BYTE v34[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  _BYTE v37[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v39[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v40[88]; // [rsp+B8h] [rbp-48h] BYREF

  v5 = a3;
  while ( 1 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v5),
                                             0);
    v9 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
      v33[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v5 + 4);
      v33[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v5);
      v33[5] = v9;
      WdLogEvent5_WdError(v33);
      return (unsigned int)v9;
    }
    v10 = MEMORY[0x738];
    if ( !MEMORY[0x738] )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37, 0LL);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, a2[42], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, 0LL, 1, v11, 0);
    v12 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v38, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState(0LL) )
    {
      if ( (int)v12 < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
        v27[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v5 + 4);
        v27[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v5);
        v27[5] = *((_QWORD *)this + 8);
        v27[6] = v12;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        v15 = *(_QWORD *)(v10 + 2696);
        v16 = 0;
        if ( *(_DWORD *)(v15 + 80) )
        {
          v17 = 1;
          v18 = 336 * v5;
          do
          {
            v19 = *((_QWORD *)this + 8);
            v20 = (unsigned int)(1 << v16);
            v21 = v15;
            v22 = *(_QWORD *)(v19 + 40);
            if ( ((unsigned int)v20 & *(_DWORD *)(v18 + v22 + 84)) != 0 )
            {
              v36 = 84 * v5;
              v21 = v15;
              v25 = *(_DWORD *)(272LL * *(unsigned int *)(v22 + 4 * (v16 + 84 * v5) + 8) + v19 + 240);
              if ( v25 < 0 )
              {
                v17 = 0;
                *(_DWORD *)(v22 + 4 * (v16 + v36) + 164) = v25;
                *(_DWORD *)(v18 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 160) |= v20;
                v28 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(*(ADAPTER_DISPLAY **)(v10 + 2696), v16);
                v12 = v28;
                if ( v28 < 0 )
                {
                  v31 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
                  v31[3] = v16;
                  v31[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v18 + 4);
                  v31[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v5);
                  v31[6] = v12;
                  WdLogEvent5_WdError(v31);
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v18 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v16,
                  0);
                v21 = *(_QWORD *)(v10 + 2696);
              }
            }
            ++v16;
            v15 = v21;
          }
          while ( v16 < *(_DWORD *)(v21 + 80) );
          if ( !v17 )
            DmmDisableAllFailurePathsOnAdapter(
              v10,
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v18 + 160),
              v20,
              0LL);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v40);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      if ( v35 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v23);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
      return (unsigned int)v12;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v40);
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    if ( v35 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v26);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
  v32[3] = 0LL;
  v32[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v5 + 4);
  v32[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v5);
  v32[6] = -1073741811LL;
  WdLogEvent5_WdError(v32);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
  return 3221225485LL;
}
