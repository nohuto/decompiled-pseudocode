/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C019D0F4
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C019BA70 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetDisplayModeList @ 0x1C01A7B20 (DxgkGetDisplayModeList.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01AAA60 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0015690 (--1DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(char a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 CurrentProcessSessionId; // rbp
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // r9d
  int v15; // r9d
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // [rsp+50h] [rbp-38h] BYREF
  char v20; // [rsp+58h] [rbp-30h]

  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v3 )
    goto LABEL_41;
  v20 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v2);
  v19 = v3 + 88;
  if ( v3 == -88 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v19 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = v19;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v5 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v5 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v5 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = *(_DWORD *)(v5 + 36);
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v6, &EventBlockThread, v7, v14);
      }
      _InterlockedAdd64((volatile signed __int64 *)(v5 + 16), 1uLL);
      ExAcquirePushLockExclusiveEx(v5 + 8, 0LL);
    }
    if ( *(_QWORD *)(v5 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v5 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v5 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v5 + 32) = 1;
  }
  v20 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v3 + 80) )
  {
    DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v19);
    v9 = 0LL;
  }
  else
  {
    _mm_lfence();
    v8 = v19;
    v9 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * CurrentProcessSessionId);
    v20 = 0;
    if ( *(struct _KTHREAD **)(v19 + 24) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v19, 0LL, 0LL);
    if ( *(int *)(v8 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(v8 + 32))-- == 1 )
    {
      *(_QWORD *)(v8 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v9 )
  {
    if ( a1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v9 + 18544));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 18544, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v15 = *(_DWORD *)(v9 + 18568);
          if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v15);
        }
        ExAcquirePushLockSharedEx(v9 + 18544, 0LL);
      }
      _InterlockedAdd((volatile signed __int32 *)(v9 + 18560), 1u);
    }
    return 0LL;
  }
  else
  {
LABEL_41:
    v16 = PsGetCurrentProcessSessionId(v2);
    WdLogSingleEntry2(2LL, v16, -1073741811LL);
    v18 = PsGetCurrentProcessSessionId(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v18,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
