/*
 * XREFs of ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C01686FC
 * Callers:
 *     FreeTimer @ 0x1C000B6C0 (FreeTimer.c)
 *     NtUserKillTimer @ 0x1C000B860 (NtUserKillTimer.c)
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     InternalSetTimer @ 0x1C0080820 (InternalSetTimer.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DecTimerCountAndClearReadyFlag(struct tagTIMER *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 **v5; // rcx

  *((_DWORD *)a1 + 12) &= ~1u;
  v1 = (__int64 *)((char *)a1 + 56);
  v2 = *((_QWORD *)a1 + 7);
  v4 = *((_QWORD *)a1 + 3);
  if ( (struct tagTIMER *)v2 == (struct tagTIMER *)((char *)a1 + 56) || *((__int64 **)a1 + 8) == v1 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5970LL);
    v2 = *v1;
  }
  if ( *(__int64 **)(v2 + 8) != v1 || (v5 = (__int64 **)*((_QWORD *)a1 + 8), *v5 != v1) )
    __fastfail(3u);
  *v5 = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = v5;
  *((_QWORD *)a1 + 8) = v1;
  *v1 = (__int64)v1;
  if ( (*(_DWORD *)(v4 + 604))-- == 1 )
    *(_WORD *)(*(_QWORD *)(v4 + 448) + 6LL) &= ~0x10u;
}
