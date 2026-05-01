/*
 * XREFs of ??_E?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x18015322C
 * Callers:
 *     ??_E?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x180172120 (--_E-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??_D?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1801531FC (--_D-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

void *__fastcall std::basic_ostringstream<unsigned short>::`vector deleting destructor'(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 136);
  std::basic_ostringstream<unsigned short>::`vbase destructor'(a1 - 136);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
