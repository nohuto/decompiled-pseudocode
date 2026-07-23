/*
 * XREFs of SeAccessCheckFromStateEx @ 0x1402544E0
 * Callers:
 *     SeAccessCheckFromState @ 0x1402543D0 (SeAccessCheckFromState.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1403589C0 (SeAccessCheckWithHint.c)
 */

__int64 __fastcall SeAccessCheckFromStateEx(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  int v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+60h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp-18h]
  __int64 v15; // [rsp+78h] [rbp-10h]

  v14 = a2;
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  if ( a3 )
  {
    LODWORD(v13) = *(_DWORD *)(a3 + 196);
    v12 = a3;
  }
  v11 = a4;
  LOBYTE(a4) = 1;
  return SeAccessCheckWithHint(a1, 0, (unsigned int)&v12, a4, v11, a5, a6, a7, a8, a9, a10);
}
