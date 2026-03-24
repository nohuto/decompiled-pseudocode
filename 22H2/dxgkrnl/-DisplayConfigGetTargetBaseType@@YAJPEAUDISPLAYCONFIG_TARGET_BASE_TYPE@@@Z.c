/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01735C8
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
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1, __int64 a2, __int64 a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rsi
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v28[144]; // [rsp+30h] [rbp-A8h] BYREF

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1], &v27);
    v8 = v5;
    if ( v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v5, 0LL);
      v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL);
      DXGADAPTER::ReleaseReference(v8);
      if ( v9 < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v22[3] = v8;
        v22[4] = *((int *)v8 + 80);
        v22[5] = *((unsigned int *)v8 + 79);
        WdLogEvent5_WdWarning(v22);
        v9 = -1073741811;
      }
      else
      {
        v13 = *((_QWORD *)v8 + 337);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, v14);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
          v15 = *(_QWORD *)(v14 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, a1[2].LowPart);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 21);
          }
          else
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
            v9 = -1073741811;
            v24[3] = a1[2].LowPart;
            v24[4] = a1;
            v24[5] = v8;
          }
          if ( v15 )
            ReferenceCounted::Release((ReferenceCounted *)(v15 + 64), v17);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40), v17);
        }
        else
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
          v23[3] = v8;
          v23[4] = *((int *)v8 + 80);
          v23[5] = *((unsigned int *)v8 + 79);
          WdLogEvent5_WdWarning(v23);
          v9 = -1073741637;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28, v19);
      return (unsigned int)v9;
    }
    else
    {
      v21 = WdLogNewEntry5_WdTrace(v7, v6);
      *(_QWORD *)(v21 + 24) = a1[1].HighPart;
      *(_QWORD *)(v21 + 32) = a1[1].LowPart;
      return 3223191554LL;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v25 + 24) = a1;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
}
