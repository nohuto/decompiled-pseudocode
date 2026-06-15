/*
 * XREFs of sub_180034ED0 @ 0x180034ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_180034ED0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  void *v3; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r9
  void *v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  *a2 = 0;
  *a3 = 0LL;
  if ( *(int *)(a1 + 64) <= 0 )
    return 0LL;
  v7 = *(int *)(a1 + 64);
  v8 = -1LL;
  if ( v7 != 1 )
    v8 = 0xFFFFFFFFFFFFFFFFuLL / v7;
  if ( v8 >= 0x10 )
  {
    v9 = 16 * v7;
    if ( v9 <= 0x7FFFFFFF )
    {
      v10 = CoTaskMemAlloc((unsigned int)v9);
      v3 = v10;
      if ( v10 )
      {
        memcpy(v10, *(const void **)(a1 + 56), 16LL * *(int *)(a1 + 64));
        *a3 = v3;
        *a2 = *(_DWORD *)(a1 + 64);
        CoTaskMemFree(0LL);
        return 0LL;
      }
    }
  }
  sub_18004BD84(retaddr, 722LL, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
  CoTaskMemFree(v3);
  return 2147942414LL;
}
