/*
 * XREFs of ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1802174DC
 * Callers:
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801B3300 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1802174A8 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2D::GetMeshData(
        CGeometry2D *this,
        const struct MilVertexXYZDUV2 **const a2,
        unsigned int *a3,
        const unsigned int **const a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v10; // rbx
  LPVOID v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  LPVOID v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx

  v5 = 0;
  if ( *((_QWORD *)this + 8) )
    goto LABEL_11;
  v10 = (*(unsigned int (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 184LL))(this);
  v11 = DefaultHeap::Alloc(saturated_mul(v10, 0x20uLL));
  *((_QWORD *)this + 8) = v11;
  if ( v11 )
  {
    v13 = (*(__int64 (__fastcall **)(CGeometry2D *, LPVOID, _QWORD))(*(_QWORD *)this + 224LL))(
            this,
            v11,
            (unsigned int)v10);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2Du, 0LL);
      goto LABEL_10;
    }
    v15 = (*(unsigned int (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 192LL))(this);
    v16 = DefaultHeap::Alloc(saturated_mul(v15, 4uLL));
    *((_QWORD *)this + 9) = v16;
    if ( !v16 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x33u, 0LL);
      goto LABEL_10;
    }
    v18 = (*(__int64 (__fastcall **)(CGeometry2D *, _QWORD, LPVOID, _QWORD))(*(_QWORD *)this + 216LL))(
            this,
            0LL,
            v16,
            (unsigned int)v15);
    v5 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x34u, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    *a2 = (const struct MilVertexXYZDUV2 *)*((_QWORD *)this + 8);
    *a3 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 184LL))(this);
    *a4 = (const unsigned int *)*((_QWORD *)this + 9);
    *a5 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 192LL))(this);
    return v5;
  }
  v5 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x2Cu, 0LL);
LABEL_10:
  CGeometry2D::FreeCaches((void **)this);
  return v5;
}
