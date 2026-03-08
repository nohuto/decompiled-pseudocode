/*
 * XREFs of ?AddSasKey@@YAHII@Z @ 0x1C00F46E0
 * Callers:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddSasKey(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rcx

  v2 = 0LL;
  v4 = 0LL;
  v5 = a1;
  do
  {
    if ( !*(_DWORD *)(v4 + SGDGetUserSessionState(a1) + 13804) )
    {
      *(_DWORD *)(SGDGetUserSessionState(a1) + 8 * v2 + 13804) = v5;
      *(_DWORD *)(SGDGetUserSessionState(v6) + 8 * v2 + 13800) = a2;
      return 1LL;
    }
    v2 = (unsigned int)(v2 + 1);
    v4 += 8LL;
  }
  while ( (unsigned int)v2 < 2 );
  return 0LL;
}
