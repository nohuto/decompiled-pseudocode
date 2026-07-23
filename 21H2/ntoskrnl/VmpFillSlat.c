/*
 * XREFs of VmpFillSlat @ 0x1405A36BC
 * Callers:
 *     VmpProcessUpdateSlat @ 0x1405A4C7C (VmpProcessUpdateSlat.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     VmpLogLargeSlatFill @ 0x1405A4270 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405A4368 (VmpLogSparseSlatFill.c)
 *     HvlMapGpaPages @ 0x1405C9C84 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C9DD8 (HvlMapSparseGpaPages.c)
 */

__int64 __fastcall VmpFillSlat(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  int v6; // r9d
  unsigned int v7; // edi
  unsigned int v8; // ebp
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *i; // rcx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx

  v6 = *(_DWORD *)(a1 + 88);
  v7 = a2 | 0x20000;
  v8 = a3;
  if ( (v6 & 1) == 0 )
    v7 = a2;
  if ( a3 != 512 )
    goto LABEL_26;
  if ( (*a4 & 0x1FFLL) != 0 )
    goto LABEL_26;
  v10 = a4 + 1;
  v11 = a4[1];
  if ( (v11 & 0x1FF) != 0 )
    goto LABEL_26;
  v12 = a4 + 1024;
  if ( a4[1022] != *a4 + 511LL || a4[1023] != v11 + 511 )
    goto LABEL_26;
  for ( i = a4 + 2; i < v12 && *i == *(i - 2) + 1LL && i[1] == *(i - 1) + 1LL; i += 2 )
    ;
  if ( i == v12 )
  {
    *(_DWORD *)(a1 + 88) = v6 | 1;
    if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider )
    {
      if ( tlgKeywordOn(VmpTraceLoggingProvider, 1LL) )
        VmpLogLargeSlatFill(v14, *a4, *v10, v7);
    }
    result = HvlMapGpaPages(*(_QWORD *)(a1 + 72), *a4, v7 | 0x2000, 1, (__int64)v10, (__int64)a5);
    *a5 <<= 9;
  }
  else
  {
LABEL_26:
    if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 1LL) )
      VmpLogSparseSlatFill(v16, a4, v8, v7);
    return HvlMapSparseGpaPages(*(_QWORD *)(a1 + 72), v7, v8, (_DWORD)a4, (__int64)a5);
  }
  return result;
}
