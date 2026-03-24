/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180082350
 * Callers:
 *     <none>
 * Callees:
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x180016B4C (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180059560 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800CC534 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800E1C40 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  float *v3; // rdi
  unsigned int v5; // ebp
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  char v9; // dl
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  char v14; // al
  bool v15; // cl
  LPVOID Value; // rdi
  int v17; // ecx
  CRectanglesShape *v18; // rbx
  void *v19; // rcx
  __int64 v20; // rcx
  CRectanglesShape *v22; // rax
  __int64 v23; // rcx
  CRectanglesShape *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  DWORD v27; // ecx
  unsigned int v28; // [rsp+20h] [rbp-B8h]
  _DWORD v29[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v30[3]; // [rsp+40h] [rbp-98h] BYREF
  int v31; // [rsp+70h] [rbp-68h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v3 = (float *)((char *)this + 136);
  v5 = 0;
  if ( a2 )
  {
    v6 = *(_OWORD *)v3;
    v7 = *(_OWORD *)((char *)this + 152);
    v31 = *((_DWORD *)this + 46);
    v30[0] = v6;
    v8 = *(_OWORD *)((char *)this + 168);
    v3 = (float *)v30;
    v30[1] = v7;
    *(float *)&v7 = a2->height - *((float *)this + 37);
    v30[2] = v8;
    *((_QWORD *)&v30[0] + 1) = __PAIR64__(v7, a2->width - *((float *)this + 36));
  }
  v9 = *((_BYTE *)this + 184);
  v10 = *v3;
  v11 = v3[1];
  if ( v9 )
  {
    v12 = v10 + v3[2];
    v13 = v11 + v3[3];
  }
  else
  {
    v12 = v3[2];
    v13 = v3[3];
  }
  if ( v12 <= v10 || v13 <= v11 )
  {
    v22 = (CRectanglesShape *)CRectanglesShape::operator new(this);
    if ( v22 )
    {
      v18 = CRectanglesShape::CRectanglesShape(v22);
      if ( v18 )
        goto LABEL_29;
    }
    v28 = 265;
LABEL_49:
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024882, v28, 0LL);
    return v5;
  }
  v14 = *((float *)this + 38) > 0.0 || *((float *)this + 39) > 0.0;
  if ( !v9 )
  {
    v15 = *((float *)this + 40) > 0.0
       || *((float *)this + 41) > 0.0
       || *((float *)this + 42) > 0.0
       || *((float *)this + 43) > 0.0
       || *((float *)this + 44) > 0.0
       || *((float *)this + 45) > 0.0;
    v14 |= v15;
  }
  if ( !v14 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v25 = operator new(0x118uLL);
      Value = v25;
      if ( !v25 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x42u, 0LL);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      *v25 = 0LL;
      v25[1] = 0LL;
      v25[2] = 0LL;
      v27 = CThreadContext::s_dwTlsIndex;
      v25[3] = 0LL;
      v25[4] = 0LL;
      v25[5] = 0LL;
      v25[6] = 0LL;
      v25[7] = 0LL;
      v25[8] = 0LL;
      v25[9] = 0LL;
      v25[10] = 0LL;
      v25[11] = 0LL;
      v25[12] = 0LL;
      v25[13] = 0LL;
      v25[14] = 0LL;
      v25[15] = 0LL;
      v25[16] = 0LL;
      v25[17] = 0LL;
      v25[18] = 0LL;
      v25[19] = 0LL;
      v25[20] = 0LL;
      v25[21] = 0LL;
      v25[22] = 0LL;
      v25[23] = 0LL;
      v25[24] = 0LL;
      v25[25] = 0LL;
      v25[26] = 0LL;
      v25[27] = 0LL;
      v25[28] = 0LL;
      v25[29] = 0LL;
      v25[30] = 0LL;
      v25[31] = 0LL;
      v25[32] = 0LL;
      v25[33] = 0LL;
      v25[34] = 0LL;
      TlsSetValue(v27, v25);
    }
    v17 = *((_DWORD *)Value + 3);
    v18 = 0LL;
    if ( v17 )
    {
      v18 = (CRectanglesShape *)*((_QWORD *)Value + 2);
      *((_QWORD *)Value + 2) = *(_QWORD *)v18;
      *((_DWORD *)Value + 3) = v17 - 1;
    }
    if ( !v18 )
    {
      v18 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL);
      if ( !v18 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    *((_QWORD *)v18 + 1) = 0LL;
    *(_QWORD *)v18 = &CRectanglesShape::`vftable';
    *((_QWORD *)v18 + 2) = (char *)v18 + 48;
    *((_QWORD *)v18 + 3) = (char *)v18 + 48;
    *((_DWORD *)v18 + 8) = 1;
    *(_QWORD *)((char *)v18 + 36) = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>((char *)v18 + 48);
    *((_QWORD *)v18 + 8) = 0LL;
    v19 = (void *)*((_QWORD *)v18 + 2);
    *((_DWORD *)v18 + 10) = 0;
    if ( v19 != *((void **)v18 + 3) )
    {
      operator delete(v19);
      *((_QWORD *)v18 + 2) = *((_QWORD *)v18 + 3);
      *((_DWORD *)v18 + 9) = *((_DWORD *)v18 + 8);
    }
    v20 = *((_QWORD *)v18 + 8);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      *((_QWORD *)v18 + 8) = 0LL;
    }
    *(float *)v29 = v10;
    *(float *)&v29[1] = v11;
    *(float *)&v29[2] = v12;
    *(float *)&v29[3] = v13;
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)v18 + 16,
      v29,
      1LL);
    goto LABEL_29;
  }
  v24 = (CRectanglesShape *)operator new(0x50uLL);
  v18 = v24;
  if ( !v24 )
  {
    v28 = 272;
    goto LABEL_49;
  }
  *((_QWORD *)v24 + 1) = 0LL;
  *(_QWORD *)v24 = &CRoundedRectangleShape::`vftable';
  *((_OWORD *)v24 + 1) = *(_OWORD *)v3;
  *((_OWORD *)v24 + 2) = *((_OWORD *)v3 + 1);
  *((_OWORD *)v24 + 3) = *((_OWORD *)v3 + 2);
  *((float *)v24 + 16) = v3[12];
  *((_QWORD *)v24 + 9) = 0LL;
LABEL_29:
  if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  *(_QWORD *)a3 = v18;
  *((_BYTE *)a3 + 8) = 1;
  return v5;
}
