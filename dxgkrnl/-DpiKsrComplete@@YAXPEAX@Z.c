/*
 * XREFs of ?DpiKsrComplete@@YAXPEAX@Z @ 0x1C03A0F70
 * Callers:
 *     DpiKsrCallback @ 0x1C03A1650 (DpiKsrCallback.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C03A0834 (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 */

void __fastcall DpiKsrComplete(void *a1)
{
  __int64 v1; // rcx

  if ( !qword_1C013B9A0
    || (DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrRestoreMemoryCallback, 0LL),
        v1 = 1LL,
        *(_BYTE *)(qword_1C013B9A0 + 28) = 1,
        !qword_1C013B9A0) )
  {
    v1 = 0LL;
  }
  DxgkLogInternalTriageEvent(
    0LL,
    65540,
    -1,
    (__int64)L"KSR Complete routine has called and the driver iteration was %1",
    v1,
    0LL,
    0LL,
    0LL,
    0LL);
}
