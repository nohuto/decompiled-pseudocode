/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x180398630
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@W7E$AAAKXZ @ 0x18016D990 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@WBA@E$AAAKXZ @ 0x18016D9A0 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@WBI@E$AAAKXZ @ 0x18016D9B0 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@WCA@E$AAAKXZ @ 0x18016D9C0 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@WCI@E$AAAKXZ @ 0x18016D9D0 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@WCI@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18035D2F8 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x18035E380 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??1XamlBaseViewController@@IE$AAA@XZ @ 0x180387CE8 (--1XamlBaseViewController@@IE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlBaseViewController__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 112));
  if ( !v2 )
  {
    XamlBaseViewController::~XamlBaseViewController((__int64 *)a1);
    v3 = *(Platform::Details::ControlBlock **)(a1 + 112);
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
