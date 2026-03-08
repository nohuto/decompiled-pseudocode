/*
 * XREFs of ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C01846B0
 * Callers:
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0189D98 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C0002B7C (bFToL.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C01845D8 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::vScale(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebp
  __int64 result; // rax
  unsigned int v6; // r8d
  _DWORD *v7; // rbx
  __int64 i; // rsi
  int v9; // eax
  int v10; // eax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF

  v2 = *a1;
  v11 = a2;
  v4 = *(_DWORD *)(v2 + 52);
  result = SGDGetSessionState(a1);
  if ( v4 > 1 )
  {
    v6 = 6;
    v7 = *(_DWORD **)(*a1 + 32);
    do
    {
      for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
        bFToL((float)(int)v7[i + 3] * *(float *)&v11, &v7[i + 3], v6);
      v9 = v7[1];
      if ( v9 != 0x80000000 )
        bFToL((float)v9 * *((float *)&v11 + 1), v7 + 1, v6);
      v10 = v7[2];
      if ( v10 != 0x7FFFFFFF )
        bFToL((float)v10 * *((float *)&v11 + 1), v7 + 2, v6);
      v7 = (_DWORD *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
      --v4;
    }
    while ( v4 );
    v12 = *(_OWORD *)(*a1 + 56);
    ERECTL::vScale((ERECTL *)&v12, (const struct POINTFL *)&v11);
    result = *a1;
    *(_OWORD *)(*a1 + 56) = v12;
  }
  return result;
}
