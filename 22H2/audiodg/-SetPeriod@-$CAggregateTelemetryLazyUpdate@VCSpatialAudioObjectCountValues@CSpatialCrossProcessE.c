/*
 * XREFs of ?SetPeriod@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_K@Z @ 0x1400684D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??0?$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z @ 0x140067288 (--0-$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::SetPeriod(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  CSAutoLock<1>::CSAutoLock<1>(&lpCriticalSection, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  LOBYTE(v4) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v4);
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = GetTickCount64();
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
