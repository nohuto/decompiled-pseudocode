/*
 * XREFs of ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180199F30
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180199AE4 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180011698 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18003F508 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x1800818F0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1800D96E4 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushTransformForChildVisual(
        CBspPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  int v4; // ebx
  struct CVisual *TransformParentNoRef; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  __int128 *v11; // r9
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _BYTE v18[64]; // [rsp+40h] [rbp-B8h] BYREF
  int v19; // [rsp+80h] [rbp-78h]
  _BYTE v20[64]; // [rsp+90h] [rbp-68h] BYREF
  int v21; // [rsp+D0h] [rbp-28h]
  char v22; // [rsp+100h] [rbp+8h] BYREF

  v4 = 0;
  TransformParentNoRef = CVisual::GetTransformParentNoRef(a3);
  if ( TransformParentNoRef && TransformParentNoRef != *((struct CVisual **)a3 + 10) )
  {
    v8 = *(_QWORD *)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this + 32);
    while ( v9 )
    {
      if ( v9 == v10 )
        goto LABEL_10;
      if ( v9 == v8 )
        break;
      v9 = *(_QWORD *)(v9 + 80);
      ++v4;
    }
    if ( v9 != v10 )
      v4 = 0;
  }
LABEL_10:
  v21 = 0;
  v11 = 0LL;
  v12 = *((_DWORD *)this + 24) - v4;
  v19 = 0;
  v13 = (unsigned int)(v12 - 1);
  if ( *((_DWORD *)this + 24) && (unsigned int)v13 < *((_DWORD *)this + 24) )
    v11 = (__int128 *)(*((_QWORD *)this + 14) + 68 * v13);
  CVisual::CalcCpuClippingTransform((__int64)a3, 5, (__int64)a2, v11, &v22, (CMILMatrix *)v20, (__int64)v18);
  v14 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 96), (const struct CMILMatrix *)v18, 0);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xF4u, 0LL);
  return v16;
}
