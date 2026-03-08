/*
 * XREFs of PfSnCheckScenario @ 0x1407E6F8C
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1407E6D34 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x14097C840 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_140C64A70 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140C6A390 & 1) == 0 || (dword_140C64C00 & 1) != 0 )
    {
      if ( dword_140C6A2E4 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140C64D48 )
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
