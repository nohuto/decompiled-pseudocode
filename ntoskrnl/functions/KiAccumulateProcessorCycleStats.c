__int64 __fastcall KiAccumulateProcessorCycleStats(__int64 a1)
{
  unsigned int FrequencyBucket; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // r11

  FrequencyBucket = PoGetFrequencyBucket(a1);
  result = KiGetProcessorEfficiencyClass(a1, v3, v4, FrequencyBucket);
  *(_QWORD *)(a1 + 8 * ((unsigned __int8)result + 2 * v6) + 33408) += v7;
  return result;
}
