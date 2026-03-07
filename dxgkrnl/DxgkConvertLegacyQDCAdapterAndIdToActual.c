__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  struct DXGGLOBAL *Global; // rax
  DXGADAPTERSOURCEHASH *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edi
  __int64 result; // rax
  int v15; // r9d
  struct _LUID v16; // rcx
  __int64 v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int HashBitMask; // eax
  struct _LUID v24; // rbx
  __int64 v25; // rax
  char *v26; // [rsp+50h] [rbp-10h]
  unsigned int v27; // [rsp+A8h] [rbp+48h] BYREF
  struct _LUID v28; // [rsp+B0h] [rbp+50h] BYREF

  *a3 = *a1;
  *a4 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v9 = (struct DXGGLOBAL *)((char *)Global + 1384);
  v26 = (char *)Global + 1384;
  if ( Global == (struct DXGGLOBAL *)-1384LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v26 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v26 + 3) == KeGetCurrentThread() )
  {
    if ( *((int *)v26 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v26 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v26 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v15 = *((_DWORD *)v26 + 9);
        if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v11, v15);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v26 + 2);
      ExAcquirePushLockExclusiveEx(v26 + 8, 0LL);
    }
    if ( *((_QWORD *)v26 + 3) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v26 + 8) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)v26 + 3) = KeGetCurrentThread();
    *((_DWORD *)v26 + 8) = 1;
  }
  v12 = 0xFFFFFFFF >> (32 - *((_BYTE *)v9 + 68)) << (32 - *((_BYTE *)v9 + 68));
  if ( *((struct _KTHREAD **)v26 + 3) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v26, 0LL, 0LL);
  if ( *((int *)v26 + 8) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)v26 + 8))-- == 1 )
  {
    *((_QWORD *)v26 + 3) = 0LL;
    ExReleasePushLockExclusiveEx(v26 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( (v12 & a2) == 0 )
    return 0LL;
  v16 = *a1;
  v27 = 0;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(v16);
  v17 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v27 )
    return 0LL;
  v28 = 0LL;
  v18 = a2 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v9);
  if ( (int)DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v9, v18, &v28, &v27) < 0 )
  {
    v25 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
    *(_QWORD *)(v25 + 24) = v18;
    *(_QWORD *)(v25 + 32) = v17;
    return 0LL;
  }
  LOBYTE(v27) = 0;
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v9);
  v24 = v28;
  result = DxgkIsVirtualizationDisabledForTarget(v28, a2 & ~HashBitMask, 0LL, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v27 )
    {
      *a3 = v24;
      *a4 = a2 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v9);
    }
    return 0LL;
  }
  return result;
}
