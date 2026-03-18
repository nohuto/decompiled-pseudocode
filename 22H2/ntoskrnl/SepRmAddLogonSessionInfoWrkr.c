/*
 * XREFs of SepRmAddLogonSessionInfoWrkr @ 0x1407C7C00
 * Callers:
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
 * Callees:
 *     SepUpdateLogonSessionTrack @ 0x1407C7C24 (SepUpdateLogonSessionTrack.c)
 */

__int64 __fastcall SepRmAddLogonSessionInfoWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SepUpdateLogonSessionTrack(a1 + 44);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
