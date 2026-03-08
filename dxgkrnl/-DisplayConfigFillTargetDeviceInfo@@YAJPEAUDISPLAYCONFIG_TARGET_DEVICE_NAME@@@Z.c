/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01B9CCC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C01E0008 (MonitorFillMonitorDeviceInfo.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGADAPTER *v8; // rbp
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rbx
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  _QWORD *v18; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  __int64 v20; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned __int64 v24[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v25[144]; // [rsp+30h] [rbp-B8h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 36, 0, 0x180uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal();
    v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8), v24);
    v8 = v3;
    if ( v3 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v3, 0LL);
      v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL);
      DXGADAPTER::ReleaseReference(v8);
      if ( v9 < 0 )
      {
        WdLogSingleEntry3(3LL, v8, *((int *)v8 + 102), *((unsigned int *)v8 + 101));
        v9 = -1073741811;
      }
      else
      {
        v10 = *((_QWORD *)v8 + 365);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 104);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v24, v11);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 120) + 72LL));
          v12 = *(_QWORD **)(v11 + 120);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v12, *((_DWORD *)a1 + 4));
          if ( !TargetById )
          {
            v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
            v9 = -1073741811;
            v23[3] = *((unsigned int *)a1 + 4);
            v23[4] = a1;
            v23[5] = v8;
            goto LABEL_15;
          }
          v18 = (_QWORD *)v12[3];
          if ( v18 == v12 + 3 )
          {
            NextTarget = 0LL;
          }
          else
          {
            NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v18 - 1);
            if ( NextTarget == TargetById )
            {
LABEL_13:
              *((_DWORD *)a1 + 6) = *((_DWORD *)TargetById + 20);
              v20 = *((_QWORD *)TargetById + 14);
              if ( v20 )
                v9 = MonitorFillMonitorDeviceInfo(v20, a1);
              else
                *((_DWORD *)a1 + 5) |= 2u;
LABEL_15:
              if ( v12 )
                ReferenceCounted::Release((ReferenceCounted *)(v12 + 8));
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v24[0] + 40));
              goto LABEL_18;
            }
          }
          do
          {
            if ( *((_DWORD *)NextTarget + 20) == *((_DWORD *)TargetById + 20) )
              ++*((_DWORD *)a1 + 8);
            NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v12, NextTarget);
          }
          while ( NextTarget != TargetById );
          goto LABEL_13;
        }
        WdLogSingleEntry3(3LL, v8, *((int *)v8 + 102), *((unsigned int *)v8 + 101));
        v9 = -1073741637;
      }
LABEL_18:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
      return (unsigned int)v9;
    }
    v22 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    *(_QWORD *)(v22 + 24) = *((int *)a1 + 3);
    *(_QWORD *)(v22 + 32) = *((unsigned int *)a1 + 2);
    return 3223191554LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    return 3221225485LL;
  }
}
