/*
 * XREFs of ActivationObjectCallout @ 0x1C00B203C
 * Callers:
 *     W32CalloutDispatch @ 0x1C004EFB0 (W32CalloutDispatch.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ActivationObjectClose @ 0x1C0128228 (ActivationObjectClose.c)
 *     ActivationObjectOpen @ 0x1C0128274 (ActivationObjectOpen.c)
 */

__int64 __fastcall ActivationObjectCallout(int a1, _QWORD *a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  unsigned int v6; // ebx

  v2 = a1 - 37;
  if ( !v2 )
    return ActivationObjectOpen(a2);
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( ObGetObjectType(*a2) != ExActivationObjectType )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 597LL);
        return 0LL;
      }
      else
      {
        return 3221225485LL;
      }
    }
    else
    {
      return ActivationObjectClose(a2);
    }
  }
  else
  {
    v6 = 0;
    if ( *((_BYTE *)a2 + 24) && (unsigned int)PsGetProcessSessionIdEx(*a2) == -1 )
      return (unsigned int)-1073741790;
    return v6;
  }
}
