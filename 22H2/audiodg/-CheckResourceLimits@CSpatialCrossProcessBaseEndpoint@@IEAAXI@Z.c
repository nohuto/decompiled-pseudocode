/*
 * XREFs of ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x1400690B0
 * Callers:
 *     ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14006B160 (-SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x140067D0C (-LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialCrossProcessBaseEndpoint::CheckResourceLimits(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned __int32 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  signed __int64 v5; // rdx
  unsigned __int32 v6; // eax
  __int64 v7; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 736) & -(__int64)TryEnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736)));
  if ( v4 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0, 0) & 0x40) != 0 )
    {
      v5 = _InterlockedCompareExchange64(*((volatile signed __int64 **)this + 161), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 161) + 8LL), 0LL, 0LL) <= v5 )
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 16LL), 0, 0);
        if ( a2 >= v6 )
        {
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 161) + 20LL), v6);
          _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0xFFFFFFBF);
          CSpatialCrossProcessEndpointTraceLogger::LogGrantCompleted(
            (CSpatialCrossProcessBaseEndpoint *)((char *)this + 784),
            v6);
          v7 = *((_QWORD *)this + 97);
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
        }
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
