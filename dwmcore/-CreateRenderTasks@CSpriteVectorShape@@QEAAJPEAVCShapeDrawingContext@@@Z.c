/*
 * XREFs of ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1800843E8
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180083C00 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18001DD88 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x18001F160 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800615C0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x180084918 (--$_Emplace_reallocate@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@st.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVectorShape::CreateRenderTasks(CSpriteVectorShape *this, struct CShapeDrawingContext *a2)
{
  CGeometry *v4; // rcx
  int ShapeData; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  float v19; // xmm6_4
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  struct CShapeRenderTask *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int128 v28; // xmm0
  int v29; // eax
  unsigned int v30; // ecx
  struct CShapeRenderTask *v31; // rax
  __int64 v32; // rcx
  __int128 v33; // xmm0
  int v34; // eax
  unsigned int v35; // ecx
  struct CShapeRenderTask *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int128 v40; // xmm0
  __int64 v41; // [rsp+30h] [rbp-30h] BYREF
  char v42; // [rsp+38h] [rbp-28h]
  __int128 v43; // [rsp+40h] [rbp-20h]
  char v44; // [rsp+80h] [rbp+20h] BYREF
  struct CShapeRenderTask *v45; // [rsp+90h] [rbp+30h] BYREF

  v4 = (CGeometry *)*((_QWORD *)this + 15);
  v41 = 0LL;
  v42 = 0;
  ShapeData = CGeometry::GetShapeData(v4, 0LL, (struct CShapePtr *)&v41);
  v7 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ShapeData, 0x14Fu, 0LL);
    goto LABEL_16;
  }
  if ( v41 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41) )
  {
    v8 = *((_QWORD *)this + 13);
    if ( v8
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v8 + 288LL))(v8, 0LL, &v44)
      && !v44 )
    {
      if ( v41
        && (*(unsigned __int8 (__fastcall **)(__int64, struct CShapeRenderTask **))(*(_QWORD *)v41 + 64LL))(v41, &v45)
        && (_DWORD)v45 == 1
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 56LL))(
              *((_QWORD *)this + 13),
              137LL) )
      {
        v29 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
        v7 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x15Bu, 0LL);
          goto LABEL_16;
        }
        v31 = v45;
        v32 = *((_QWORD *)this + 13);
        *(_DWORD *)v45 = 4;
        v33 = *((_OWORD *)this + 9);
        *((_QWORD *)v31 + 3) = v32;
        v43 = v33;
        *(_OWORD *)((char *)v31 + 8) = v33;
        goto LABEL_15;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 56LL))(
             *((_QWORD *)this + 13),
             22LL) )
      {
        v16 = (_DWORD *)*((_QWORD *)a2 + 64);
        if ( v16 == *((_DWORD **)a2 + 65) )
        {
          std::vector<CShapeRenderTask>::_Emplace_reallocate<>();
        }
        else
        {
          *v16 = 0;
          *((_QWORD *)a2 + 64) += 56LL;
        }
        v17 = *((_QWORD *)this + 13);
        v10 = *((_QWORD *)a2 + 64);
        v18 = *((_QWORD *)this + 15);
        *(_DWORD *)(v10 - 56) = 2;
        *(_QWORD *)(v10 - 48) = v18;
        v13 = *(_OWORD *)(v17 + 88);
        goto LABEL_14;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 56LL))(
             *((_QWORD *)this + 13),
             73LL) )
      {
        v9 = (_DWORD *)*((_QWORD *)a2 + 64);
        if ( v9 == *((_DWORD **)a2 + 65) )
        {
          std::vector<CShapeRenderTask>::_Emplace_reallocate<>();
        }
        else
        {
          *v9 = 0;
          *((_QWORD *)a2 + 64) += 56LL;
        }
        v10 = *((_QWORD *)a2 + 64);
        v11 = *((_QWORD *)this + 15);
        v12 = *((_QWORD *)this + 13);
        *(_DWORD *)(v10 - 56) = 3;
        *(_QWORD *)(v10 - 48) = v11;
        v13 = *((_OWORD *)this + 9);
        *(_QWORD *)(v10 - 24) = v12;
        v43 = v13;
LABEL_14:
        *(_OWORD *)(v10 - 40) = v13;
        v7 = 0;
      }
    }
LABEL_15:
    v14 = *((_QWORD *)this + 14);
    if ( v14
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v14 + 288LL))(v14, 0LL, &v44)
      && !v44
      && *((_QWORD *)this + 16) )
    {
      v19 = fmaxf(0.0, *((float *)this + 52));
      if ( *((_BYTE *)this + 212) )
        v19 = v19 * fminf(*((float *)a2 + 124), *((float *)a2 + 125));
      v20 = CSpriteVectorShape::EnsureStrokeStyleForRender(this);
      v7 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x17Bu, 0LL);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 56LL))(
                  *((_QWORD *)this + 14),
                  22LL) )
      {
        v22 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
        v7 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x180u, 0LL);
        }
        else
        {
          v24 = *((_QWORD *)this + 14);
          v25 = v45;
          v26 = *((_QWORD *)this + 15);
          v27 = *((_QWORD *)this + 17);
          *(_DWORD *)v45 = 5;
          *((_QWORD *)v25 + 1) = v26;
          v28 = *(_OWORD *)(v24 + 88);
          *((_QWORD *)v25 + 5) = v27;
          *((float *)v25 + 8) = v19;
          *((_OWORD *)v25 + 1) = v28;
        }
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 56LL))(
                  *((_QWORD *)this + 14),
                  73LL) )
      {
        v34 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
        v7 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x18Bu, 0LL);
        }
        else
        {
          v36 = v45;
          v37 = *((_QWORD *)this + 15);
          v38 = *((_QWORD *)this + 14);
          v39 = *((_QWORD *)this + 17);
          *(_DWORD *)v45 = 6;
          *((_QWORD *)v36 + 1) = v37;
          v40 = *((_OWORD *)this + 9);
          *((_QWORD *)v36 + 4) = v38;
          *((float *)v36 + 10) = v19;
          v43 = v40;
          *((_QWORD *)v36 + 6) = v39;
          *((_OWORD *)v36 + 1) = v40;
        }
      }
    }
  }
LABEL_16:
  if ( v42 && v41 )
    (**(void (__fastcall ***)(__int64, __int64))v41)(v41, 1LL);
  return v7;
}
