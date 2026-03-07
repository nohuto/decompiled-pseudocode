__int64 __fastcall DXGDXGIKEYEDMUTEX::AcquireCPU(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        union _LARGE_INTEGER *a4,
        __int64 a5,
        int a6)
{
  __int64 result; // rax

  if ( a5 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 672LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pContext == NULL) || (m_pProducerDevice->GetRenderCore()->IsCoreResourceSharedOwner())",
      672LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_DWORD *)(a1 + 24LL * a6 + 16) )
  {
    WdLogSingleEntry1(1LL, 677LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_MutexArray[Type].hKeyedMutex != 0",
      677LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_QWORD *)(a1 + 24LL * a6 + 32) != PsGetCurrentProcess(a1) )
  {
    WdLogSingleEntry1(1LL, 678LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_MutexArray[Type].pProcess == PsGetCurrentProcess()",
      678LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  result = DXGKEYEDMUTEX::AcquireSync(
             *(_DWORD *)(a1 + 24LL * a6 + 16),
             0LL,
             1,
             a4,
             (DXGKEYEDMUTEX *)(a1 + 112),
             0LL,
             0,
             (unsigned __int64 *)(a1 + 136),
             0);
  if ( (int)result >= 0 && (_DWORD)result != 258 )
  {
    *(_QWORD *)(a1 + 120) = a5;
    result = 0LL;
    *(_DWORD *)(a1 + 128) = 1;
  }
  return result;
}
