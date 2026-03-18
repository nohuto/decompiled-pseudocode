/*
 * XREFs of PopFindNextSystemPowerState @ 0x1409809E0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140C3CE40 = dword_140C3CE44;
  if ( dword_140C3CE44 == 1 )
  {
    if ( dword_140C3CE2C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140C3CE2C &= ~0x10000000u;
      dword_140C3CE40 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140C3CE40 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
