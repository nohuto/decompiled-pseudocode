/*
 * XREFs of IsDebuggerAttached @ 0x1C003CE18
 * Callers:
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CA90 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C003CDA0 (IsAdaptiveQueueDetachExempted.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C003DBBC (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     SlowAppThreadInShellFrame @ 0x1C0124CD4 (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01E1CA4 (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 221) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
