__int64 __fastcall ForegroundManagement::ActivationObjectCallout(int a1, struct _WIN32_OPENMETHOD_PARAMETERS *a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v2 = a1 - 37;
  if ( !v2 )
    return ActivationObjectOpen(a2);
  v3 = v2 - 1;
  if ( !v3 )
    return ActivationObjectOkToClose(a2);
  v4 = v3 - 1;
  if ( !v4 )
    return 0LL;
  if ( v4 == 1 )
  {
    if ( ObGetObjectType(*(_QWORD *)a2) != ExActivationObjectType )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 364LL);
    return 0LL;
  }
  return 3221225485LL;
}
