/*
 * XREFs of IsIAMThread @ 0x1C00967E0
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006DD8 (IsAdaptiveQueueDetachExempted.c)
 *     NtUserSetActivationFilter @ 0x1C0011060 (NtUserSetActivationFilter.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00975C4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01C1290 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIAMThread(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 456);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 280) == a1;
  return result;
}
