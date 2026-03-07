__int64 __fastcall KbdNlsFuncTypeNormal(struct _VK_TO_FUNCTION_TABLE *a1, struct tagKE *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int16 ModifierBits; // ax
  int v9; // edx

  if ( !a2 )
    return 0LL;
  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  ModifierBits = GetModifierBits((unsigned __int8 **)&off_1C0284F90, v7 + 14056);
  if ( ModifierBits > 7u )
    return 0LL;
  v9 = *((unsigned __int8 *)&off_1C0284F90 + ModifierBits + 10);
  if ( v9 == 15 )
    return 0LL;
  else
    return GenerateNlsVkKey(a1, v9, a2, a3);
}
