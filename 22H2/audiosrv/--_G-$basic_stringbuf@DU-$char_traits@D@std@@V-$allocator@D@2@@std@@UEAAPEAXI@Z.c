/*
 * XREFs of ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x180003160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800036EC @ 0x1800036EC (sub_1800036EC.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall std::stringbuf::`scalar deleting destructor'(__int64 a1, char a2)
{
  sub_1800036EC();
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 120LL);
  return a1;
}
