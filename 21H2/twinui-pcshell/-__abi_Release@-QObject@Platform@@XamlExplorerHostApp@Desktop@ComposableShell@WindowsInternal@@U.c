/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180362970
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x18016AC10 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x18016AC20 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_18016AC20.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WCI@E$AAAKXZ @ 0x18016AC30 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_18016AC30.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAKXZ @ 0x18016AC40 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_18016AC40.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEI@E$AAAKXZ @ 0x18016AC50 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_18016AC50.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WFA@E$AAAKXZ @ 0x18016AC60 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_18016AC60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18035D5C8 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x18035E650 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ @ 0x18035FE90 (--1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  Platform::Details::ControlBlock *v5; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 224);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 224));
  if ( !v3 )
  {
    WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::~XamlExplorerHostApp(a1);
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    Platform::Details::ControlBlock::__abi_Release(v5);
  }
  return v3;
}
