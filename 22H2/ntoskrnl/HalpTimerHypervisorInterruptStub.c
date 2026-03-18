/*
 * XREFs of HalpTimerHypervisorInterruptStub @ 0x14051EB70
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4540 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

char HalpTimerHypervisorInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  char result; // al

  InternalData = HalpTimerGetInternalData(HalpHypervisorHpet);
  (*(void (__fastcall **)(__int64))(v1 + 120))(InternalData);
  result = 1;
  ++*(_DWORD *)(HalpHypervisorHpet + 64);
  return result;
}
