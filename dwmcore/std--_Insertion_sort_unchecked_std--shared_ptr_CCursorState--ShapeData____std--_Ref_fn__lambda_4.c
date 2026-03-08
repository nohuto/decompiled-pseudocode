/*
 * XREFs of std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180274EA8
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180275578 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9abf6f.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D8440 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x180274898 (std--_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___--operator()_std--shared_ptr_CCursorStat.c)
 */

__int64 *__fastcall std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *i; // rbx
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rax
  __int64 *v8; // r14
  __int64 *v9; // rbp
  __int64 *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v6 = *i;
      *i = 0LL;
      v12 = v6;
      v7 = (std::_Ref_count_base *)i[1];
      v8 = i;
      i[1] = 0LL;
      v13 = v7;
      v9 = i;
      if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)&v14,
                              (__int64)&v12,
                              a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v10 = v9;
            v9 -= 2;
            std::shared_ptr<CRegion>::operator=(v10, v9);
          }
          while ( v9 != a1 );
        }
        v8 = a1;
      }
      else
      {
        while ( 1 )
        {
          v9 -= 2;
          if ( !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                   (__int64)&v14,
                                   (__int64)&v12,
                                   v9) )
            break;
          std::shared_ptr<CRegion>::operator=(v8, v9);
          v8 = v9;
        }
      }
      std::shared_ptr<CRegion>::operator=(v8, &v12);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
  }
  return a2;
}
