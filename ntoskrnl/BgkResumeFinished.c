/*
 * XREFs of BgkResumeFinished @ 0x140A969B8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1409855F0 (PopFreeHiberContext.c)
 * Callees:
 *     BgkpUnlockBgfxCodeSection @ 0x140AEC590 (BgkpUnlockBgfxCodeSection.c)
 *     BgFreeContext @ 0x140AEE228 (BgFreeContext.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140D18150 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140D18150 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140D17C58 = 0;
  return result;
}
