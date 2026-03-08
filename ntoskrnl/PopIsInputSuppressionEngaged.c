/*
 * XREFs of PopIsInputSuppressionEngaged @ 0x140757D60
 * Callers:
 *     PopMonitorInvocation @ 0x140756DE8 (PopMonitorInvocation.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsInputSuppressionEngaged(int a1)
{
  char v1; // dl
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = 0;
  if ( a1 > 36 )
  {
    v6 = a1 - 37;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 15 )
            return v1;
        }
      }
    }
  }
  else if ( a1 != 36 )
  {
    v2 = a1 - 31;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( (unsigned int)(v4 - 1) >= 2 )
            return v1;
        }
      }
    }
  }
  if ( PopEnableInputSuppression
    && !PopErrataReportingIncorrectLidState
    && !PopLidOpened
    && dword_140C3D48C == 1
    && !PopConsoleExternalDisplayConnected )
  {
    return PopConsoleDisplayState == 0;
  }
  return v1;
}
