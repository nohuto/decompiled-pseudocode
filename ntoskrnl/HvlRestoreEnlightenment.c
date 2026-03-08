/*
 * XREFs of HvlRestoreEnlightenment @ 0x14053D924
 * Callers:
 *     PopHiberCheckResume @ 0x140A9FD30 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x14037FC60 (HvlpTryConfigureInterface.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HvlpPhase0Enlightenments @ 0x14054701C (HvlpPhase0Enlightenments.c)
 */

__int64 __fastcall HvlRestoreEnlightenment(char a1)
{
  __int64 result; // rax
  int v2; // eax

  result = HvlpEnlightenments;
  HvlEnlightenments = HvlpEnlightenments;
  if ( a1 == 1 )
  {
    result = HvlpFlags;
    if ( (HvlpFlags & 2) == 0 )
    {
      v2 = HvlpTryConfigureInterface(0LL);
      if ( v2 < 0 )
        KeBugCheckEx(0x20001u, v2, 0LL, 0LL, 0LL);
      result = HvlpPhase0Enlightenments(0LL);
      if ( (int)result < 0 )
        KeBugCheckEx(0x20001u, (int)result, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
