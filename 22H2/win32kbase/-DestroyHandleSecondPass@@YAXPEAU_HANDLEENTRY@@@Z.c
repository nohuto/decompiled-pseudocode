/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C011BAE0
 * Callers:
 *     <none>
 * Callees:
 *     HMPkheFromPhe @ 0x1C00314E0 (HMPkheFromPhe.c)
 *     HMDestroyUnlockedObject @ 0x1C00C0E40 (HMDestroyUnlockedObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1)
{
  char *v2; // rdi
  __int64 v3; // rcx

  v2 = HMPkheFromPhe((__int64)a1);
  v3 = *(_QWORD *)v2;
  if ( *(_DWORD *)(*(_QWORD *)v2 + 8LL) )
  {
    if ( *((_BYTE *)a1 + 24) != 3 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 1053);
      v3 = *(_QWORD *)v2;
    }
    *(_DWORD *)(v3 + 8) = 0;
  }
  HMDestroyUnlockedObject(a1);
}
