/*
 * XREFs of PpmUpdateTimeAccumulation @ 0x1402939BC
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x140293988 (PpmContinueActiveTimeAccumulation.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmUpdateTimeAccumulation(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx

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
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 33736), a2 - *(_QWORD *)(a1 + 33720));
    v7 = *(_QWORD *)(a1 + 35232);
    if ( (v7 & 0x8000000000LL) != 0 )
    {
      result = PpmConvertTime(v10, v8 - *(_QWORD *)(a1 + 33688), v9 - *(_QWORD *)(a1 + 33800));
      *(_QWORD *)(a1 + 33808) += result;
      v7 = *(_QWORD *)(a1 + 35232);
    }
  }
  *(_QWORD *)(a1 + 33720) = a2;
  if ( a3 )
  {
    v11 = *(_QWORD *)(a1 + 33688);
    if ( v8 > v11 )
    {
      result = v8 - v11;
      *(_QWORD *)(a1 + 33696) += v8 - v11;
    }
  }
  *(_QWORD *)(a1 + 33688) = v8;
  if ( (v7 & 0x8000000000LL) != 0 )
    *(_QWORD *)(a1 + 33800) = v9;
  return result;
}
