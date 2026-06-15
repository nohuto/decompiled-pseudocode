/*
 * XREFs of sub_18010A184 @ 0x18010A184
 * Callers:
 *     sub_18010A398 @ 0x18010A398 (sub_18010A398.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010A184(__int64 a1, int *a2, int *a3, __int64 *a4)
{
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // eax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_180155A28;
  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 16) = 1500000LL;
  *(_DWORD *)(a1 + 32) = v7;
  *(_DWORD *)(a1 + 36) = v6;
  if ( v5 > 0 )
    *(_QWORD *)(a1 + 24) = 100000
                         * (((__int64)((unsigned __int128)((v5 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 14)
                          + ((unsigned __int64)((unsigned __int128)((v5 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 63)
                          + 1);
  return a1;
}
