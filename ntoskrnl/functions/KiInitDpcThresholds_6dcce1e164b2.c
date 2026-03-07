__int64 KiInitDpcThresholds()
{
  unsigned int v0; // r8d
  unsigned int v1; // r9d
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax
  int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax

  v0 = KeDpcWatchdogPeriodMs;
  if ( (unsigned int)(KeDpcWatchdogPeriodMs - 1) <= 0x7CE )
  {
    v0 = 2000;
    KeDpcWatchdogPeriodMs = 2000;
  }
  v1 = KeDpcTimeoutMs;
  if ( (unsigned int)(KeDpcTimeoutMs - 1) <= 0x12 )
  {
    v1 = 20;
    KeDpcTimeoutMs = 20;
  }
  v2 = KeDpcSoftTimeoutMs;
  if ( KeDpcSoftTimeoutMs )
  {
    if ( (unsigned int)KeDpcSoftTimeoutMs < 0x14 )
    {
      v2 = 20;
      KeDpcSoftTimeoutMs = 20;
    }
    if ( v1 && v2 > v1 )
    {
      v2 = v1;
      KeDpcSoftTimeoutMs = v1;
    }
  }
  v3 = KeDpcCumulativeSoftTimeoutMs;
  if ( KeDpcCumulativeSoftTimeoutMs )
  {
    if ( (unsigned int)KeDpcCumulativeSoftTimeoutMs < 0x7D0 )
    {
      v3 = 2000;
      KeDpcCumulativeSoftTimeoutMs = 2000;
    }
    if ( v0 && v3 > v0 )
    {
      v3 = v0;
      KeDpcCumulativeSoftTimeoutMs = v0;
    }
  }
  if ( (unsigned int)(KeDpcWatchdogProfileSingleDpcThresholdMs - 1) <= 0xFFFFFFFD )
  {
    v7 = v2;
    if ( (v2 || (v7 = v1) != 0) && KeDpcWatchdogProfileSingleDpcThresholdMs > v7 )
      KeDpcWatchdogProfileSingleDpcThresholdMs = v2;
  }
  if ( (unsigned int)(KeDpcWatchdogProfileCumulativeDpcThresholdMs - 1) <= 0xFFFFFFFD )
  {
    v8 = v3;
    if ( (v3 || (v8 = v0) != 0) && KeDpcWatchdogProfileCumulativeDpcThresholdMs > v8 )
      KeDpcWatchdogProfileCumulativeDpcThresholdMs = v3;
  }
  KiInitializeLegacyWatchdogProfileThresholds();
  result = (unsigned int)KeDpcWatchdogProfileSingleDpcThresholdMs;
  if ( KeDpcWatchdogProfileSingleDpcThresholdMs == -1 )
  {
    result = 0LL;
    KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
  }
  v5 = KeDpcWatchdogProfileCumulativeDpcThresholdMs;
  if ( KeDpcWatchdogProfileCumulativeDpcThresholdMs == -1 )
  {
    v5 = 0;
    KeDpcWatchdogProfileCumulativeDpcThresholdMs = 0;
  }
  v6 = KeDpcWatchdogProfileBufferSizeBytes;
  if ( KeDpcWatchdogProfileBufferSizeBytes != -1 )
  {
    result = (unsigned int)(KeDpcWatchdogProfileBufferSizeBytes - 1);
    if ( (unsigned int)result > 0x1FFE )
      goto LABEL_25;
    v6 = 0x2000;
LABEL_38:
    KeDpcWatchdogProfileBufferSizeBytes = v6;
    goto LABEL_25;
  }
  v6 = 0;
  KeDpcWatchdogProfileBufferSizeBytes = 0;
  if ( (_DWORD)result || v5 )
  {
    v6 = 266240;
    goto LABEL_38;
  }
LABEL_25:
  dword_140D1D34C = v6 >> 3;
  return result;
}
