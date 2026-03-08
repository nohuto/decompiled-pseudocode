/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0167960
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0167848 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0003DD8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0167B60 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C01787D0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01C5540 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01DD228 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0351EE0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03AD2B4 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(CCD_TOPOLOGY *this, struct DXGPROCESS *a2, unsigned int a3)
{
  __int64 v5; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  unsigned int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 v10; // r12
  unsigned int v11; // r14d
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // r10
  int v18; // eax
  int v19; // eax
  _BYTE v20[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  _BYTE v23[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[88]; // [rsp+B8h] [rbp-48h] BYREF

  v22 = a3;
  v5 = 340LL * a3;
  while ( 1 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v5 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                                             0);
    v7 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5),
        CddDeviceAndContextForCurrentSession);
      return v7;
    }
    v8 = MEMORY[0x758];
    if ( !MEMORY[0x758] )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v23, 0LL);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGPROCESS *)((char *)a2 + 376), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, 0LL, 1, v9, 0);
    v10 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v24, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState(0LL) )
    {
      if ( (int)v10 < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 4),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5),
          *((_QWORD *)this + 8),
          v10);
      }
      else
      {
        v11 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v8 + 2920) + 96LL) )
        {
          v12 = 1;
          do
          {
            v13 = *((_QWORD *)this + 8);
            v14 = (unsigned int)(1 << v11);
            v15 = *(_QWORD *)(v13 + 48);
            if ( ((unsigned int)v14 & *(_DWORD *)(v15 + v5 + 84)) != 0 )
            {
              v17 = v11 + 85 * v22;
              v18 = *(_DWORD *)(296LL * *(unsigned int *)(v15 + 4 * v17 + 8) + v13 + 248);
              if ( v18 < 0 )
              {
                *(_DWORD *)(v15 + 4 * v17 + 168) = v18;
                v12 = 0;
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 164) |= v14;
                v19 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(*(ADAPTER_DISPLAY **)(v8 + 2920), v11);
                LODWORD(v10) = v19;
                if ( v19 < 0 )
                  WdLogSingleEntry4(
                    2LL,
                    v11,
                    *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 4),
                    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5),
                    v19);
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v5 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                  v11,
                  0);
                v13 = *((_QWORD *)this + 8);
              }
            }
            ++v11;
          }
          while ( v11 < *(_DWORD *)(*(_QWORD *)(v8 + 2920) + 96LL) );
          if ( !v12 )
            DmmDisableAllFailurePathsOnAdapter(v8, *(unsigned int *)(*(_QWORD *)(v13 + 48) + v5 + 164), v14, 0LL);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v26);
      COREACCESS::~COREACCESS((COREACCESS *)v25);
      if ( v21 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v23);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
      return (unsigned int)v10;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v26);
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    if ( v21 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v23);
  }
  WdLogSingleEntry4(
    2LL,
    0LL,
    *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 4),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5),
    -1073741811LL);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
  return 3221225485LL;
}
