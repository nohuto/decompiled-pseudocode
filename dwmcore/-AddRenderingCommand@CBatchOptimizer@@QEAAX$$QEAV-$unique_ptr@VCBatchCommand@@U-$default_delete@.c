__int64 __fastcall CBatchOptimizer::AddRenderingCommand(CBatchOptimizer *this, CBatchCommand **a2)
{
  __int64 v2; // rdi
  CBatchCommand *v5; // r12
  int v6; // r13d
  int v7; // ebx
  bool i; // zf
  int v9; // r14d
  int *j; // rdx
  char *v11; // r15
  char v12; // r9
  __int64 v13; // r11
  __int64 v14; // r8
  int *v15; // r10
  int v16; // r9d
  char *v17; // rcx
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // rax
  int v26; // ecx
  char v27[7]; // [rsp+31h] [rbp-4Fh] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v30[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v31; // [rsp+58h] [rbp-28h] BYREF
  __int128 v32; // [rsp+68h] [rbp-18h] BYREF

  v2 = 0LL;
  v30[1] = a2;
  v28 = 0LL;
  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  CBatchCommand::ApplyRenderState(*a2, this);
  v5 = *a2;
  v32 = 0LL;
  if ( *(_DWORD *)v5 == 5 )
  {
    CCpuClipAntialiasBatchCommand::GetWorldBounds(v5, &v32);
  }
  else
  {
    v31 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 1) + 48LL))(*((_QWORD *)v5 + 1));
    CMILMatrix::Transform2DBoundsHelper<0>((CBatchCommand *)((char *)v5 + 16), (struct MilRectF *)&v31);
  }
  v6 = *((_DWORD *)this + 8);
  v7 = 0;
  for ( i = v6 == 0; ; i = v7 == v6 )
  {
    if ( i )
      goto LABEL_33;
    v9 = v7;
    for ( j = (int *)((char *)this + 4 * v7 + 48); *((_DWORD *)this + 130 * *j + 26); ++j )
      ++v9;
    v11 = (char *)this + 520 * *((int *)this + v9 + 12);
    if ( !CBatchOptimizer::MatchStateToHomogeneousLayer(
            (const struct SharedStateLayer *)(v11 + 80),
            (CBatchOptimizer *)((char *)this + 16)) )
      goto LABEL_31;
    if ( !v12 )
      break;
    v7 = v6 - 1;
    v14 = v6 - 1;
    if ( v14 == v13 )
      break;
    v15 = (int *)((char *)this + 4 * v7 + 48);
    while ( 1 )
    {
      v16 = 0;
      v17 = (char *)this + 520 * *v15 + 80;
      *(_QWORD *)&v31 = v17;
      if ( *((_DWORD *)v17 + 5) )
        break;
LABEL_16:
      --v7;
      --v14;
      --v15;
      if ( v14 == v13 )
        goto LABEL_17;
    }
    while ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
                                &v32,
                                &v17[16 * v16 + 200]) )
    {
      v17 = (char *)v31;
      v16 = v18 + 1;
      if ( v16 == *(_DWORD *)(v31 + 20) )
        goto LABEL_16;
    }
    v26 = *((_DWORD *)this + 8);
    if ( v26 == 8
      && v7 == 7
      && *((_BYTE *)this + 4240)
      && *((_DWORD *)this + 130 * *((int *)this + v7 + 12) + 25) == 1
      && CBatchOptimizer::TryMergeOneLayer(this) )
    {
      v6 = *((_DWORD *)this + 8);
      v7 = v6 - 1;
    }
LABEL_32:
    ;
  }
LABEL_17:
  v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 1) + 40LL))(*((_QWORD *)v5 + 1));
  v20 = *((_QWORD *)v11 + 14);
  v21 = v19;
  if ( v20
    || *((_DWORD *)v11 + 25) == 1
    && (v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v11[8 * (*((_DWORD *)v11 + 24) - 1) + 120]
                                                              + 8LL)
                                                + 40LL))(*(_QWORD *)(*(_QWORD *)&v11[8 * (*((_DWORD *)v11 + 24) - 1)
                                                                                   + 120]
                                                                   + 8LL))) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *, __int64, char *))(*(_QWORD *)v20 + 80LL))(v20, &v29, v21, v27);
    if ( !v27[0] )
      wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v29);
    v22 = v29;
    v29 = 0LL;
  }
  else
  {
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      v30,
      v21);
    v22 = v30[0];
  }
  v30[0] = 0LL;
  v23 = v2;
  v28 = v22;
  v2 = v22;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  if ( !v22 )
  {
LABEL_31:
    v7 = v9 + 1;
    goto LABEL_32;
  }
  if ( !*((_DWORD *)v11 + 25) )
  {
    *((_DWORD *)v11 + 22) = *((_DWORD *)this + 6);
    v11[92] = *((_BYTE *)this + 28);
  }
  if ( v9 == v6 )
  {
LABEL_33:
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 1) + 40LL))(*((_QWORD *)v5 + 1));
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(&v28, v25);
    CBatchOptimizer::AppendLayer(this);
  }
  result = CBatchOptimizer::AppendEntryToLayer(this, (__int64)&v28);
  if ( v28 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  return result;
}
