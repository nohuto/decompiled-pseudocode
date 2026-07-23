/*
 * XREFs of SepRmDeleteLogonSessionWrkr @ 0x14077B2A0
 * Callers:
 *     SepRmCommandServerThread @ 0x1407AD430 (SepRmCommandServerThread.c)
 * Callees:
 *     SepDeleteLogonSessionTrack @ 0x14077A830 (SepDeleteLogonSessionTrack.c)
 */

__int64 __fastcall SepRmDeleteLogonSessionWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = SepDeleteLogonSessionTrack(&v4, 0);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
