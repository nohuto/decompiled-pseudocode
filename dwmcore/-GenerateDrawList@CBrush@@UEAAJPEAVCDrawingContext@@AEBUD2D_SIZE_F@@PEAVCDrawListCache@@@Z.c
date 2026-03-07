__int64 __fastcall CBrush::GenerateDrawList(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r9
  int DrawList; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdi
  char *v18; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  char *v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  bool v25; // zf
  int v26; // r9d
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  struct CDrawListBrush *v28; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v29; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+60h] [rbp-A0h]
  int v32; // [rsp+ACh] [rbp-54h]
  char v33; // [rsp+B0h] [rbp-50h]
  struct D2D_RECT_F v34; // [rsp+C0h] [rbp-40h] BYREF
  struct D2D_RECT_F v35; // [rsp+D0h] [rbp-30h] BYREF
  char v36; // [rsp+E0h] [rbp-20h]
  _BYTE v37[72]; // [rsp+F0h] [rbp-10h] BYREF
  char v38; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v39[4480]; // [rsp+140h] [rbp+40h] BYREF

  v4 = *(_QWORD *)this;
  v28 = 0LL;
  *(_QWORD *)&v35.right = 0LL;
  *(_QWORD *)&v35.left = &v28;
  v36 = 1;
  v10 = (*(__int64 (__fastcall **)(CBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, FLOAT *))(v4 + 328))(
          this,
          a2,
          a3,
          &v35.right);
  if ( v36 )
  {
    v9 = *(_QWORD *)&v35.right;
    v11 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v35.left;
    **(_QWORD **)&v35.left = *(_QWORD *)&v35.right;
    if ( v11 )
      std::default_delete<CDrawListBrush>::operator()(v9, v11);
  }
  if ( v10 < 0 )
  {
    v26 = v10;
    v27 = 172;
    goto LABEL_28;
  }
  if ( !*((_QWORD *)this + 9) )
  {
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v37, a2, a3);
    v12 = (*(__int64 (__fastcall **)(CBrush *, _BYTE *))(*(_QWORD *)this + 312LL))(this, v37);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180338CB8, 3u, v12, 0xB1u, 0LL);
    }
    else
    {
      v30[0] = v28;
      v30[1] = 0LL;
      v31 = 0;
      v32 = 257;
      v33 = 0;
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v39);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)v37,
                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v30,
                   (struct CDrawListEntryBuilder *)v39,
                   v14);
      v10 = DrawList;
      if ( DrawList >= 0 )
      {
        CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v39);
        CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v39);
        CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v37);
        v17 = 4LL;
        v18 = &v38;
        do
        {
          v18 -= 8;
          std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v18);
          --v17;
        }
        while ( v17 );
        goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_180338CB8, 3u, DrawList, 0xB8u, 0LL);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v39);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v37);
    goto LABEL_10;
  }
  v20 = *((_QWORD *)a2 + 5);
  if ( *(int *)(v20 + 584) >= 37632 && !*(_BYTE *)(v20 + 1505) )
  {
    v21 = *((_QWORD *)this + 8);
    v34 = 0LL;
    v22 = (char *)this + *(int *)(v21 + 8) + 64;
    v23 = (**(__int64 (__fastcall ***)(char *, const struct D2D_SIZE_F *, struct D2D_RECT_F *))v22)(v22, a3, &v34);
    v10 = v23;
    if ( v23 < 0 )
    {
      v27 = 191;
      goto LABEL_26;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CBrush *, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)this + 296LL))(
            this,
            a3,
            &v35)
      || (v29 = v34, v25 = !IsCloseRectF(&v35, &v29, 0.0000011920929), v24 = 1, v25) )
    {
      v24 = 0;
    }
    v23 = CBrushRenderingGraph::RenderSubgraphs(*((CBrushRenderingGraph **)this + 9), a2, a3, v28, v24, a4);
    v10 = v23;
    if ( v23 < 0 )
    {
      v27 = 203;
LABEL_26:
      v26 = v23;
LABEL_28:
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180338CB8, 3u, v26, v27, 0LL);
    }
  }
LABEL_10:
  if ( v28 )
    (**(void (__fastcall ***)(struct CDrawListBrush *, __int64))v28)(v28, 1LL);
  return (unsigned int)v10;
}
