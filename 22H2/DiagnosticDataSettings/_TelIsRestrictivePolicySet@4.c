/*
 * XREFs of _TelIsRestrictivePolicySet@4 @ 0x10002850
 * Callers:
 *     _TelEvaluateActiveSettingAuthority@8 @ 0x10002F70 (_TelEvaluateActiveSettingAuthority@8.c)
 * Callees:
 *     _TelGetNumericPolicy@12 @ 0x10002610 (_TelGetNumericPolicy@12.c)
 */

int __stdcall TelIsRestrictivePolicySet(int a1)
{
  int v1; // esi
  int pvData; // [esp+4h] [ebp-8h] BYREF
  int v4; // [esp+8h] [ebp-4h] BYREF

  v1 = 1;
  pvData = 1;
  v4 = 1;
  if ( TelGetNumericPolicy(a1, &v4, &pvData) >= 0 && (!v4 || !pvData) )
    return 0;
  return v1;
}
