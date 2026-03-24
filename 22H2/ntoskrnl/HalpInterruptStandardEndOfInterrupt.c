/*
 * XREFs of HalpInterruptStandardEndOfInterrupt @ 0x1404BDC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpInterruptStandardEndOfInterrupt()
{
  return (*(__int64 (__fastcall **)(_QWORD))(HalpInterruptController + 96))(*(_QWORD *)(HalpInterruptController + 16));
}
