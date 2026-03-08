/*
 * XREFs of Xp10ScatteredCopyFromPrevious @ 0x1409C54BC
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x1409C2EF0 (Xp10ExecuteHuffmanDecode.c)
 * Callees:
 *     Xp10ScatteredByteSeekBack @ 0x1409C5170 (Xp10ScatteredByteSeekBack.c)
 *     Xp10ScatteredCopy @ 0x1409C5208 (Xp10ScatteredCopy.c)
 */

__int64 __fastcall Xp10ScatteredCopyFromPrevious(_OWORD *a1, unsigned int a2, int a3)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int64 result; // rax
  _OWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF

  v5 = a1[1];
  v8[0] = *a1;
  v6 = a1[2];
  v8[1] = v5;
  v8[2] = v6;
  result = Xp10ScatteredByteSeekBack((__int64 *)v8, a2);
  if ( (_DWORD)result )
    return Xp10ScatteredCopy((__int64)a1, (__int64)v8, a3);
  return result;
}
