/*
 * XREFs of PpmUpdateTimeAccumulation @ 0x140235C64
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x140234F00 (PpmSnapPerformanceAccumulation.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140236CD0 (PpmContinueActiveTimeAccumulation.c)
 * Callees:
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 */

__int64 __fastcall PpmUpdateTimeAccumulation(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx

  v5 = a1;
  result = __rdtsc();
  v7 = *(_QWORD *)(a1 + 35232);
  v8 = result;
  if ( (v7 & 0x8000000000LL) != 0 )
  {
    result = __readmsr(0xDB2u);
    v9 = result;
  }
  else
  {
    v9 = 0LL;
  }
  if ( a3 )
  {
    v10 = a2 - *(_QWORD *)(a1 + 33720);
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 33736), a2 - *(_QWORD *)(v5 + 33720));
    v7 = *(_QWORD *)(v5 + 35232);
    if ( (v7 & 0x8000000000LL) != 0 )
    {
      result = PpmConvertTime(v10, v8 - *(_QWORD *)(v5 + 33688), v9 - *(_QWORD *)(v5 + 33800));
      *(_QWORD *)(v5 + 33808) += result;
      v7 = *(_QWORD *)(v5 + 35232);
    }
  }
  *(_QWORD *)(v5 + 33720) = a2;
  if ( a3 )
  {
    v11 = *(_QWORD *)(v5 + 33688);
    if ( v8 > v11 )
    {
      result = v8 - v11;
      *(_QWORD *)(v5 + 33696) += v8 - v11;
    }
  }
  *(_QWORD *)(v5 + 33688) = v8;
  if ( (v7 & 0x8000000000LL) != 0 )
    *(_QWORD *)(v5 + 33800) = v9;
  return result;
}
