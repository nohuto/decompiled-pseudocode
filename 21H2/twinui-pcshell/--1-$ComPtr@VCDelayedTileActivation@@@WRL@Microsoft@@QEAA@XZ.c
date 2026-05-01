/*
 * XREFs of ??1?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAA@XZ @ 0x18043DD00
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_IImmersiveApplication___&_IUnknown___&_enum_ACTIVATEOPTIONSINTERNAL_&__::_1_::dtor$2 @ 0x18043D7F1 (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_18043D7F1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_unsigned_short_const___&_unsigned_short_const___&_unsigned_short_const___&_IUnknown___&_enum_ACTIVATEOPTIONSINTERNAL_&__::_1_::dtor$2 @ 0x18043D8DD (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_18043D8DD.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0 @ 0x18043E396 (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0_0 @ 0x18043E4C3 (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CDelayedTileActivation>::~ComPtr<CDelayedTileActivation>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1);
}
