/*
 * XREFs of ??_G?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x18011BD4C
 * Callers:
 *     ??_E?$basic_fstream@DU?$char_traits@D@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x180171680 (--_E-$basic_fstream@DU-$char_traits@D@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_D?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAAXXZ @ 0x18011BC10 (--_D-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAAXXZ.c)
 */

void *__fastcall std::fstream::`scalar deleting destructor'(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 184);
  std::fstream::`vbase destructor'(a1 - 184);
  if ( (a2 & 1) != 0 )
    operator delete(v2, (const struct std::nothrow_t *)0x118);
  return v2;
}
