/*
 * XREFs of ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005CB60
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C788 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x18005CBF0 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180080DC4 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801F7E00 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 *     ?clear@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801F7F88 (-clear@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWorker(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3)
{
  int inserted; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  char v10; // r15
  _QWORD *v11; // rcx
  char *v12; // r8
  int v13; // eax
  unsigned int v14; // ecx
  _BYTE *v15; // r12
  _BYTE *v16; // rbx
  char v17; // al
  __int128 v18; // xmm0
  int v19; // eax
  unsigned int v20; // ecx
  void *v21; // rcx
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // ecx
  void *v25; // rcx
  int v26; // eax
  unsigned int v27; // ecx
  char v28; // [rsp+30h] [rbp-D0h]
  __int128 v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+48h] [rbp-B8h]
  char v31; // [rsp+50h] [rbp-B0h]
  _BYTE *v32; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v33; // [rsp+68h] [rbp-98h]
  __int64 *v34; // [rsp+70h] [rbp-90h]
  _BYTE v35[216]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+150h] [rbp+50h] BYREF

  if ( !*((_BYTE *)this + 28) || (v10 = 1, (*((_BYTE *)a2 + 24) & 1) != 0) )
  {
LABEL_2:
    inserted = CDrawListEntryBuilder::InsertHW(this, 0);
    v8 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, inserted, 0x170u, 0LL);
    return v8;
  }
  if ( !*((_BYTE *)this + 4474) )
    goto LABEL_36;
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !*v11 && !v11[10] )
    goto LABEL_36;
  v12 = (char *)this + 56;
  if ( !*((_BYTE *)this + 4473) )
    v12 = 0LL;
  v29 = *(_OWORD *)a2;
  if ( !(unsigned __int8)CCpuClip::FullyContains(v11, &v29, v12) )
  {
    v32 = v35;
    v33 = v35;
    v34 = &v36;
    v13 = CDrawListEntryBuilder::PartitionPrimitive(
            this,
            (unsigned int)CCommonRegistryData::CpuClipWarpPartitionThreshold,
            a2,
            &v32);
    v8 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x13Eu, 0LL);
LABEL_33:
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(&v32);
      v21 = v32;
      v22 = v32 == v35;
      v32 = 0LL;
      if ( v22 )
        v21 = 0LL;
LABEL_35:
      operator delete(v21);
    }
    else
    {
      v15 = v33;
      v16 = v32;
      if ( v33 == v32 )
      {
        v10 = 0;
      }
      else
      {
        v17 = 0;
        v28 = 0;
        v31 = v31 & 0xF8 | *((_BYTE *)a2 + 24) & 6;
        while ( v16 != v15 )
        {
          if ( v16[20] )
          {
            v18 = *(_OWORD *)v16;
            v30 = *((_DWORD *)v16 + 4) & *((_DWORD *)a2 + 4);
            v29 = v18;
            v19 = CDrawListEntryBuilder::InsertWARP(this, (const struct PrimitiveGeometryDesc *)&v29, a3, 1);
            v8 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x154u, 0LL);
              detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(&v32);
              v21 = v32;
              v22 = v32 == v35;
              v32 = 0LL;
              if ( v22 )
                v21 = 0LL;
              goto LABEL_35;
            }
            v17 = v28;
          }
          else
          {
            v17 = 1;
            v28 = 1;
          }
          v16 += 24;
        }
        if ( v17 )
        {
          v23 = CDrawListEntryBuilder::InsertHW(this, 1);
          v8 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x163u, 0LL);
            goto LABEL_33;
          }
        }
      }
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(&v32);
      v25 = v32;
      v22 = v32 == v35;
      v32 = 0LL;
      if ( v22 )
        v25 = 0LL;
      operator delete(v25);
      if ( !v10 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_36:
    v26 = CDrawListEntryBuilder::InsertWARP(this, a2, a3, 0);
    v8 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x139u, 0LL);
  }
  return v8;
}
