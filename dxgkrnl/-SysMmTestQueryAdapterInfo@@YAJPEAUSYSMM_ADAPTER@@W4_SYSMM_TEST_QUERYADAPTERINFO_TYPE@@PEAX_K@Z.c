/*
 * XREFs of ?SysMmTestQueryAdapterInfo@@YAJPEAUSYSMM_ADAPTER@@W4_SYSMM_TEST_QUERYADAPTERINFO_TYPE@@PEAX_K@Z @ 0x1C00719F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SysMmTestQueryAdapterInfo(_DWORD *a1, int a2, BOOL *a3, unsigned __int64 a4)
{
  int v4; // r10d
  BOOL v7; // eax
  int v8; // r10d
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx

  v4 = 0;
  if ( a2 || a4 < 4 )
    return 3221225485LL;
  *a3 = 0;
  v7 = dword_1C013BBF8 == 2;
  *a3 = v7;
  if ( dword_1C013BBF8 == 3 )
    v4 = 64;
  v8 = v7 | v4;
  *a3 = v8;
  v9 = v8 | (2 * (a1[22] & 1));
  *a3 = v9;
  v10 = v9 | a1[5] & 4;
  *a3 = v10;
  v11 = v10 | (a1[24] != 0 ? 8 : 0);
  *a3 = v11;
  v12 = v11 | (4 * (a1[22] & 4));
  *a3 = v12;
  *a3 = v12 | (32 * (a1[23] & 1));
  return 0LL;
}
