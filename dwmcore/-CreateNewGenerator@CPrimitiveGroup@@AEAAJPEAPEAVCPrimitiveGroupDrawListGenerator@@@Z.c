__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v2; // rsi
  struct CSharedSection *v4; // r8
  unsigned int v6; // edx
  __int64 v7; // r14
  void *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  struct ID2D1PrivateCompositorBuffer *v11; // r15
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 *v16; // r12
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // ecx
  __int64 *v24; // rsi
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int i; // r9d
  unsigned int v30; // eax
  __int64 j; // r8
  __int64 v32; // rdi
  __int64 v33; // rsi
  gsl::details *v34; // rcx
  __int64 v35; // rsi
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v42[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-10h] BYREF
  struct ID2D1PrivateCompositorBuffer *v44; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+48h] BYREF
  struct ID2D1PrivateCompositorBuffer *v46; // [rsp+B0h] [rbp+50h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (struct CSharedSection *)*((_QWORD *)this + 49);
  v6 = *((_DWORD *)this + 120);
  v7 = 0LL;
  v8 = (void *)*((_QWORD *)this + 59);
  v46 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v9 = CD2DSharedBuffer::CreateFromSharedSection(v8, v6, v4, &v46);
  v11 = v46;
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x220u, 0LL);
    goto LABEL_23;
  }
  v13 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 61),
          *((_DWORD *)this + 124),
          *((struct CSharedSection **)this + 49),
          &v44);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x226u, 0LL);
    goto LABEL_45;
  }
  v15 = *((_DWORD *)this + 40);
  v16 = (__int64 *)((char *)this + 264);
  v17 = *((_DWORD *)this + 102);
  v18 = *((_DWORD *)this + 103);
  v19 = *((_DWORD *)this + 56);
  if ( v17 >= v15 )
    v17 = *((_DWORD *)this + 40);
  v20 = v15 - v17;
  *((_DWORD *)this + 102) = v17;
  if ( v18 >= v20 )
    v18 = v20;
  v21 = *((_DWORD *)this + 104);
  *((_DWORD *)this + 103) = v18;
  if ( v21 >= v19 )
    v21 = v19;
  *((_DWORD *)this + 104) = v21;
  v22 = DynArrayImpl<0>::Grow((int)this + 264, 8, v18 + v17, 1, 0LL);
  v12 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x22Du, 0LL);
    goto LABEL_45;
  }
  v24 = (__int64 *)((char *)this + 328);
  *((_DWORD *)this + 72) = *((_DWORD *)this + 102) + *((_DWORD *)this + 103);
  v25 = DynArrayImpl<0>::Grow((int)this + 328, 8, *((_DWORD *)this + 104), 1, 0LL);
  v12 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x230u, 0LL);
LABEL_45:
    v2 = v44;
    goto LABEL_23;
  }
  v27 = 0LL;
  for ( *((_DWORD *)this + 88) = *((_DWORD *)this + 104);
        (unsigned int)v27 < *((_DWORD *)this + 102);
        v27 = (unsigned int)(v27 + 1) )
  {
    v28 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v27);
    *(_QWORD *)(*v16 + 8 * v27) = (v28 + 72) & -(__int64)(v28 != 0);
  }
  for ( i = 0; i < *((_DWORD *)this + 103); *(_QWORD *)(*v16 + 8 * v39) = (v40 + 72) & -(__int64)(v40 != 0) )
  {
    v39 = i + *((_DWORD *)this + 102);
    v40 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v39);
    ++i;
  }
  v30 = *((_DWORD *)this + 104);
  for ( j = 0LL; (unsigned int)j < v30; v30 = *((_DWORD *)this + 104) )
  {
    *(_QWORD *)(*v24 + 8 * j) = *(_QWORD *)(*((_QWORD *)this + 25) + 8 * j);
    j = (unsigned int)(j + 1);
  }
  v32 = *v16;
  v33 = *v24;
  gsl::details::extent_type<-1>::extent_type<-1>(v41, v30);
  v41[1] = v33;
  if ( v41[0] == -1
    || !v33 && v41[0]
    || (v35 = v32 + 8LL * *((unsigned int *)this + 102),
        gsl::details::extent_type<-1>::extent_type<-1>(v42, *((unsigned int *)this + 103)),
        v42[1] = v35,
        v42[0] == -1LL)
    || !v35 && v42[0]
    || (gsl::details::extent_type<-1>::extent_type<-1>(v43, *((unsigned int *)this + 102)), v43[1] = v32, v43[0] == -1LL)
    || !v32 && v43[0] )
  {
    gsl::details::terminate(v34);
    JUMPOUT(0x180010F86LL);
  }
  v2 = v44;
  v36 = CPrimitiveGroupDrawListGenerator::Create(v11, v44, (__int64)v41, (__int64)&v45);
  v12 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x25Fu, 0LL);
    v7 = v45;
  }
  else
  {
    *a2 = (struct CPrimitiveGroupDrawListGenerator *)v45;
  }
LABEL_23:
  if ( v11 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v2 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return v12;
}
