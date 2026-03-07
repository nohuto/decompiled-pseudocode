_QWORD *__fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r9
  _QWORD *v7; // r10
  _QWORD *v8; // r11
  _QWORD *v9; // r9
  _QWORD *v11; // rdi
  _QWORD *v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // r9

  if ( (unsigned __int8)lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator()(a1, a2 + 16, a1 + 16, a1) )
  {
    v8 = v7;
LABEL_6:
    v11 = v7;
    v12 = v6 + 2;
    do
      v7 = (_QWORD *)*v7;
    while ( v7 != a3 && (unsigned __int8)lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator()(v5, v7 + 2, v12, v6) );
    v13 = (_QWORD *)v11[1];
    *v13 = v7;
    v5 = (_QWORD *)v7[1];
    *v5 = v6;
    v14 = (_QWORD *)v6[1];
    *v14 = v11;
    v6[1] = v5;
    v7[1] = v13;
    v11[1] = v14;
    if ( v7 != a3 )
    {
      while ( 1 )
      {
        v15 = (_QWORD *)*v6;
        if ( v15 == v7 )
          break;
        if ( (unsigned __int8)lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator()(v5, v7 + 2, v15 + 2, v15) )
          goto LABEL_6;
      }
    }
  }
  else
  {
    v8 = v5;
    while ( 1 )
    {
      v9 = (_QWORD *)*v6;
      if ( v9 == v7 )
        break;
      if ( (unsigned __int8)lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator()(v5, v4, v9 + 2, v9) )
        goto LABEL_6;
    }
  }
  return v8;
}
