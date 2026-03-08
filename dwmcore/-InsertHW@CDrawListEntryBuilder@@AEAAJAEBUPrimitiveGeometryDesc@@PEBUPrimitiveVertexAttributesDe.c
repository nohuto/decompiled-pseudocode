/*
 * XREFs of ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x18005CBF0
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005CB60 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180044C68 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18005B700 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C728 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRoundedRectangleShape@@AEBVCMILMatrix@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B24C4 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRou.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x1800E6EA4 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?clear_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E81BC (-clear_region@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitive.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801F7F88 (-clear@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertHW(
        CDrawListEntryBuilder *this,
        __int64 a2,
        __int64 a3,
        __int128 **a4,
        char a5)
{
  __int64 v7; // r13
  unsigned int appended; // edi
  float *v10; // rax
  struct CPrimitiveColor *v11; // r14
  int v12; // eax
  unsigned int v13; // ecx
  void *v14; // rbx
  bool v15; // zf
  int v17; // r12d
  float v18; // xmm1_4
  int v19; // ebx
  float v20; // xmm0_4
  float v21; // xmm1_4
  __int64 v22; // rcx
  char v23; // r12
  __int128 *v24; // r13
  __int128 *v25; // rbx
  int v26; // eax
  unsigned int v27; // ecx
  CCpuClip *v28; // rcx
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  void *v35; // rcx
  HANDLE ProcessHeap; // rax
  int v37; // eax
  unsigned int v38; // ecx
  struct CShape *v40; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+50h] [rbp-B0h]
  char v43; // [rsp+58h] [rbp-A8h]
  _BYTE v44[64]; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+A0h] [rbp-60h]
  _BYTE v46[80]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v47; // [rsp+100h] [rbp+0h] BYREF
  _BYTE *v48; // [rsp+108h] [rbp+8h]
  __int64 *v49; // [rsp+110h] [rbp+10h]
  _BYTE v50[216]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v51; // [rsp+1F0h] [rbp+F0h] BYREF

  v7 = a3;
  appended = 0;
  if ( !a3 )
  {
    v11 = 0LL;
LABEL_3:
    if ( *((_BYTE *)this + 4477) )
    {
      BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, 0LL, 0LL);
      appended = BuiltHWPrimitiveEntry;
      if ( BuiltHWPrimitiveEntry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, BuiltHWPrimitiveEntry, 0x19Eu, 0LL);
        return appended;
      }
      *((_BYTE *)this + 4477) = 0;
    }
    goto LABEL_4;
  }
  v10 = *(float **)(a3 + 32);
  v11 = *(struct CPrimitiveColor **)(a3 + 16);
  if ( !v10 )
    goto LABEL_3;
  if ( !*((_BYTE *)this + 4477) || *((float *)this + 1113) != *v10 || *((float *)this + 1114) != v10[1] )
  {
    v30 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, 0LL, 0LL);
    appended = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x196u, 0LL);
      return appended;
    }
    *((_BYTE *)this + 4477) = 1;
    *(_QWORD *)((char *)this + 4452) = **(_QWORD **)(v7 + 32);
  }
LABEL_4:
  v47 = v50;
  v48 = v50;
  v49 = &v51;
  if ( a4 )
  {
    v23 = a5;
    goto LABEL_29;
  }
  if ( !*((_BYTE *)this + 4475) || (*(_BYTE *)(a2 + 24) & 3) != 2 )
    goto LABEL_6;
  v17 = CCommonRegistryData::MegaRectSize;
  appended = 0;
  v18 = *(float *)(a2 + 8);
  v19 = 0;
  if ( !CCommonRegistryData::MegaRectSize )
    v17 = 1;
  if ( v18 < *(float *)a2 || (v20 = *(float *)(a2 + 12), v20 < *(float *)(a2 + 4)) )
    v21 = 0.0;
  else
    v21 = (float)(v18 - *(float *)a2) * (float)(v20 - *(float *)(a2 + 4));
  if ( v21 >= (float)v17 )
  {
    v22 = *((_QWORD *)this + 2);
    if ( !*(_QWORD *)v22 && !*(_QWORD *)(v22 + 80) )
      goto LABEL_25;
    if ( !CCpuClip::IsAxisAlignedRectangle((CShape **)v22) )
    {
      v28 = (CCpuClip *)*((_QWORD *)this + 2);
      v45 = 0;
      v19 = CCpuClip::ResolveClip(v28, &v40, (struct CMILMatrix *)v44);
      appended = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v19, 0x72Eu, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v19, 0x1ABu, 0LL);
        goto LABEL_55;
      }
      if ( *((_BYTE *)this + 4473) )
      {
        CMILMatrix::CMILMatrix((CMILMatrix *)v46, (const struct D2D_MATRIX_3X2_F *)((char *)this + 32));
        CMILMatrix::Multiply((CMILMatrix *)v44, (const struct CMILMatrix *)v46);
      }
      if ( !(*(unsigned int (__fastcall **)(struct CShape *))(*(_QWORD *)v40 + 8LL))(v40) )
      {
        CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip((unsigned int)v17, a2, v40, v44, &v47);
LABEL_25:
        v23 = 0;
        goto LABEL_27;
      }
    }
  }
  v23 = 0;
  appended = v19;
LABEL_27:
  if ( v48 != v47 )
  {
    a4 = (__int128 **)&v47;
LABEL_29:
    v24 = a4[1];
    v25 = *a4;
    if ( v24 != v25 )
    {
      v43 = *(_BYTE *)(a2 + 24) & 6 | v43 & 0xF8;
      while ( v25 != v24 )
      {
        if ( !v23 || !*((_BYTE *)v25 + 20) )
        {
          v26 = *(_DWORD *)(a2 + 16);
          v41 = *v25;
          v42 = v25[1] & v26;
          appended = CDrawListEntryBuilder::AppendHWPrimitive(
                       this,
                       (const struct PrimitiveGeometryDesc *)&v41,
                       (const struct PrimitiveVertexAttributesDesc *)a3);
          if ( (appended & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, appended, 0x1C8u, 0LL);
            detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(&v47);
            v35 = v47;
            v15 = v47 == v50;
            v47 = 0LL;
            if ( v15 )
              v35 = 0LL;
            goto LABEL_60;
          }
        }
        v25 = (__int128 *)((char *)v25 + 24);
      }
    }
    v7 = a3;
    goto LABEL_7;
  }
LABEL_6:
  v12 = CDrawListEntryBuilder::AppendHWPrimitive(
          this,
          (const struct PrimitiveGeometryDesc *)a2,
          (const struct PrimitiveVertexAttributesDesc *)v7);
  appended = v12;
  if ( v12 >= 0 )
  {
LABEL_7:
    if ( 0xAAAAAAAAAAAAAAABuLL * ((v48 - v47) >> 3) )
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear_region(&v47);
    v14 = v47;
    v15 = v47 == v50;
    v47 = 0LL;
    if ( v15 )
      v14 = 0LL;
    if ( v14 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v14);
    }
    if ( v11 || (*((_DWORD *)this + 6) & 0x2000) != 0 )
    {
      v37 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, v11, (const struct _D3DCOLORVALUE *)v7);
      appended = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x1D2u, 0LL);
    }
    return appended;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1B8u, 0LL);
LABEL_55:
  detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(&v47);
  v35 = v47;
  v15 = v47 == v50;
  v47 = 0LL;
  if ( v15 )
    v35 = 0LL;
LABEL_60:
  operator delete(v35);
  return appended;
}
