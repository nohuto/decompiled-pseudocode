/*
 * XREFs of sub_180013E28 @ 0x180013E28
 * Callers:
 *     sub_1800139A8 @ 0x1800139A8 (sub_1800139A8.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180014BC8 @ 0x180014BC8 (sub_180014BC8.c)
 *     sub_180014E00 @ 0x180014E00 (sub_180014E00.c)
 *     sub_1800895D4 @ 0x1800895D4 (sub_1800895D4.c)
 *     sub_180095F78 @ 0x180095F78 (sub_180095F78.c)
 *     sub_180097440 @ 0x180097440 (sub_180097440.c)
 *     sub_180098720 @ 0x180098720 (sub_180098720.c)
 *     sub_1800C2944 @ 0x1800C2944 (sub_1800C2944.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180013E28(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Bounds `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a2[1];
    }
    *a1 = v4;
    a1[1] = v5;
  }
  return a1;
}
