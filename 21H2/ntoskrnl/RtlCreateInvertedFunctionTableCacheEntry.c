/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x140A56360
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140A55E9C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14021EBB0 (RtlpxLookupFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x140372864 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall RtlCreateInvertedFunctionTableCacheEntry(ULONG_PTR a1, int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rbx
  int v7; // esi
  PVOID v8; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v7 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a1 < *(&xmmword_140E00020 + 1) || a1 >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
  {
    v8 = RtlpxLookupFunctionTable(a1, (unsigned __int64)&v10, a3, a4);
  }
  else
  {
    v8 = (PVOID)xmmword_140E00020;
    v10 = *(_OWORD *)&xmmword_140E00020;
    v11 = qword_140E00030;
  }
  if ( v8 )
  {
    v5 = *((_QWORD *)&v10 + 1);
    v7 = HIDWORD(v11);
  }
  xmmword_140E00020 = (ULONG_PTR)v8;
  HIDWORD(qword_140E00030) = v7;
  *(&xmmword_140E00020 + 1) = v5;
  LODWORD(qword_140E00030) = a2;
  return RtlRemoveInvertedFunctionTable(a1);
}
