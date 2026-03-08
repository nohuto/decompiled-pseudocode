/*
 * XREFs of std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x180048E90
 * Callers:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x180048E00 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 * Callees:
 *     <none>
 */

float *__fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
        float *a1,
        float *a2,
        __int64 *a3)
{
  float *v3; // r10
  float *v4; // r9
  float *v5; // r11
  float *v7; // rbx
  float **v8; // rdx
  float **v9; // rcx
  float **v10; // rax

  v3 = a2;
  v4 = a1;
  if ( a1[6] > a2[6] )
  {
    v5 = a2;
LABEL_8:
    v7 = v3;
    do
      v3 = *(float **)v3;
    while ( v3 != (float *)a3 && v4[6] > v3[6] );
    v8 = (float **)*((_QWORD *)v7 + 1);
    *v8 = v3;
    v9 = (float **)*((_QWORD *)v3 + 1);
    *v9 = v4;
    v10 = (float **)*((_QWORD *)v4 + 1);
    *v10 = v7;
    *((_QWORD *)v4 + 1) = v9;
    *((_QWORD *)v3 + 1) = v8;
    *((_QWORD *)v7 + 1) = v10;
    if ( v3 != (float *)a3 )
    {
      while ( 1 )
      {
        v4 = *(float **)v4;
        if ( v4 == v3 )
          break;
        if ( v4[6] > v3[6] )
          goto LABEL_8;
      }
    }
  }
  else
  {
    v5 = a1;
    while ( 1 )
    {
      v4 = *(float **)v4;
      if ( v4 == a2 )
        break;
      if ( v4[6] > a2[6] )
        goto LABEL_8;
    }
  }
  return v5;
}
