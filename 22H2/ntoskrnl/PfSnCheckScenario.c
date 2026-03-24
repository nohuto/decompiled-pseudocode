/*
 * XREFs of PfSnCheckScenario @ 0x14062EB58
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14062E94C (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1406A51B8 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_140C50120 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140C50550 & 1) == 0 || (dword_140C502B0 & 1) != 0 )
    {
      if ( dword_140C504A4 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140C503F8 )
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
