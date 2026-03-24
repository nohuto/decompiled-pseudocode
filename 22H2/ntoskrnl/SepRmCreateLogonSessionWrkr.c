/*
 * XREFs of SepRmCreateLogonSessionWrkr @ 0x140685080
 * Callers:
 *     SepRmCommandServerThread @ 0x1407AD670 (SepRmCommandServerThread.c)
 * Callees:
 *     SepCreateLogonSessionTrack @ 0x1406850AC (SepCreateLogonSessionTrack.c)
 */

__int64 __fastcall SepRmCreateLogonSessionWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = SepCreateLogonSessionTrack(&v4);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
