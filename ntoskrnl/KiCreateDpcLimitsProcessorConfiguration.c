/*
 * XREFs of KiCreateDpcLimitsProcessorConfiguration @ 0x14037FEF0
 * Callers:
 *     KeUpdateDpcWatchdogConfiguration @ 0x140568BB0 (KeUpdateDpcWatchdogConfiguration.c)
 *     KiInitializeProcessor @ 0x140A8BBD4 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiCreateDpcLimitsProcessorConfiguration(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  v3 = (unsigned int)KeMaximumIncrement;
  v4 = (10000LL * (unsigned int)KeDpcWatchdogPeriodMs + (unsigned __int64)(unsigned int)KeMaximumIncrement - 1)
     / (unsigned int)KeMaximumIncrement;
  if ( v4 > 0xFFFFFFFF )
    LODWORD(v4) = -1;
  *(_DWORD *)(a1 + 4) = v4;
  v5 = (10000LL * (unsigned int)KeDpcTimeoutMs + v3 - 1) / v3;
  if ( v5 > 0xFFFFFFFF )
    LODWORD(v5) = -1;
  *(_DWORD *)a1 = v5;
  v6 = (10000LL * (unsigned int)KeDpcWatchdogProfileCumulativeDpcThresholdMs + v3 - 1) / v3;
  if ( v6 > 0xFFFFFFFF )
    LODWORD(v6) = -1;
  *(_DWORD *)(a1 + 20) = v6;
  v7 = (10000LL * (unsigned int)KeDpcWatchdogProfileSingleDpcThresholdMs + v3 - 1) / v3;
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  *(_DWORD *)(a1 + 16) = v7;
  v8 = (10000LL * (unsigned int)KeDpcSoftTimeoutMs + v3 - 1) / v3;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  *(_DWORD *)(a1 + 8) = v8;
  result = (10000LL * (unsigned int)KeDpcCumulativeSoftTimeoutMs + v3 - 1) / v3;
  if ( result > 0xFFFFFFFF )
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
