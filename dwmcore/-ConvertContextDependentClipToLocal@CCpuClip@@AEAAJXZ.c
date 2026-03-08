/*
 * XREFs of ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1801F8E30
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x1800E6EA4 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1801F8D4C (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C728 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800E6F98 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CCpuClip::ConvertContextDependentClipToLocal(CCpuClip *this)
{
  unsigned int v1; // esi
  unsigned int v3; // xmm1_4
  int v4; // eax
  __int64 v5; // rcx
  struct CShape *v6; // rbx
  struct CShape *v8; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v9[80]; // [rsp+48h] [rbp-19h] BYREF
  struct D2D_MATRIX_3X2_F v10; // [rsp+98h] [rbp+37h] BYREF

  v1 = 0;
  if ( *(_QWORD *)this )
  {
    v3 = *((_DWORD *)this + 3);
    v10.m11 = *((FLOAT *)this + 2);
    *(_QWORD *)&v10.m[0][1] = __PAIR64__(*((_DWORD *)this + 6), v3);
    *(_QWORD *)&v10.m[1][1] = __PAIR64__(*((_DWORD *)this + 14), *((_DWORD *)this + 7));
    v10.dy = *((FLOAT *)this + 15);
    D2D1::Matrix3x2F::Invert(&v10);
    CMILMatrix::CMILMatrix((CMILMatrix *)v9, &v10);
    v4 = CShape::CopyShape(*(CShape **)this, (const struct CMILMatrix *)v9, &v8);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x112u, 0LL);
    }
    else
    {
      v6 = v8;
      CShapePtr::Release((CCpuClip *)((char *)this + 80));
      *((_QWORD *)this + 10) = v6;
      *((_BYTE *)this + 88) = 1;
    }
  }
  return v1;
}
