/*
 * XREFs of BgpFwMarkHiberPhase @ 0x140AEEDE4
 * Callers:
 *     BgMarkHiberPhase @ 0x140AEE344 (BgMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 */

__int64 BgpFwMarkHiberPhase()
{
  __int64 i; // rbx

  for ( i = qword_140C0E480; (__int64 *)i != &qword_140C0E480; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
