void __fastcall DXGAUTOMUTEX::Acquire(DXGAUTOMUTEX *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 8) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
  v2 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v2 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v2 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_OwnerAcquireCount > 0",
        491LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ++*(_DWORD *)(v2 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 8, 0LL) )
    {
      if ( bTracingEnabled && *(_DWORD *)(v2 + 36) != -1 && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, &EventBlockThread);
      _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16));
      ExAcquirePushLockExclusiveEx(v2 + 8, 0LL);
    }
    if ( *(_QWORD *)(v2 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"NULL == m_OwningThread",
        515LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v2 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"0 == m_OwnerAcquireCount",
        516LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v2 + 32) = 1;
  }
  *((_BYTE *)this + 8) = 1;
}
