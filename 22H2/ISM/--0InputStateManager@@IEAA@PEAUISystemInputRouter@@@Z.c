/*
 * XREFs of ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18002AD84
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001EEF8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@1@@Z @ 0x180025990 (--0-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ??4?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z @ 0x18002AE64 (--4-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
InputStateManager *__fastcall InputStateManager::InputStateManager(
        InputStateManager *this,
        struct ISystemInputRouter *a2)
{
  char *v4; // rcx
  int v6; // [rsp+40h] [rbp+18h] BYREF
  int v7; // [rsp+44h] [rbp+1Ch]

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &InputStateManager::`vftable'{for `IRawInputClient'};
  *((_QWORD *)this + 1) = &InputStateManager::`vftable'{for `IInputProcessorHost'};
  *((_QWORD *)this + 2) = &InputStateManager::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &InputStateManager::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v4 = (char *)this + 96;
  v7 = HIDWORD(v4);
  v6 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>(
    (__int64)v4,
    &v6);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 49) = -1;
  Microsoft::WRL::ComPtr<ISystemInputRouter>::operator=((char *)this + 40, a2);
  *((_DWORD *)this + 42) = 1;
  *((_DWORD *)this + 43) = 0;
  return this;
}
