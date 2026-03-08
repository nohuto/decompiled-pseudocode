/*
 * XREFs of VmpFillSlat @ 0x1405F6C78
 * Callers:
 *     VmpProcessUpdateSlat @ 0x1405F874C (VmpProcessUpdateSlat.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     VmpLogLargeSlatFill @ 0x1405F78B4 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405F79AC (VmpLogSparseSlatFill.c)
 *     HvlMapGpaPages @ 0x140676A60 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140676BD4 (HvlMapSparseGpaPages.c)
 */

__int64 __fastcall VmpFillSlat(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v6; // esi
  _QWORD *v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *i; // rcx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx

  v6 = a3;
  if ( a3 != 512 )
    goto LABEL_17;
  if ( (*a4 & 0x1FFLL) != 0 )
    goto LABEL_17;
  v9 = a4 + 1;
  v10 = a4[1];
  if ( (v10 & 0x1FF) != 0 )
    goto LABEL_17;
  v11 = a4 + 1024;
  if ( a4[1022] != *a4 + 511LL || a4[1023] != v10 + 511 )
    goto LABEL_17;
  for ( i = a4 + 2; i < v11; i += 2 )
  {
    if ( *i != *(i - 2) + 1LL )
      goto LABEL_17;
    if ( i[1] != *(i - 1) + 1LL )
      break;
  }
  if ( i == v11 )
  {
    *(_WORD *)(a1 + 104) |= 1u;
    if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider )
    {
      if ( tlgKeywordOn(VmpTraceLoggingProvider, 1LL) )
        VmpLogLargeSlatFill(v13, *a4, *v9, a2);
    }
    result = HvlMapGpaPages(*(_QWORD *)(a1 + 72), *a4, a2 | 0x80000000, 1, (__int64)v9, (__int64)a5);
    *a5 <<= 9;
  }
  else
  {
LABEL_17:
    if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 1LL) )
      VmpLogSparseSlatFill(v15, a4, v6, a2);
    return HvlMapSparseGpaPages(*(_QWORD *)(a1 + 72), a2, v6, (_DWORD)a4, (__int64)a5);
  }
  return result;
}
