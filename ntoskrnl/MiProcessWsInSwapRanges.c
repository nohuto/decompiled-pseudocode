/*
 * XREFs of MiProcessWsInSwapRanges @ 0x140200438
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x140200298 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     MiReleaseOutSwapReservations @ 0x1402004DC (MiReleaseOutSwapReservations.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmPrefetchVirtualMemory @ 0x14067E690 (MmPrefetchVirtualMemory.c)
 */

struct _KTHREAD *__fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, char a3)
{
  int v6; // edi
  struct _KTHREAD *result; // rax
  struct _KTHREAD *CurrentThread; // r8

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  result = (struct _KTHREAD *)MmPrefetchVirtualMemory((HANDLE)-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
  {
    result = KeGetCurrentThread();
    if ( result->SpecialApcDisable++ == -1 )
    {
      result = (struct _KTHREAD *)((char *)result + 152);
      if ( *(struct _KTHREAD **)&result->Header.Lock != result )
        result = (struct _KTHREAD *)KiCheckForKernelApcDelivery();
    }
  }
  if ( (a3 & 1) == 0 )
    return (struct _KTHREAD *)MiReleaseOutSwapReservations(a1, a2);
  return result;
}
