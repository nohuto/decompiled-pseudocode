/*
 * XREFs of ??$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z @ 0x1804E799C
 * Callers:
 *     _DSA_MaybeShrink @ 0x18014FAF0 (_DSA_MaybeShrink.c)
 *     _DSA_ReAlloc @ 0x1804E7A04 (_DSA_ReAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCv6s_HeapReallocArray<void>(
        void *a1,
        __int64 a2,
        void *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  unsigned __int128 v7; // rax
  LPVOID v8; // rax

  v6 = 0;
  v7 = a4 * (unsigned __int128)a5;
  if ( is_mul_ok(a4, a5) )
  {
    if ( a3 )
      v8 = HeapReAlloc(a1, DWORD2(v7), a3, a4 * a5);
    else
      v8 = HeapAlloc(a1, DWORD2(v7), a4 * a5);
    if ( v8 )
      *a6 = v8;
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v6;
}
