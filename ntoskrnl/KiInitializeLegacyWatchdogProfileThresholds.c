/*
 * XREFs of KiInitializeLegacyWatchdogProfileThresholds @ 0x140B6DCB4
 * Callers:
 *     KiInitDpcThresholds @ 0x140B6DBB4 (KiInitDpcThresholds.c)
 * Callees:
 *     <none>
 */

void KiInitializeLegacyWatchdogProfileThresholds()
{
  unsigned int v0; // r8d
  unsigned int v1; // r9d
  int v2; // eax
  unsigned int v3; // ecx

  v0 = KeDpcWatchdogProfileOffsetMs;
  if ( KeDpcWatchdogProfileOffsetMs
    && KeDpcWatchdogPeriodMs
    && KeDpcTimeoutMs
    && KeDpcTimeoutMs < (unsigned int)KeDpcWatchdogPeriodMs
    && KeDpcWatchdogProfileSingleDpcThresholdMs == -1
    && KeDpcWatchdogProfileCumulativeDpcThresholdMs == -1 )
  {
    if ( (unsigned int)KeDpcWatchdogProfileOffsetMs <= 0x3E8 )
      v0 = 1000;
    if ( v0 > KeDpcWatchdogPeriodMs )
    {
      v0 = 10000;
      if ( (unsigned int)KeDpcWatchdogPeriodMs <= 0x2710 )
        v0 = 1000;
    }
    v1 = KeDpcWatchdogPeriodMs - v0;
    KeDpcWatchdogProfileCumulativeDpcThresholdMs = KeDpcWatchdogPeriodMs - v0;
    v2 = KeDpcWatchdogPeriodMs - v0;
    if ( KeDpcWatchdogPeriodMs - v0 < 0x3E8 )
    {
      v1 = 1000;
      KeDpcWatchdogProfileCumulativeDpcThresholdMs = 1000;
      v2 = 1000;
    }
    v3 = KeDpcTimeoutMs * v2 / (unsigned int)KeDpcWatchdogPeriodMs;
    if ( (unsigned int)(KeDpcTimeoutMs * v2) / (unsigned __int64)(unsigned int)KeDpcWatchdogPeriodMs > 0xFFFFFFFF )
      v3 = -1;
    KeDpcWatchdogProfileSingleDpcThresholdMs = v3;
    if ( KeDpcTimeoutMs - v3 > v0 )
    {
      KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
      v3 = 0;
    }
    if ( KeDpcSoftTimeoutMs && v3 > KeDpcSoftTimeoutMs )
      KeDpcWatchdogProfileSingleDpcThresholdMs = KeDpcSoftTimeoutMs;
    if ( KeDpcCumulativeSoftTimeoutMs && v1 > KeDpcCumulativeSoftTimeoutMs )
      KeDpcWatchdogProfileCumulativeDpcThresholdMs = KeDpcCumulativeSoftTimeoutMs;
    if ( KeDpcWatchdogProfileBufferSizeBytes == -1 )
      KeDpcWatchdogProfileBufferSizeBytes = 26624 * (v0 / 0x3E8);
  }
}
