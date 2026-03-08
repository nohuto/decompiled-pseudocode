/*
 * XREFs of ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800D28F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRoundedRectangleShape@@@Z @ 0x18007F4B0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRoundedRectangleShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800D2BE4 (--0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 */

__int64 __fastcall CEllipseGeometry::GetShapeDataCore(
        CEllipseGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v6; // xmm1_4
  unsigned int v7; // esi
  float v8; // xmm0_4
  struct CObjectCache *ObjectCache; // rax
  CRoundedRectangleShape *v10; // rcx
  int v11; // r8d
  CRoundedRectangleShape *v12; // rbx
  __int64 result; // rax
  float v14[13]; // [rsp+30h] [rbp-48h] BYREF
  char v15; // [rsp+64h] [rbp-14h]

  v3 = *((float *)this + 38);
  v4 = *((float *)this + 39);
  v6 = *((float *)this + 36);
  v7 = 0;
  v14[12] = 0.0;
  v8 = *((float *)this + 37) - v4;
  v14[4] = v3;
  v14[5] = v4;
  v15 = 1;
  v14[0] = v6 - v3;
  v14[1] = v8;
  v14[2] = v3 + v3;
  v14[3] = v4 + v4;
  ObjectCache = CThreadContext::GetObjectCache(this);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (CRoundedRectangleShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( !v10 )
  {
    v10 = (CRoundedRectangleShape *)DefaultHeap::Alloc(0x18uLL);
    if ( !v10 )
    {
      v12 = 0LL;
      goto LABEL_8;
    }
  }
  v12 = CRoundedRectangleShape::CRoundedRectangleShape(v10, (const struct CRoundedRectangleGeometryData *)v14);
  if ( !v12 )
  {
LABEL_8:
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, -2147024882, 0x62u, 0LL);
  }
  CShapePtr::Release(a3);
  *(_QWORD *)a3 = v12;
  result = v7;
  *((_BYTE *)a3 + 8) = 1;
  return result;
}
