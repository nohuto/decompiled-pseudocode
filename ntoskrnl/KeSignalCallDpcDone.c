/*
 * XREFs of KeSignalCallDpcDone @ 0x1403C0D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeSignalCallDpcDone(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
