/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C014D238
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0135B50 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00097F0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C014D3D8 (MonitorFillMonitorDeviceInfo.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rsi
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  _QWORD *v21; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v33[144]; // [rsp+30h] [rbp-B8h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 36, 0, 0x180uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal(v5, v4);
    v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8), &v32);
    v10 = v7;
    if ( v7 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v7, 0LL);
      v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL);
      DXGADAPTER::ReleaseReference(v10);
      if ( v11 < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
        v27[3] = v10;
        v27[4] = *((int *)v10 + 80);
        v27[5] = *((unsigned int *)v10 + 79);
        WdLogEvent5_WdWarning(v27);
        v11 = -1073741811;
      }
      else
      {
        v15 = *((_QWORD *)v10 + 337);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, v16);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
          v17 = *(_QWORD **)(v16 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v17,
                         *((unsigned int *)a1 + 4));
          if ( TargetById )
          {
            v21 = (_QWORD *)v17[3];
            if ( v21 == v17 + 3 )
              NextTarget = 0LL;
            else
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v21 - 1);
            for ( ;
                  NextTarget != TargetById;
                  NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v17, NextTarget) )
            {
              if ( *((_DWORD *)NextTarget + 20) == *((_DWORD *)TargetById + 20) )
                ++*((_DWORD *)a1 + 8);
            }
            *((_DWORD *)a1 + 6) = *((_DWORD *)TargetById + 20);
            v23 = *((_QWORD *)TargetById + 14);
            if ( v23 )
              v11 = MonitorFillMonitorDeviceInfo(v23, a1);
            else
              *((_DWORD *)a1 + 5) |= 2u;
          }
          else
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
            v11 = -1073741811;
            v29[3] = *((unsigned int *)a1 + 4);
            v29[4] = a1;
            v29[5] = v10;
          }
          if ( v17 )
            ReferenceCounted::Release((ReferenceCounted *)(v17 + 8), v18);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40), v18);
        }
        else
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v28[3] = v10;
          v28[4] = *((int *)v10 + 80);
          v28[5] = *((unsigned int *)v10 + 79);
          WdLogEvent5_WdWarning(v28);
          v11 = -1073741637;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33, v24);
      return (unsigned int)v11;
    }
    else
    {
      v26 = WdLogNewEntry5_WdTrace(v9, v8);
      *(_QWORD *)(v26 + 24) = *((int *)a1 + 3);
      *(_QWORD *)(v26 + 32) = *((unsigned int *)a1 + 2);
      return 3223191554LL;
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v30 + 24) = a1;
    WdLogEvent5_WdWarning(v30);
    return 3221225485LL;
  }
}
