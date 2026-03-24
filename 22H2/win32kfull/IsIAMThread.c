/*
 * XREFs of IsIAMThread @ 0x1C003CE58
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C00080B0 (NtUserSetActivationFilter.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C003CDA0 (IsAdaptiveQueueDetachExempted.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00D7420 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EA720 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
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
    return *(_QWORD *)(v1 + 288) == a1;
  return result;
}
