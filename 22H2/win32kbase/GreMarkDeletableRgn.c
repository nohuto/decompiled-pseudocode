/*
 * XREFs of GreMarkDeletableRgn @ 0x1C0087320
 * Callers:
 *     <none>
 * Callees:
 *     HmgMarkDeletable @ 0x1C0087350 (HmgMarkDeletable.c)
 */

__int64 __fastcall GreMarkDeletableRgn(__int64 a1)
{
  __int64 v2; // rdx

  PsGetCurrentProcessId();
  LOBYTE(v2) = 4;
  return HmgMarkDeletable(a1, v2);
}
