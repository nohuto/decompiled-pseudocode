/*
 * XREFs of EditionIsRIMInjectionBlocked @ 0x1C0003A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EditionIsRIMInjectionBlocked(__int64 a1)
{
  return (*(_DWORD *)(a1 + 184) & 0x4000) == 0
      && grpdeskRitInput
      && (*(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
       || PsGetCurrentProcess() != gpepCSRSS && !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), 0x20u));
}
