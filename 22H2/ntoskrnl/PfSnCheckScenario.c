/*
 * XREFs of PfSnCheckScenario @ 0x140760C60
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140760A08 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x14097F8F0 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_140C64EF0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140C6A810 & 1) == 0 || (dword_140C65080 & 1) != 0 )
    {
      if ( dword_140C6A764 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140C651C8 )
      {
        *a2 = v2;
      }
      else
      {
        return (unsigned int)-1073741127;
      }
    }
    else
    {
      return (unsigned int)-1073741725;
    }
  }
  else
  {
    return (unsigned int)-1073741399;
  }
  return v3;
}
