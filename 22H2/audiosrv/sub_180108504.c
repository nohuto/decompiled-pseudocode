/*
 * XREFs of sub_180108504 @ 0x180108504
 * Callers:
 *     sub_18004ED60 @ 0x18004ED60 (sub_18004ED60.c)
 *     sub_180108CC0 @ 0x180108CC0 (sub_180108CC0.c)
 * Callees:
 *     sub_1800D8E60 @ 0x1800D8E60 (sub_1800D8E60.c)
 *     sub_1801083B4 @ 0x1801083B4 (sub_1801083B4.c)
 *     sub_180108FA0 @ 0x180108FA0 (sub_180108FA0.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010B9A0 @ 0x18010B9A0 (sub_18010B9A0.c)
 */

__int64 __fastcall sub_180108504(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  sub_18010A130("Sarm::CSpatialAudioResourceManager::RemoveStream", 132LL);
  if ( !a2 )
  {
    sub_1800D8E60(
      (int)retaddr,
      134,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp");
    __debugbreak();
  }
  sub_180108FA0(a1, a2);
  v4 = *(_QWORD *)(a2 + 32);
  result = sub_18010B9A0(a2);
  if ( v4 )
    return sub_1801083B4(a1 + 232, v4);
  return result;
}
