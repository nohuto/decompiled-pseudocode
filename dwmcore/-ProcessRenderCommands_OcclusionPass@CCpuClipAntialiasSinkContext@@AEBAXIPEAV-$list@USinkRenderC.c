/*
 * XREFs of ?ProcessRenderCommands_OcclusionPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180085C98
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180090A0C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$?0GGMGM@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@1@$$QEAG1$$QEAM12@Z @ 0x1800DF508 (--$-0GGMGM@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PE.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_OcclusionPass(
        __int64 a1,
        unsigned int a2,
        _QWORD **a3)
{
  __int16 v3; // r15
  __int64 **v4; // rdi
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int16 v8; // ax
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  float *v11; // rcx
  int v12; // esi
  __int64 v13; // r14
  __int64 v14; // r13
  float *v15; // rbx
  __int64 v16; // rax
  float v17; // xmm6_4
  float v18; // xmm7_4
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // ecx
  _QWORD **v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rax
  int v27; // xmm0_4
  __int64 *v28; // rcx
  float *v29; // rdi
  float *v30; // rcx
  float *v31; // rbx
  int v32; // [rsp+48h] [rbp-39h] BYREF
  int v33; // [rsp+4Ch] [rbp-35h] BYREF
  __int64 v34; // [rsp+50h] [rbp-31h] BYREF
  _QWORD *v35; // [rsp+58h] [rbp-29h]
  void *v36; // [rsp+60h] [rbp-21h] BYREF
  __int64 v37; // [rsp+68h] [rbp-19h]
  __int64 v38; // [rsp+E8h] [rbp+67h] BYREF
  __int16 v39; // [rsp+F0h] [rbp+6Fh] BYREF
  _QWORD **v40; // [rsp+F8h] [rbp+77h]
  __int16 v41; // [rsp+100h] [rbp+7Fh] BYREF

  v40 = a3;
  v3 = a2;
  v4 = a3;
  v37 = 0LL;
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL * a2);
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v32 = (int)FLOAT_1_0;
  *v6 = v6;
  v6[1] = v6;
  v36 = v6;
  v7 = *(_QWORD *)(*v5 + 32LL);
  if ( v7 )
    v8 = *(_WORD *)(v7 + 16);
  else
    v8 = 0;
  v39 = v8;
  v33 = 0;
  LOWORD(v38) = 0;
  v41 = v3;
  if ( v37 == 0x7FFFFFFFFFFFFFFLL )
LABEL_28:
    std::_Xlength_error("list too long");
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>>(
    (unsigned int)&v34,
    (unsigned int)&v36,
    (unsigned int)&v41,
    (unsigned int)&v38,
    (__int64)&v33,
    (__int64)&v39,
    (__int64)&v32);
  ++v37;
  v9 = v35;
  v10 = (_QWORD *)v6[1];
  *v35 = v6;
  v9[1] = v10;
  v6[1] = v9;
  *v10 = v9;
  v11 = (float *)v36;
  v12 = -858993459 * ((__int64)(v5[2] - v5[1]) >> 3) - 1;
  v13 = 40LL * v12;
  while ( v37 && v12 >= 0 )
  {
    v14 = v5[1];
    v15 = *(float **)v11;
    v16 = *(_QWORD *)(v13 + v14);
    v38 = v16;
    do
    {
      if ( v15 == v11 )
        break;
      v17 = fminf(*(float *)(v16 + 96), v15[6]);
      v18 = fmaxf(*(float *)(v16 + 92), v15[5]);
      LOWORD(v34) = v3;
      *(float *)&v35 = v17;
      *((float *)&v34 + 1) = v18;
      if ( v18 >= v17 )
        goto LABEL_21;
      if ( *(_BYTE *)(v13 + v14 + 32) )
      {
        v19 = **v4;
        if ( v40[1] == (_QWORD *)0x7FFFFFFFFFFFFFFLL )
          goto LABEL_28;
        v20 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
        v21 = (int)v35;
        *(_QWORD *)(v20 + 20) = v34;
        *(_DWORD *)(v20 + 28) = v21;
        v22 = v40;
        *(_DWORD *)(v20 + 16) = v12;
        v22[1] = (_QWORD *)((char *)v22[1] + 1);
        v23 = *(__int64 **)(v19 + 8);
        *(_QWORD *)v20 = v19;
        *(_QWORD *)(v20 + 8) = v23;
        *(_QWORD *)(v19 + 8) = v20;
        *v23 = v20;
        v11 = (float *)v36;
        v16 = v38;
      }
      if ( *(_BYTE *)(v13 + v14 + 33) )
      {
        if ( v18 > v15[5] )
        {
          if ( v37 == 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_28;
          v24 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
          *(float *)(v24 + 20) = v15[5];
          *(float *)(v24 + 24) = v18;
          *(_WORD *)(v24 + 16) = v3;
          ++v37;
          v25 = (__int64 *)*((_QWORD *)v15 + 1);
          *(_QWORD *)v24 = v15;
          *(_QWORD *)(v24 + 8) = v25;
          *((_QWORD *)v15 + 1) = v24;
          *v25 = v24;
        }
        if ( v15[6] > v17 )
        {
          if ( v37 == 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_28;
          v26 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
          v27 = *((_DWORD *)v15 + 6);
          *(float *)(v26 + 20) = v17;
          *(_DWORD *)(v26 + 24) = v27;
          *(_WORD *)(v26 + 16) = v3;
          ++v37;
          v28 = (__int64 *)*((_QWORD *)v15 + 1);
          *(_QWORD *)v26 = v15;
          *(_QWORD *)(v26 + 8) = v28;
          *((_QWORD *)v15 + 1) = v26;
          *v28 = v26;
        }
        v29 = *(float **)v15;
        **((_QWORD **)v15 + 1) = *(_QWORD *)v15;
        *(_QWORD *)(*(_QWORD *)v15 + 8LL) = *((_QWORD *)v15 + 1);
        --v37;
        operator delete(v15, 0x20uLL);
        v11 = (float *)v36;
        v15 = v29;
        v16 = v38;
      }
      else
      {
LABEL_21:
        v15 = *(float **)v15;
      }
      v4 = v40;
    }
    while ( *(float *)(v16 + 96) != v17 );
    --v12;
    v13 -= 40LL;
  }
  **((_QWORD **)v11 + 1) = 0LL;
  v30 = *(float **)v11;
  if ( v30 )
  {
    do
    {
      v31 = *(float **)v30;
      operator delete(v30, 0x20uLL);
      v30 = v31;
    }
    while ( v31 );
  }
  operator delete(v36, 0x20uLL);
}
