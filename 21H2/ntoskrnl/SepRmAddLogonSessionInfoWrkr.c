/*
 * XREFs of SepRmAddLogonSessionInfoWrkr @ 0x1406AF4A0
 * Callers:
 *     SepRmCommandServerThread @ 0x1407AD230 (SepRmCommandServerThread.c)
 * Callees:
 *     SepUpdateLogonSessionTrack @ 0x1406AF4C4 (SepUpdateLogonSessionTrack.c)
 */

__int64 __fastcall SepRmAddLogonSessionInfoWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SepUpdateLogonSessionTrack(a1 + 44);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
