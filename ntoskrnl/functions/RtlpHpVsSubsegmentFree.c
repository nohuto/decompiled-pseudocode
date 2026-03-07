__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2, unsigned int a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
           *(_QWORD *)(a1 + 128) ^ a1,
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           a3);
}
