/*
 * XREFs of RtlpGetNonLegacyXStateAreaLength @ 0x14058FB34
 * Callers:
 *     KiInitializeUserApc @ 0x140230744 (KiInitializeUserApc.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x1402445D0 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 __fastcall RtlpGetNonLegacyXStateAreaLength(__int64 a1)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    a1 &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
  return (unsigned int)RtlpGetEntireXStateAreaLength(a1) - 512;
}
