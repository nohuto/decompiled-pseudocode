/*
 * XREFs of NtCompareSigningLevels @ 0x14069FFE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 NtCompareSigningLevels()
{
  int v0; // eax

  v0 = 0;
  if ( qword_140C1DB20 )
    v0 = ((__int64 (*)(void))qword_140C1DB20)();
  return v0 == 0 ? 0xC0000428 : 0;
}
