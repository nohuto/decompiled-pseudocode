/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x140A57360
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140A56E9C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402C34B0 (RtlpxLookupFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1403723B4 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall RtlCreateInvertedFunctionTableCacheEntry(ULONG_PTR a1, int a2)
{
  ULONG_PTR v3; // rbx
  int v5; // esi
  PVOID v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v5 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( a1 < *(&xmmword_140E00020 + 1) || a1 >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
  {
    v6 = RtlpxLookupFunctionTable(a1, (__int64)&v8);
  }
  else
  {
    v6 = (PVOID)xmmword_140E00020;
    v8 = *(_OWORD *)&xmmword_140E00020;
    v9 = qword_140E00030;
  }
  if ( v6 )
  {
    v3 = *((_QWORD *)&v8 + 1);
    v5 = HIDWORD(v9);
  }
  xmmword_140E00020 = (ULONG_PTR)v6;
  HIDWORD(qword_140E00030) = v5;
  *(&xmmword_140E00020 + 1) = v3;
  LODWORD(qword_140E00030) = a2;
  return RtlRemoveInvertedFunctionTable(a1);
}
