/*
 * XREFs of ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x180022224
 * Callers:
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x180021404 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@VCMILMatrix@@@std@@$0A@@?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180022308 (--$-4U-$default_delete@VCMILMatrix@@@std@@$0A@@-$unique_ptr@VCMILMatrix@@U-$default_delete@VCMIL.c)
 *     ??$make_unique@VCMILMatrix@@$$V$0A@@std@@YA?AV?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@0@XZ @ 0x18002233C (--$make_unique@VCMILMatrix@@$$V$0A@@std@@YA-AV-$unique_ptr@VCMILMatrix@@U-$default_delete@VCMILM.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180022370 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x1800DFED0 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

bool __fastcall CCpuClippingData::TransformToDifferentScope(
        CCpuClippingData *this,
        struct CCpuClippingData *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4)
{
  _QWORD *v4; // rsi
  __int64 v9; // rax
  struct CMILMatrix *v10; // rbx
  int v11; // eax
  bool v12; // di
  void *v14; // [rsp+20h] [rbp-28h] BYREF
  struct CMILMatrix *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v4 = (_QWORD *)((char *)a2 + 40);
  if ( *((_QWORD *)a2 + 5) )
  {
    std::unique_ptr<CMILMatrix>::operator=<std::default_delete<CMILMatrix>,0>(&v15, (char *)a2 + 40);
  }
  else
  {
    v9 = std::make_unique<CMILMatrix,,0>(&v14);
    std::unique_ptr<CMILMatrix>::operator=<std::default_delete<CMILMatrix>,0>(&v15, v9);
    if ( v14 )
      operator delete(v14, 0x44uLL);
  }
  v10 = v15;
  if ( CCpuClippingData::CalcScopeTransformFromWorld(a3, a4, v15) && CCpuClippingData::IsScopePreservingTransform(v10) )
  {
    std::unique_ptr<CMILMatrix>::operator=<std::default_delete<CMILMatrix>,0>(v4, &v15);
    v10 = v15;
    *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
    v11 = *((_DWORD *)this + 14);
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = v11;
    LOBYTE(v11) = *((_BYTE *)this + 72);
    *(_WORD *)((char *)a2 + 73) = 0;
    *((_BYTE *)a2 + 72) = v11;
    *((_BYTE *)a2 + 75) = 0;
  }
  v12 = *v4 != 0LL;
  if ( v10 )
    operator delete(v10, 0x44uLL);
  return v12;
}
