/*
 * XREFs of StorExtReleaseMSISpinLock @ 0x1C0038D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorExtReleaseMSISpinLock(__int64 a1, unsigned int a2, KIRQL a3)
{
  KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(*(_QWORD *)(**(_QWORD **)(a1 - 16) + 4496LL) + 48LL * a2 + 24), a3);
}
