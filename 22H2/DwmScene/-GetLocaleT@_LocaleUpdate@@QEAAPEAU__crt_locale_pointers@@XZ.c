/*
 * XREFs of ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0
 * Callers:
 *     sub_1800762B0 @ 0x1800762B0 (sub_1800762B0.c)
 *     sub_18007AC40 @ 0x18007AC40 (sub_18007AC40.c)
 *     sub_1800F8EE0 @ 0x1800F8EE0 (sub_1800F8EE0.c)
 *     sub_1801250B7 @ 0x1801250B7 (sub_1801250B7.c)
 *     sub_1801250FD @ 0x1801250FD (sub_1801250FD.c)
 *     sub_180125176 @ 0x180125176 (sub_180125176.c)
 *     sub_1801251B4 @ 0x1801251B4 (sub_1801251B4.c)
 *     sub_18012B111 @ 0x18012B111 (sub_18012B111.c)
 *     sub_18012B157 @ 0x18012B157 (sub_18012B157.c)
 *     sub_18012B1D0 @ 0x18012B1D0 (sub_18012B1D0.c)
 *     sub_18012B20E @ 0x18012B20E (sub_18012B20E.c)
 *     sub_18012B390 @ 0x18012B390 (sub_18012B390.c)
 *     sub_18012B3D6 @ 0x18012B3D6 (sub_18012B3D6.c)
 *     sub_18012B450 @ 0x18012B450 (sub_18012B450.c)
 *     sub_18012B48E @ 0x18012B48E (sub_18012B48E.c)
 * Callees:
 *     <none>
 */

struct __crt_locale_pointers *__fastcall _LocaleUpdate::GetLocaleT(_LocaleUpdate *this)
{
  return (struct __crt_locale_pointers *)((char *)this + 8);
}
