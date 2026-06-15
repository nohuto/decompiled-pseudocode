/*
 * XREFs of ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_0 @ 0x18004F3E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004F420 @ 0x18004F420 (sub_18004F420.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall std::stringbuf::`scalar deleting destructor'(__int64 a1, char a2)
{
  sub_18004F420();
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 120LL);
  return a1;
}
