/*
 * XREFs of ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x1800159F0
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x18001514C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800161E4 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathData(CShape *this, struct CPathData **a2)
{
  unsigned int v2; // ebx
  volatile signed __int64 *v3; // rdi
  __int64 (__fastcall *v6)(CShape *, struct CPathData **); // rbx
  int v7; // eax
  unsigned int v8; // ecx
  struct CPathData *v9; // rax
  struct CPathData *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (volatile signed __int64 *)((char *)this + 8);
  v11 = 0LL;
  if ( !*((_QWORD *)this + 1) )
  {
    v6 = *(__int64 (__fastcall **)(CShape *, struct CPathData **))(*(_QWORD *)this + 104LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v11);
    v7 = v6(this, &v11);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x44Au, 0LL);
      goto LABEL_6;
    }
    if ( !_InterlockedCompareExchange64(v3, (signed __int64)v11, 0LL) )
      v11 = 0LL;
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=(&v11, v3);
  v9 = v11;
  v11 = 0LL;
  *a2 = v9;
LABEL_6:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v11);
  return v2;
}
