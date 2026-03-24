/*
 * XREFs of ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C01AB350
 * Callers:
 *     <none>
 * Callees:
 *     GetModifierBits @ 0x1C000B560 (GetModifierBits.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x1C01AB218 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 */

__int64 __fastcall KbdNlsFuncTypeNormal(struct _VK_TO_FUNCTION_TABLE *a1, struct tagKE *a2, __int64 a3)
{
  unsigned __int16 ModifierBits; // ax
  int v7; // edx

  if ( !a2 )
    return 0LL;
  ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_NLSKBD, (__int64)gafRawKeyState);
  if ( ModifierBits > (unsigned __int16)word_1C024AAD0 )
    return 0LL;
  v7 = *((unsigned __int8 *)&Modifiers_NLSKBD + ModifierBits + 10);
  if ( v7 == 15 )
    return 0LL;
  else
    return GenerateNlsVkKey(a1, v7, a2, a3);
}
