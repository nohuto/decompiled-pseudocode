/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C01AF914
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01A7070 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetDisplayModeList @ 0x1C01A95D0 (DxgkGetDisplayModeList.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0016DE4 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcessSessionId; // rbp
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // r9d
  int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 v25; // [rsp+50h] [rbp-38h] BYREF
  char v26; // [rsp+58h] [rbp-30h]

  v4 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v4 )
    goto LABEL_41;
  v26 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v3, v2, v5, v6);
  v25 = v4 + 88;
  if ( v4 == -88 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v25 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = v25;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v8 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v8 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v8 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *(_DWORD *)(v8 + 36);
        if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, (const EVENT_DESCRIPTOR *)"g", v10, v17);
      }
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 16), 1uLL);
      ExAcquirePushLockExclusiveEx(v8 + 8, 0LL);
    }
    if ( *(_QWORD *)(v8 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v8 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v8 + 32) = 1;
  }
  v26 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v4 + 80) )
  {
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v25);
    v12 = 0LL;
  }
  else
  {
    _mm_lfence();
    v11 = v25;
    v12 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8 * CurrentProcessSessionId);
    v26 = 0;
    if ( *(struct _KTHREAD **)(v25 + 24) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v25, 0LL, 0LL);
    if ( *(int *)(v11 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(v11 + 32))-- == 1 )
    {
      *(_QWORD *)(v11 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v12 )
  {
    if ( a1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v12 + 18544));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 18544, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v18 = *(_DWORD *)(v12 + 18568);
          if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v14, (const EVENT_DESCRIPTOR *)"g", v15, v18);
        }
        ExAcquirePushLockSharedEx(v12 + 18544, 0LL);
      }
      _InterlockedAdd((volatile signed __int32 *)(v12 + 18560), 1u);
    }
    return 0LL;
  }
  else
  {
LABEL_41:
    v19 = PsGetCurrentProcessSessionId(v3, v2, v5, v6);
    WdLogSingleEntry2(2LL, v19, -1073741811LL);
    v24 = PsGetCurrentProcessSessionId(v21, v20, v22, v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v24,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
