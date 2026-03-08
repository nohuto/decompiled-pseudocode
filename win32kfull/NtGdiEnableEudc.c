/*
 * XREFs of NtGdiEnableEudc @ 0x1C00B7790
 * Callers:
 *     <none>
 * Callees:
 *     GreEnableEUDC @ 0x1C00B77A8 (GreEnableEUDC.c)
 */

__int64 __fastcall NtGdiEnableEudc(__int64 a1)
{
  return GreEnableEUDC(a1);
}
