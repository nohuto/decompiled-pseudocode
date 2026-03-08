/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1800DA880
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800DA970 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(CExpression *this, const struct ExpressionWalkContext *a2)
{
  __int64 v2; // rdi
  __int64 i; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  _QWORD *v9; // rax
  void *v10; // rbx
  _QWORD *v11; // rbp
  __int64 j; // rbx
  void *v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-48h]
  __int128 Buffer; // [rsp+30h] [rbp-38h] BYREF
  void *v16; // [rsp+40h] [rbp-28h]

  v2 = 0LL;
  for ( i = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
        (unsigned int)v2 < *((_DWORD *)this + 110);
        v2 = (unsigned int)(v2 + 1) )
  {
    v6 = *((_QWORD *)this + 54);
    v7 = *(_QWORD *)(*((_QWORD *)this + 52) + 8LL * *(unsigned int *)(v6 + 24 * v2 + 20));
    if ( v7 )
    {
      v8 = *(_DWORD *)(v6 + 24 * v2);
      v16 = 0LL;
      DWORD2(v14) = v8;
      *(_QWORD *)&v14 = v7;
      Buffer = v14;
      v9 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(i + 328), &Buffer);
      v10 = v16;
      v11 = v9;
      while ( v10 )
      {
        v13 = v10;
        v10 = (void *)*((_QWORD *)v10 + 2);
        operator delete(v13, 0x18uLL);
      }
      if ( v11 )
      {
        for ( j = v11[2]; j; j = *(_QWORD *)(j + 16) )
          CBaseExpression::InsertInOrder(*(CBaseExpression **)(j + 8), a2);
      }
    }
  }
}
