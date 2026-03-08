/*
 * XREFs of ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D5BD8
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D5798 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x18008A560 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800B22DC (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushTransformForChildVisual(
        CBspPreComputeHelper *this,
        CVisual **a2,
        const struct CVisual **a3)
{
  int v6; // ebx
  const struct CVisual *TransformParent; // rax
  const struct CVisual *v8; // r9
  const struct CVisual *v9; // r8
  int v10; // ecx
  const struct CVisual **v11; // rax
  int v12; // eax
  const struct CMILMatrix *v13; // r8
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  _BYTE v19[64]; // [rsp+30h] [rbp-B8h] BYREF
  int v20; // [rsp+70h] [rbp-78h]
  char v21[64]; // [rsp+80h] [rbp-68h] BYREF
  int v22; // [rsp+C0h] [rbp-28h]
  bool v23; // [rsp+F0h] [rbp+8h] BYREF

  v6 = 0;
  TransformParent = CVisual::GetTransformParent((CVisual *)a3, a2, 0LL);
  v8 = TransformParent;
  if ( TransformParent )
  {
    v9 = a3[11];
    if ( TransformParent != v9 )
    {
      v10 = *((_DWORD *)this + 8);
      v11 = 0LL;
      if ( v10 )
        v11 = (const struct CVisual **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)(v10 - 1));
      while ( v9 )
      {
        if ( v9 == v8 )
          goto LABEL_12;
        if ( v9 == *v11 )
          goto LABEL_11;
        v9 = (const struct CVisual *)*((_QWORD *)v9 + 11);
        ++v6;
      }
      if ( !v8 )
        goto LABEL_12;
LABEL_11:
      v6 = 0;
    }
  }
LABEL_12:
  v22 = 0;
  v12 = *((_DWORD *)this + 24);
  v13 = 0LL;
  v20 = 0;
  v14 = (unsigned int)(v12 - v6 - 1);
  if ( *((_DWORD *)this + 24) && (unsigned int)v14 < *((_DWORD *)this + 24) )
    v13 = (const struct CMILMatrix *)(*((_QWORD *)this + 14) + 68 * v14);
  CVisual::CalcTransform((CVisual *)a3, a2, v13, &v23, (struct CMILMatrix *)v21, (struct CMILMatrix *)v19);
  v15 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 96), (const struct CMILMatrix *)v19, 0);
  v17 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xF4u, 0LL);
  return v17;
}
