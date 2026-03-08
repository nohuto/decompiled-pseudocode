/*
 * XREFs of ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C021BDF0
 * Callers:
 *     <none>
 * Callees:
 *     GetModifierBits @ 0x1C0002C40 (GetModifierBits.c)
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x1C021BD40 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x1C021BD98 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 */

__int64 __fastcall KbdNlsFuncTypeAlt(struct _VK_TO_FUNCTION_TABLE *a1, struct tagKE *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v8; // rax
  unsigned __int16 ModifierBits; // ax
  int v10; // ebp
  char v11; // al
  unsigned int NlsVkKey; // eax
  unsigned int NlsVkAltKey; // eax

  v4 = 0;
  if ( !a2 || !a1 )
    return 0LL;
  v8 = SGDGetUserSessionState(a1, a2, a3, a4);
  ModifierBits = GetModifierBits((unsigned __int8 **)&off_1C0284F90, v8 + 14056);
  if ( ModifierBits <= 7u )
  {
    v10 = *((unsigned __int8 *)&off_1C0284F90 + ModifierBits + 10);
    if ( v10 != 15 )
    {
      v11 = *((_BYTE *)a1 + 2);
      if ( *((__int16 *)a2 + 1) < 0 )
      {
        if ( v11 == 2 )
        {
          NlsVkAltKey = GenerateNlsVkAltKey(a1, v10, a2, a3);
          *((_BYTE *)a1 + 2) = 1;
        }
        else
        {
          return (unsigned int)GenerateNlsVkKey(a1, v10, a2, a3);
        }
        return NlsVkAltKey;
      }
      else
      {
        if ( v11 == 2 )
          NlsVkKey = GenerateNlsVkAltKey(a1, v10, a2, a3);
        else
          NlsVkKey = GenerateNlsVkKey(a1, v10, a2, a3);
        v4 = NlsVkKey;
        if ( ((unsigned __int8)(1 << v10) & *((_BYTE *)a1 + 3)) != 0 )
          *((_BYTE *)a1 + 2) = 2;
      }
    }
  }
  return v4;
}
