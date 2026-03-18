/*
 * XREFs of NtGdiEnableEudc @ 0x1C0099320
 * Callers:
 *     <none>
 * Callees:
 *     GreEnableEUDC @ 0x1C00991AC (GreEnableEUDC.c)
 */

__int64 __fastcall NtGdiEnableEudc(int a1)
{
  return GreEnableEUDC(a1);
}
