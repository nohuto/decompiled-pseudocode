/*
 * XREFs of ??_D?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1801531FC
 * Callers:
 *     ??_E?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x18015322C (--_E-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x18015601C (GetPidlsFromTaskbarLayout.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$2 @ 0x180156C8E (_GetPidlsFromTaskbarLayout_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180152C98 (--1-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_ostringstream<unsigned short>::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 136;
  std::basic_ostringstream<unsigned short>::~basic_ostringstream<unsigned short>(a1 + 136);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v1);
}
