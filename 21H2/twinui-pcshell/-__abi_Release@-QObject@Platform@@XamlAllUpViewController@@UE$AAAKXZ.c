/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x18038D120
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ @ 0x18016D2E0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ @ 0x18016D2F0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ @ 0x18016D300 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ @ 0x18016D310 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ @ 0x18016D320 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ @ 0x18016D330 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAKXZ @ 0x18016D340 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ @ 0x18016D350 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ @ 0x18016D360 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18035D5C8 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x18035E650 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??1XamlAllUpViewController@@AE$AAA@XZ @ 0x180387ECC (--1XamlAllUpViewController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlAllUpViewController__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 120));
  if ( !v2 )
  {
    XamlAllUpViewController::~XamlAllUpViewController((__int64 *)a1);
    v3 = *(Platform::Details::ControlBlock **)(a1 + 120);
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
