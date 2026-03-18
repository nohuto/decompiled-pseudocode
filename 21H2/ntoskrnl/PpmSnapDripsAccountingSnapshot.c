/*
 * XREFs of PpmSnapDripsAccountingSnapshot @ 0x140399210
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopDiagTraceDripsHistogram @ 0x1405D1C98 (PopDiagTraceDripsHistogram.c)
 *     PpmEventTraceDripsAccountingSnapshot @ 0x14099A918 (PpmEventTraceDripsAccountingSnapshot.c)
 */

__int64 __fastcall PpmSnapDripsAccountingSnapshot(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // r9d
  _QWORD v12[26]; // [rsp+30h] [rbp-108h] BYREF

  result = (unsigned int)dword_140C542C0;
  v5 = 0LL;
  v6 = PopWnfCsEnterScenarioId;
  if ( PpmPlatformStates && dword_140C542C0 != -1 )
  {
    v8 = 26LL;
    v9 = (_QWORD *)(1008LL * (unsigned int)dword_140C542C0 + *(_QWORD *)(PpmPlatformStates + 48) + 200LL);
    do
    {
      v12[v5] = PpmConvertTime(
                  *v9 - *(_QWORD *)((char *)&PpmDripsAccountingSnapshot + v5 * 8),
                  PopQpcFrequency,
                  0x989680uLL);
      ++v5;
      v9 += 4;
      --v8;
    }
    while ( v8 );
    PpmEventTraceDripsAccountingSnapshot(v10, v12);
    return PopDiagTraceDripsHistogram(v6, a2, a3, v11, (__int64)v12);
  }
  return result;
}
