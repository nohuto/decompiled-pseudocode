/*
 * XREFs of WheapApplyThresholdChecks @ 0x14060E808
 * Callers:
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 * Callees:
 *     WheapGetErrorThresholdInformation @ 0x14060EB3C (WheapGetErrorThresholdInformation.c)
 */

char __fastcall WheapApplyThresholdChecks(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v5; // ecx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+3Ch] [rbp+14h]

  v8 = HIDWORD(a2);
  v7 = 0;
  v6 = 0;
  ++*(_DWORD *)(a1 + 84);
  WheapGetErrorThresholdInformation(a1, &v6, &v7);
  if ( v7 <= 1 )
    return 0;
  v3 = MEMORY[0xFFFFF78000000320];
  if ( v6
    && (unsigned int)KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 72)) / 10000000LL > (unsigned __int64)v6 )
  {
    *(_DWORD *)(a1 + 80) = 1;
    *(_QWORD *)(a1 + 72) = v3;
    return 0;
  }
  v5 = *(_DWORD *)(a1 + 80) + 1;
  *(_DWORD *)(a1 + 80) = v5;
  if ( v5 < v7 )
    return 0;
  *(_DWORD *)(a1 + 80) = 0;
  return 1;
}
