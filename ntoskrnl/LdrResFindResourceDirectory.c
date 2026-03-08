/*
 * XREFs of LdrResFindResourceDirectory @ 0x14079B240
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResourceDirectory(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (a7 & 0xC00) != 0 )
    return 3221225485LL;
  v8 = v11[0];
  if ( a2 )
    v8 = a2;
  v11[0] = v8;
  v9 = a2 != 0;
  if ( a3 )
  {
    v11[1] = a3;
    v9 = 2LL;
  }
  return LdrResSearchResource(a1, v11, v9, a7 | 2u, a4, 0LL, a5, a6);
}
