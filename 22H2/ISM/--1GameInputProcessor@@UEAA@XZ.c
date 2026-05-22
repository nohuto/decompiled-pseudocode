/*
 * XREFs of ??1GameInputProcessor@@UEAA@XZ @ 0x18017BFB0
 * Callers:
 *     ??_EGameInputProcessor@@UEAAPEAXI@Z @ 0x18017C124 (--_EGameInputProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800280BC (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B08C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall GameInputProcessor::~GameInputProcessor(GameInputProcessor *this)
{
  char *v2; // rsi
  const char *v3; // r9
  char *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &GameInputProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &GameInputProcessor::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 192) )
    NtMITSetKeyboardInputRoutingPolicy(0LL);
  if ( gbIsDWMNoRawGameController )
  {
    v4 = (char *)this + 104;
    v2 = (char *)this + 40;
  }
  else
  {
    v2 = (char *)this + 40;
    try
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3));
      v4 = (char *)this + 104;
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 56LL))(
        *((_QWORD *)this + 3),
        (char *)this + 104);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x5F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gam"
                 "einputprocessor.cpp",
        v3);
      JUMPOUT(0x18017C11BLL);
    }
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 168);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v4, v5);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v2, v6);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 4);
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
