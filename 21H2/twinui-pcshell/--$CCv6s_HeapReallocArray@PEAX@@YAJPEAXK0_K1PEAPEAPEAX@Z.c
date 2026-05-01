/*
 * XREFs of ??$CCv6s_HeapReallocArray@PEAX@@YAJPEAXK0_K1PEAPEAPEAX@Z @ 0x1804F780C
 * Callers:
 *     DPA_Grow @ 0x1804F7A70 (DPA_Grow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCv6s_HeapReallocArray<void *>(
        void *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  SIZE_T v6; // rax
  unsigned int v7; // ebx
  LPVOID v8; // rax

  v6 = 8 * a5;
  v7 = 0;
  if ( is_mul_ok(8uLL, a5) )
  {
    if ( a3 )
      v8 = HeapReAlloc(a1, 8u, a3, v6);
    else
      v8 = HeapAlloc(a1, 8u, v6);
    if ( v8 )
      *a6 = v8;
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v7;
}
