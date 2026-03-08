/*
 * XREFs of HalpTimerClockInterruptStub @ 0x14039CA70
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char HalpTimerClockInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  char result; // al

  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  (*(void (__fastcall **)(__int64))(v1 + 120))(InternalData);
  result = 1;
  ++*(_DWORD *)(HalpClockTimer + 64);
  return result;
}
