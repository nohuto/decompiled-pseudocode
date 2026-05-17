/*
 * XREFs of LdrpFreeLoadContextOfNode @ 0x180067B10
 * Callers:
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpFreeLoadContextOfNode @ 0x180067B10 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFreeLoadContextOfNode @ 0x180067B10 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeLoadContext @ 0x180067BA4 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeLoadContextOfNode(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  v3 = (_QWORD *)(*a1 - 160LL);
  result = v3[22];
  if ( result && *(_QWORD *)(result + 40) == a2 )
  {
    while ( 1 )
    {
      LdrpFreeLoadContext(v3[22]);
      v6 = (_QWORD *)v3[20];
      if ( a1 == v6 )
        break;
      v3 = v6 - 20;
    }
    result = v3[19];
    v7 = *(_QWORD **)(result + 40);
    if ( v7 )
    {
      v8 = *(_QWORD **)(result + 40);
      do
      {
        v8 = (_QWORD *)*v8;
        result = LdrpFreeLoadContextOfNode(v8[1], a2);
      }
      while ( v8 != v7 );
    }
  }
  return result;
}
