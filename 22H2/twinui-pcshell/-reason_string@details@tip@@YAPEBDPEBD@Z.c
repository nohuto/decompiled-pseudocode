/*
 * XREFs of ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800ADBF0
 * Callers:
 *     ?evaluate@_tip_SearchFullActivationTest@@QEAAXXZ @ 0x1800AC524 (-evaluate@_tip_SearchFullActivationTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ @ 0x1800AC814 (-evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_SearchInputTest@@QEAAXXZ @ 0x1800C0FE4 (-evaluate@_tip_SearchInputTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ @ 0x1800D4764 (-evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ.c)
 *     ?evaluate@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXXZ @ 0x180145204 (-evaluate@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

const char *__fastcall tip::details::reason_string(tip::details *this, const char *a2)
{
  const char *result; // rax
  const char *v3; // rdx
  char v4; // r8

  for ( result = (const char *)this; ; result = v3 )
  {
    v4 = *(_BYTE *)this;
    if ( !*(_BYTE *)this )
      break;
    this = (tip::details *)((char *)this + 1);
    v3 = (const char *)this;
    if ( v4 != 58 )
      v3 = result;
  }
  return result;
}
