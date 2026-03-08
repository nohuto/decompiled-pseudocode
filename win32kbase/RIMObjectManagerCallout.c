/*
 * XREFs of RIMObjectManagerCallout @ 0x1C00360B4
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     RawInputManagerObjectOpen @ 0x1C0036140 (RawInputManagerObjectOpen.c)
 *     RawInputManagerObjectDelete @ 0x1C00361E4 (RawInputManagerObjectDelete.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMObjectManagerCallout(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  unsigned int v6; // ebx

  v2 = a1 - 27;
  if ( !v2 )
    return RawInputManagerObjectOpen(a2);
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        return RawInputManagerObjectDelete(a2);
      else
        return 3221225485LL;
    }
    else
    {
      if ( ObGetObjectType(*(_QWORD *)(a2 + 8)) != ExRawInputManagerObjectType )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 189LL);
      return 0LL;
    }
  }
  else
  {
    v6 = 0;
    if ( *(_BYTE *)(a2 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a2) == -1 )
      return (unsigned int)-1073741790;
    return v6;
  }
}
