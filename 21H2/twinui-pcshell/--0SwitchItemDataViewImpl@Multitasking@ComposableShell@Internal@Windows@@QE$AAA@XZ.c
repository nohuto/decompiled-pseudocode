/*
 * XREFs of ??0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ @ 0x18036B054
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18036FE50 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18035CB68 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl(
        __int64 a1)
{
  void **v2; // rdx
  void **v3; // rdx
  _QWORD *v4; // rax

  Platform::Object::Object(a1 + 24);
  *(_QWORD *)a1 = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::__ISwitchItemDataViewImplPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView'};
  *(_QWORD *)(a1 + 16) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource'};
  *(_QWORD *)(a1 + 24) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 32) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 40) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 120);
  Platform::Details::EventSourceInitialize((Platform::Details *)(a1 + 48), v2);
  *(_QWORD *)(a1 + 56) = 0LL;
  Platform::Details::EventSourceInitialize((Platform::Details *)(a1 + 64), v3);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)(a1 + 104) = v4;
  return a1;
}
