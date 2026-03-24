/*
 * XREFs of BgkResumeFinished @ 0x1409905DC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B440 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x14077404C (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x1409F1038 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409F13F0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140C50648 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140C50648 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140C50650 = 0;
  return result;
}
