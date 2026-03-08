/*
 * XREFs of UmfdEnableDriver @ 0x1C0126220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdEnableDriver(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_DWORD *)(a3 + 4) = 19;
  *(_QWORD *)(a3 + 8) = &unk_1C030A680;
  result = 1LL;
  *(_DWORD *)a3 = 196608;
  return result;
}
