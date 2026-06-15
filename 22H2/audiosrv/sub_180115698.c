/*
 * XREFs of sub_180115698 @ 0x180115698
 * Callers:
 *     sub_180115AC0 @ 0x180115AC0 (sub_180115AC0.c)
 * Callees:
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_180115698(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  void *v6; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a3 )
  {
    v6 = (void *)o_malloc(*a3);
    *(_QWORD *)(a1 + 16) = v6;
    if ( v6 )
      memcpy(v6, a3, *a3);
    else
      return (unsigned int)-2147024882;
  }
  return v3;
}
