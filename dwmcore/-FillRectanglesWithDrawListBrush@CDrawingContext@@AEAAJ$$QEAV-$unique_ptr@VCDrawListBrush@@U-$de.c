__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBrush(
        struct CDrawingContext *a1,
        __int64 **a2,
        _OWORD *a3,
        __int128 *a4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  __int64 *v11; // rcx
  __int64 v12; // rax
  int Current; // eax
  __int64 v14; // r9
  struct CThreadContext *v15; // rdx
  char *v16; // rcx
  int v17; // r8d
  __int64 *v18; // rax
  __int64 (__fastcall ***v19)(_QWORD, __int64); // rdx
  int DrawList; // eax
  unsigned int v21; // ecx
  unsigned int v22; // esi
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  _QWORD *v28; // rbx
  _QWORD *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ebx
  void (__fastcall ***v33)(_QWORD, __int64); // rcx
  unsigned int *v34; // rbx
  unsigned int v36; // ecx
  struct CThreadContext *v37[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+9Ch] [rbp-64h]
  char v41; // [rsp+A0h] [rbp-60h]
  struct CDrawingContext *v42; // [rsp+B0h] [rbp-50h] BYREF
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  int i; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+C4h] [rbp-3Ch]
  _QWORD v47[4]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v48; // [rsp+F8h] [rbp-8h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v42 = a1;
  v4 = 4LL;
  v43 = 0;
  v44 = 0;
  v5 = v47;
  v6 = 4LL;
  i = 0;
  *(_QWORD *)&v46 = 0x3F8000003F800000LL;
  *((_QWORD *)&v46 + 1) = 0x3F8000003F800000LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v5++);
    --v6;
  }
  while ( v6 );
  v11 = *a2;
  v48 = 0;
  v38 = 0LL;
  v39 = 0;
  v12 = *v11;
  v40 = 257;
  v41 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v12 + 24))(v11) )
    i = 512;
  Current = CThreadContext::GetCurrent(v37);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v15 = v37[0];
  v16 = 0LL;
  v17 = *((_DWORD *)v37[0] + 93);
  if ( v17 )
  {
    v16 = (char *)*((_QWORD *)v37[0] + 47);
    *((_QWORD *)v37[0] + 47) = *(_QWORD *)v16;
    *((_DWORD *)v15 + 93) = v17 - 1;
  }
  if ( v16 || (v16 = (char *)DefaultHeap::Alloc(0x60uLL)) != 0LL )
  {
    *(_OWORD *)(v16 + 8) = *(_OWORD *)&_xmm;
    v16[52] = 0;
    v16[64] = 0;
    *(_QWORD *)v16 = &CMultiPrimitiveDrawListBrush::`vftable';
    *((_QWORD *)v16 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v18 = *a2;
    *a2 = 0LL;
    *((_QWORD *)v16 + 9) = v18;
    *((_OWORD *)v16 + 5) = *a3;
    v19 = (__int64 (__fastcall ***)(_QWORD, __int64))v47[0];
    v47[0] = v16;
    v46 = *a4;
    if ( v19 )
      std::default_delete<CDrawListBrush>::operator()((__int64)v16, v19);
    if ( v48 <= 1 )
      v48 = 1;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v42,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v38,
                 (struct CDrawingContext *)((char *)a1 + 3568),
                 v14);
    v22 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, DrawList, 0x381u, 0LL);
    }
    else
    {
      LODWORD(v37[0]) = 1065353216;
      v23 = CWatermarkStack<float,64,2,10>::Push((char *)a1 + 3248, v37);
      v22 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x384u, 0LL);
      }
      else
      {
        v25 = CDrawListEntryBuilder::Render((struct CDrawingContext *)((char *)a1 + 3568), a1);
        v22 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x387u, 0LL);
        v27 = *((_DWORD *)a1 + 812);
        if ( v27 )
          *((_DWORD *)a1 + 812) = v27 - 1;
      }
    }
  }
  else
  {
    v22 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024882, 0x379u, 0LL);
  }
  v28 = (_QWORD *)*((_QWORD *)a1 + 457);
  v29 = (_QWORD *)*((_QWORD *)a1 + 458);
  while ( v28 != v29 )
  {
    if ( *v28 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v28 + 8LL))(*v28);
      *v28 = 0LL;
    }
    ++v28;
  }
  v30 = (__int64)(*((_QWORD *)a1 + 458) - *((_QWORD *)a1 + 457)) >> 3;
  if ( v30 )
    *((_QWORD *)a1 + 458) -= 8 * v30;
  *((_BYTE *)a1 + 8040) = 0;
  v31 = *((_QWORD *)a1 + 456);
  if ( v31 )
  {
    *((_QWORD *)a1 + 456) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  }
  v32 = 0;
  *(_QWORD *)&v46 = 0x3F8000003F800000LL;
  *((_QWORD *)&v46 + 1) = 0x3F8000003F800000LL;
  for ( i = 0; v32 < v48; ++v32 )
  {
    v33 = (void (__fastcall ***)(_QWORD, __int64))v47[v32];
    v47[v32] = 0LL;
    if ( v33 )
      (**v33)(v33, 1LL);
  }
  v48 = 0;
  v34 = &v48;
  do
  {
    v34 -= 2;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v34);
    --v4;
  }
  while ( v4 );
  return v22;
}
