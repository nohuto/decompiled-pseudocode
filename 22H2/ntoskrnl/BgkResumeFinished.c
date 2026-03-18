/*
 * XREFs of BgkResumeFinished @ 0x140A99AF8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403AD4F0 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 * Callees:
 *     BgkpUnlockBgfxCodeSection @ 0x140AF02E0 (BgkpUnlockBgfxCodeSection.c)
 *     BgFreeContext @ 0x140AF2228 (BgFreeContext.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140D18490 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140D18490 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140D17FB8 = 0;
  return result;
}
