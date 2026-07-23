/*
 * XREFs of sub_1405D7328 @ 0x1405D7328
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1405D760C @ 0x1405D760C (sub_1405D760C.c)
 *     sub_140643B78 @ 0x140643B78 (sub_140643B78.c)
 */

__int64 __fastcall sub_1405D7328(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_140643B78(a1 + 136, a2, 16, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1405D760C(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
