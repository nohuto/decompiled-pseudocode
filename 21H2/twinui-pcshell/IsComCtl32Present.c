/*
 * XREFs of IsComCtl32Present @ 0x180093EDC
 * Callers:
 *     _dynamic_initializer_for__s_rgShellComponent__ @ 0x180003A20 (_dynamic_initializer_for__s_rgShellComponent__.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800948C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsComCtl32Present()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18064F860 == 1 )
    return 1;
  if ( dword_18064F860 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18064F860 = 2 - (v1 != 0);
  return result;
}
