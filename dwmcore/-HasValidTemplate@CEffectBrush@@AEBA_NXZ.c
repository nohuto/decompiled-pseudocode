/*
 * XREFs of ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x18003F5B0
 * Callers:
 *     ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x18003E3D4 (-ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPE.c)
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003F2F0 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003F470 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18003F4C4 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEffectBrush::HasValidTemplate(CEffectBrush *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 12);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 80) != 0LL;
  return result;
}
