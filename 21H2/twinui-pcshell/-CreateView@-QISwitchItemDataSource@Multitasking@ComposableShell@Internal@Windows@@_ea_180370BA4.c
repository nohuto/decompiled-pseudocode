/*
 * XREFs of ?CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAPE$AAVSwitchItemDataView@2345@XZ @ 0x180370BA4
 * Callers:
 *     ?CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@WBA@E$AAAPE$AAVSwitchItemDataView@2345@XZ @ 0x18016AFC0 (-CreateView@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDat.c)
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPEAPE$AAVSwitchItemDataView@2345@@Z @ 0x18037CD68 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_C_ea_18037CD68.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn _CreateView__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAPE_AAVSwitchItemDataView_2345_XZ()
{
  __int64 pExceptionObject; // [rsp+38h] [rbp+10h] BYREF
  void *Exception; // [rsp+40h] [rbp+18h]

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  Exception = (void *)Platform::NotImplementedException::NotImplementedException(Exception);
  pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
  throw (Platform::NotImplementedException **)&pExceptionObject;
}
