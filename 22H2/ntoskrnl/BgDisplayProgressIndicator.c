/*
 * XREFs of BgDisplayProgressIndicator @ 0x140AF06AC
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140AA23F4 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x140AEFA28 (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEE558 (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
  {
    LOBYTE(v3) = a1;
    v5 = AnFwDisplayProgressIndicator(v3, v2, v4);
  }
  else
  {
    v5 = -1073741823;
  }
  BgpFwReleaseLock();
  return v5;
}
