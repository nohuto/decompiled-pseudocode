/*
 * XREFs of SepRmMakeLogonSessionsSiblingsWrkr @ 0x1409CD660
 * Callers:
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 * Callees:
 *     SepMakeLogonSessionsSiblings @ 0x1409CD2D0 (SepMakeLogonSessionsSiblings.c)
 */

__int64 __fastcall SepRmMakeLogonSessionsSiblingsWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(a1 + 44);
  v4 = *(_QWORD *)(a1 + 52);
  result = SepMakeLogonSessionsSiblings(&v5, &v4);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
