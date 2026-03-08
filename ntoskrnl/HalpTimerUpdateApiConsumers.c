/*
 * XREFs of HalpTimerUpdateApiConsumers @ 0x14051D4B4
 * Callers:
 *     HalpPrepareForBugcheck @ 0x140509440 (HalpPrepareForBugcheck.c)
 *     HalpRestoreHvEnlightenment @ 0x140509E30 (HalpRestoreHvEnlightenment.c)
 *     HalpSaveAndDisableEnlightenment @ 0x14050A1D0 (HalpSaveAndDisableEnlightenment.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpTimerUpdateApiConsumers()
{
  __int64 i; // rbx
  __int64 result; // rax
  __int16 v2; // [rsp+20h] [rbp-8h]

  _disable();
  for ( i = HalpTimerHvApicCallbackList; i; i = *(_QWORD *)i )
    result = (*(__int64 (__fastcall **)(__int64))(i + 8))(5LL);
  if ( (v2 & 0x200) != 0 )
    _enable();
  return result;
}
