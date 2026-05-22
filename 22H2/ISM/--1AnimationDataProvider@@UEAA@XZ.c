/*
 * XREFs of ??1AnimationDataProvider@@UEAA@XZ @ 0x1801414FC
 * Callers:
 *     ??_GAnimationDataProvider@@UEAAPEAXI@Z @ 0x180141600 (--_GAnimationDataProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011AD4 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800334A8 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AnimationDataProvider::~AnimationDataProvider(
        AnimationDataProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct ISMTestMode *v5; // rax
  void *v6; // rdi
  void *v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rcx
  Microsoft::Bamo::BaseBamoConnection *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &AnimationDataProvider::`vftable';
  v5 = ISMTestMode::s_instance;
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
  if ( !*(_BYTE *)v5 )
    *(_QWORD *)(*((_QWORD *)this + 2) + 184LL) = 0LL;
  v6 = (void *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    v7 = (void *)*((_QWORD *)this + 6);
    v8 = *((_QWORD *)this + 5);
    if ( v6 != v7 )
    {
      do
      {
        std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v8, a2);
        v8 += 64LL;
      }
      while ( (void *)v8 != v7 );
    }
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 7) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFC0uLL));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)this + 4);
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v10 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 2);
  if ( v10 )
  {
    *((_QWORD *)this + 2) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v10);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
