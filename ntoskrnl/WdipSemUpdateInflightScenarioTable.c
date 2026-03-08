/*
 * XREFs of WdipSemUpdateInflightScenarioTable @ 0x1409DB118
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409DAEA4 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     WdipSemFastAllocate @ 0x14083362C (WdipSemFastAllocate.c)
 *     WdipSemQueryInflightScenarioTable @ 0x1409DAFF4 (WdipSemQueryInflightScenarioTable.c)
 */

__int64 __fastcall WdipSemUpdateInflightScenarioTable(_QWORD *a1, __int16 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 InflightScenarioTable; // rax
  __int64 v10; // rdx
  PSLIST_ENTRY v11; // rax
  struct _SLIST_ENTRY v12; // xmm0

  v4 = 0;
  if ( a1 && a3 && a4 )
  {
    InflightScenarioTable = WdipSemQueryInflightScenarioTable(a1, a2, a3);
    v10 = InflightScenarioTable;
    if ( InflightScenarioTable )
    {
      ++*(_DWORD *)(InflightScenarioTable + 20);
    }
    else
    {
      if ( a3[250] >= 0x7Du )
        return (unsigned int)-1073741823;
      v11 = WdipSemFastAllocate(5, 0x18u);
      v10 = (__int64)v11;
      if ( !v11 )
        return (unsigned int)-1073741670;
      *v11 = 0LL;
      v11[1].Next = 0LL;
      v12 = *(struct _SLIST_ENTRY *)a1;
      LOWORD(v11[1].Next) = a2;
      HIDWORD(v11[1].Next) = 1;
      *v11 = v12;
      *(_QWORD *)&a3[2 * a3[250]++] = v11;
    }
    if ( !*(_QWORD *)a4 || *(_DWORD *)(v10 + 20) > *(_DWORD *)(*(_QWORD *)a4 + 20LL) )
      *(_QWORD *)a4 = v10;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
