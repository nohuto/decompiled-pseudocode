/*
 * XREFs of NtDxgkRegisterVailProcess @ 0x1C02B8C10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0002D44 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037C0 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0008744 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A7F0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00266C4 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1C004D880 (-GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ.c)
 *     ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x1C005E7B8 (-AccessCheck@DxgkCompositionObject@@QEBAJKD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0286168 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0286878 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C02B5E0C (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall NtDxgkRegisterVailProcess(__int128 *a1)
{
  struct DXGVAILOBJECT *v2; // rdi
  int NumStartedVirtualGpu; // r15d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  struct _KTHREAD **v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *i; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  _BYTE v37[24]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v38[24]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v39; // [rsp+50h] [rbp-38h] BYREF

  v2 = 0LL;
  NumStartedVirtualGpu = 0;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = 785LL;
    WdLogEvent5_WdWarning(v8);
    return 3221225659LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v39 = *a1;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, v4, v6, v7);
  if ( Current )
  {
    KeEnterCriticalRegion();
    LODWORD(v14) = -1073741275;
    v15 = 0LL;
    Global = DXGGLOBAL::GetGlobal(v17, v16);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v37,
      (struct DXGGLOBAL *)((char *)Global + 432));
    v21 = (_QWORD *)((char *)DXGGLOBAL::GetGlobal(v20, v19) + 1584);
    for ( i = (_QWORD *)*v21; i != v21; i = (_QWORD *)*i )
    {
      v23 = i[30] - v39;
      if ( !v23 )
        v23 = i[31] - *((_QWORD *)&v39 + 1);
      if ( !v23 )
      {
        v15 = (struct _KTHREAD **)(i - 1);
        break;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
    if ( v15 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v38,
        (struct DXGPUSHLOCK *const)(v15 + 8));
      v2 = DXGVIRTUALMACHINE::ReferenceVailObject(v15, v27);
      if ( v2 )
      {
        NumStartedVirtualGpu = DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(v15);
        LODWORD(v14) = 0;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    }
    if ( (int)v14 >= 0 )
    {
      if ( g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled )
      {
        LODWORD(v14) = 0;
      }
      else
      {
        v31 = DxgkCompositionObject::AccessCheck(v2);
        v14 = v31;
        if ( v31 < 0 )
        {
          v33 = WdLogNewEntry5_WdWarning(v30, v29, v32);
          *(_QWORD *)(v33 + 24) = v14;
          WdLogEvent5_WdWarning(v33);
        }
        if ( (int)v14 < 0 )
          goto LABEL_29;
      }
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v37);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
      DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v39, (struct DXGFASTMUTEX *const *)Current);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v39);
      DXGPROCESS::SetVailObject(Current, v2);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v39);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37, v34);
      *((_DWORD *)v2 + 32) = PsGetCurrentProcessSessionId(v36, v35);
    }
    else
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v28 + 24) = (int)v14;
      WdLogEvent5_WdWarning(v28);
    }
LABEL_29:
    if ( !NumStartedVirtualGpu )
    {
      LODWORD(v14) = -1071775727;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v30, v29) + 24) = -1071775727LL;
    }
    if ( v2 )
      DxgkCompositionObject::Release(v2);
    KeLeaveCriticalRegion();
    return (unsigned int)v14;
  }
  v13 = WdLogNewEntry5_WdError(v11, v10);
  LODWORD(v14) = -1073741786;
  *(_QWORD *)(v13 + 24) = -1073741786LL;
  WdLogEvent5_WdError(v13);
  return (unsigned int)v14;
}
