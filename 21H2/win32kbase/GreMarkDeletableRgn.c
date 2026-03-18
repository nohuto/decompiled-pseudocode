/*
 * XREFs of GreMarkDeletableRgn @ 0x1C0099BA0
 * Callers:
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 * Callees:
 *     HmgMarkDeletable @ 0x1C0099BD0 (HmgMarkDeletable.c)
 */

__int64 __fastcall GreMarkDeletableRgn(__int64 a1)
{
  __int64 v2; // rdx

  PsGetCurrentProcessId();
  LOBYTE(v2) = 4;
  return HmgMarkDeletable(a1, v2);
}
