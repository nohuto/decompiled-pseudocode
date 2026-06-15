/*
 * XREFs of sub_180046C30 @ 0x180046C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PTP_TIMER __fastcall sub_180046C30(
        __int64 a1,
        void (__stdcall *a2)(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer),
        void *a3)
{
  return CreateThreadpoolTimer(a2, a3, (PTP_CALLBACK_ENVIRON)(a1 + 8));
}
