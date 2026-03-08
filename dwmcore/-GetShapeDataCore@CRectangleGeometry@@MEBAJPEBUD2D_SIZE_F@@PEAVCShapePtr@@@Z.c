/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180061AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180033270 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18007F1B0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800C4E30 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800F03A0 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800FE0E0 (--0CThreadContext@@AEAA@XZ.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x180104860 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0FlattenedShapeSharedData@CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1801AF6D4 (--0FlattenedShapeSharedData@CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  void (__fastcall ***v3)(_QWORD); // r14
  float *v4; // rdi
  float *v6; // rax
  unsigned int v7; // r15d
  float *v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  char v11; // dl
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  char v16; // al
  bool v17; // cl
  LPVOID Value; // rdi
  int v19; // ecx
  CRectanglesShape *v20; // rbx
  void *v21; // rcx
  __int64 v22; // rcx
  LPVOID v24; // rbp
  int v25; // ecx
  HANDLE ProcessHeap; // rax
  CRoundedRectangleShape::SharedData *v27; // rax
  __int64 v28; // rax
  CRectanglesShape *v29; // rax
  unsigned int v30; // ecx
  CThreadContext *v31; // rax
  unsigned int v32; // ecx
  CThreadContext *v33; // rax
  CRoundedRectangleShape::FlattenedShapeSharedData *v34; // rax
  CThreadContext *v35; // rax
  unsigned int v36; // ecx
  CThreadContext *v37; // rax
  _OWORD v38[3]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-98h]
  _DWORD v40[4]; // [rsp+68h] [rbp-90h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v3 = 0LL;
  v4 = (float *)((char *)this + 144);
  LODWORD(v39) = 0;
  v6 = (float *)((char *)this + 152);
  v7 = 0;
  v8 = (float *)((char *)this + 156);
  if ( a2 )
  {
    v9 = *((_OWORD *)this + 10);
    v38[0] = *(_OWORD *)v4;
    v10 = *((_OWORD *)this + 11);
    v38[1] = v9;
    *(_QWORD *)&v9 = *((_QWORD *)this + 24);
    v4 = (float *)v38;
    v38[2] = v10;
    *(float *)&v10 = a2->width - *v6;
    v39 = v9;
    v6 = (float *)v38 + 2;
    *(float *)&v9 = a2->height - *v8;
    v8 = (float *)v38 + 3;
    *((_QWORD *)&v38[0] + 1) = __PAIR64__(v9, v10);
  }
  v11 = *((_BYTE *)this + 196);
  v12 = *v4;
  v13 = v4[1];
  if ( v11 )
  {
    v14 = v12 + *v6;
    v15 = v13 + *v8;
  }
  else
  {
    v14 = *v6;
    v15 = *v8;
  }
  if ( v14 > v12 && v15 > v13 )
  {
    v16 = *((float *)this + 40) > 0.0 && *((float *)this + 41) > 0.0;
    if ( !v11 )
    {
      v17 = *((float *)this + 42) > 0.0 && *((float *)this + 43) > 0.0
         || *((float *)this + 46) > 0.0 && *((float *)this + 47) > 0.0
         || *((float *)this + 44) > 0.0 && *((float *)this + 45) > 0.0;
      v16 |= v17;
    }
    if ( !v16 )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v35 = (CThreadContext *)operator new(0x190uLL);
        if ( !v35 || (v37 = CThreadContext::CThreadContext(v35), (Value = v37) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v37);
      }
      v19 = *((_DWORD *)Value + 9);
      v20 = 0LL;
      if ( v19 )
      {
        v20 = (CRectanglesShape *)*((_QWORD *)Value + 5);
        *((_QWORD *)Value + 5) = *(_QWORD *)v20;
        *((_DWORD *)Value + 9) = v19 - 1;
      }
      if ( !v20 )
      {
        v20 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL);
        if ( !v20 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      *((_QWORD *)v20 + 1) = 0LL;
      *(_QWORD *)v20 = &CRectanglesShape::`vftable';
      *((_QWORD *)v20 + 2) = (char *)v20 + 48;
      *((_QWORD *)v20 + 3) = (char *)v20 + 48;
      *((_DWORD *)v20 + 8) = 1;
      *(_QWORD *)((char *)v20 + 36) = 1LL;
      TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>((char *)v20 + 48);
      *((_QWORD *)v20 + 8) = 0LL;
      v21 = (void *)*((_QWORD *)v20 + 2);
      *((_DWORD *)v20 + 10) = 0;
      if ( v21 != *((void **)v20 + 3) )
      {
        operator delete(v21);
        *((_QWORD *)v20 + 2) = *((_QWORD *)v20 + 3);
        *((_DWORD *)v20 + 9) = *((_DWORD *)v20 + 8);
      }
      v22 = *((_QWORD *)v20 + 8);
      if ( v22 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        *((_QWORD *)v20 + 8) = 0LL;
      }
      *(float *)v40 = v12;
      *(float *)&v40[1] = v13;
      *(float *)&v40[2] = v14;
      *(float *)&v40[3] = v15;
      DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        (char *)v20 + 16,
        v40,
        1LL);
      goto LABEL_25;
    }
    v24 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !v24 )
    {
      v31 = (CThreadContext *)operator new(0x190uLL);
      if ( !v31 || (v33 = CThreadContext::CThreadContext(v31), (v24 = v33) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024882, 0x42u, 0LL);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v33);
    }
    v25 = *((_DWORD *)v24 + 13);
    v20 = 0LL;
    if ( v25 )
    {
      v20 = (CRectanglesShape *)*((_QWORD *)v24 + 7);
      *((_QWORD *)v24 + 7) = *(_QWORD *)v20;
      *((_DWORD *)v24 + 13) = v25 - 1;
    }
    if ( !v20 )
    {
      v20 = (CRectanglesShape *)DefaultHeap::Alloc(0x18uLL);
      if ( !v20 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    *((_QWORD *)v20 + 1) = 0LL;
    *(_QWORD *)v20 = &CRoundedRectangleShape::`vftable';
    if ( v4[12] > 0.0 )
    {
      v34 = (CRoundedRectangleShape::FlattenedShapeSharedData *)operator new(0x68uLL);
      if ( !v34 )
      {
LABEL_36:
        *((_QWORD *)v20 + 2) = v3;
        if ( v3 )
          (**v3)(v3);
        goto LABEL_25;
      }
      v28 = CRoundedRectangleShape::FlattenedShapeSharedData::FlattenedShapeSharedData(
              v34,
              (const struct CRoundedRectangleGeometryData *)v4);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v27 = (CRoundedRectangleShape::SharedData *)HeapAlloc(ProcessHeap, 0, 0x50uLL);
      if ( !v27 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v28 = CRoundedRectangleShape::SharedData::SharedData(v27, (const struct CRoundedRectangleGeometryData *)v4);
    }
    v3 = (void (__fastcall ***)(_QWORD))v28;
    goto LABEL_36;
  }
  v29 = (CRectanglesShape *)CRectanglesShape::operator new((unsigned __int64)this);
  if ( !v29 || (v20 = CRectanglesShape::CRectanglesShape(v29)) == 0LL )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, -2147024882, 0x108u, 0LL);
    return v7;
  }
LABEL_25:
  if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  *(_QWORD *)a3 = v20;
  *((_BYTE *)a3 + 8) = 1;
  return v7;
}
