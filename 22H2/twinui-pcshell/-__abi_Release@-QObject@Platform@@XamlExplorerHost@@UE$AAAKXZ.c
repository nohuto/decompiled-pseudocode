/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@UE$AAAKXZ @ 0x18035E320
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@W7E$AAAKXZ @ 0x18016A0B0 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@WBA@E$AAAKXZ @ 0x18016A0C0 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@WBI@E$AAAKXZ @ 0x18016A0D0 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@WCA@E$AAAKXZ @ 0x18016A0E0 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@WCA@E$AAAKXZ.c)
 * Callees:
 *     ??1XamlExplorerHost@@IE$AAA@XZ @ 0x18035C978 (--1XamlExplorerHost@@IE$AAA@XZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18035D2F8 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x18035E380 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlExplorerHost__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 112));
  if ( !v2 )
  {
    XamlExplorerHost::~XamlExplorerHost((__int64 *)a1);
    v3 = *(Platform::Details::ControlBlock **)(a1 + 112);
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
