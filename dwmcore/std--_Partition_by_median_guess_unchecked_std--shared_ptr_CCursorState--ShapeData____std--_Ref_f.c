_QWORD *std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        ...)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  _QWORD *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *result; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v6 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
    a2,
    (__int64)v6,
    (__int64)(a3 - 2));
  v7 = v6 + 2;
  if ( a2 < (unsigned __int64)v6 )
  {
    do
    {
      v8 = v6 - 2;
      if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)(v6 - 2),
                              v6) )
        break;
      if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v6,
                              v6 - 2) )
        break;
      v6 -= 2;
    }
    while ( a2 < (unsigned __int64)v8 );
  }
  while ( v7 < a3
       && !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v7,
                              v6)
       && !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v6,
                              v7) )
    v7 += 2;
  v9 = v7;
  v10 = v6;
  while ( 1 )
  {
    while ( v9 < a3 )
    {
      if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v6,
                              v9) )
        goto LABEL_16;
      if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v9,
                              v6) )
        break;
      if ( v7 != v9 )
      {
        v11 = *v7;
        *v7 = *v9;
        v12 = v9[1];
        *v9 = v11;
        v13 = v7[1];
        v7[1] = v12;
        v9[1] = v13;
      }
      v7 += 2;
LABEL_16:
      v9 += 2;
    }
    v14 = v10 == (_QWORD *)a2;
    if ( (unsigned __int64)v10 > a2 )
    {
      v15 = v10 - 2;
      do
      {
        if ( !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                 (__int64)va,
                                 (__int64)v15,
                                 v6) )
        {
          if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                  (__int64)va,
                                  (__int64)v6,
                                  v15) )
            break;
          v6 -= 2;
          if ( v6 != v15 )
          {
            v16 = *v6;
            *v6 = *v15;
            v17 = v15[1];
            *v15 = v16;
            v18 = v6[1];
            v6[1] = v17;
            v15[1] = v18;
          }
        }
        v10 -= 2;
        v15 -= 2;
      }
      while ( a2 < (unsigned __int64)v10 );
      v14 = v10 == (_QWORD *)a2;
    }
    if ( v14 )
      break;
    v10 -= 2;
    if ( v9 != a3 )
    {
      v32 = *v9;
      *v9 = *v10;
      v33 = v10[1];
      *v10 = v32;
      v34 = v9[1];
      v9[1] = v33;
      v10[1] = v34;
      goto LABEL_16;
    }
    v6 -= 2;
    v25 = v6 + 1;
    if ( v10 != v6 )
    {
      v26 = *v10;
      *v10 = *v6;
      v27 = *v25;
      *v6 = v26;
      v28 = v10[1];
      v10[1] = v27;
      *v25 = v28;
    }
    v29 = *v6;
    v7 -= 2;
    *v6 = *v7;
    v30 = v7[1];
    *v7 = v29;
    v31 = *v25;
    *v25 = v30;
    v7[1] = v31;
  }
  if ( v9 != a3 )
  {
    if ( v7 != v9 )
    {
      v19 = *v6;
      *v6 = *v7;
      v20 = v7[1];
      *v7 = v19;
      v21 = v6[1];
      v6[1] = v20;
      v7[1] = v21;
    }
    v22 = *v6;
    v7 += 2;
    *v6 = *v9;
    v23 = v9[1];
    *v9 = v22;
    v24 = v6[1];
    v6[1] = v23;
    v6 += 2;
    v9[1] = v24;
    goto LABEL_16;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
