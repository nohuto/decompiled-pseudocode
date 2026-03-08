/*
 * XREFs of ?ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00CF148
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C0155CDC (-ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     ?ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C0155D5C (-ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 */

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
