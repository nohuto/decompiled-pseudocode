/*
 * XREFs of ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801ADDE0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B7F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800F0D00 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1802103A8 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 */

__int64 __fastcall CHitTestContext::BspHitTest(
        const struct D2D_POINT_2F *this,
        const struct CMILMatrix *a2,
        struct CPolygon *a3)
{
  unsigned int v3; // ebx
  struct D2D_POINT_2F v7; // rsi
  const enum MilBackfaceVisibility::Enum *TopByReference; // rax
  const struct CMILMatrix *v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  bool v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( !*(_QWORD *)&this[14] )
  {
    v7 = (struct D2D_POINT_2F)*((_QWORD *)a3 + 27);
    if ( (*(unsigned __int8 (__fastcall **)(struct D2D_POINT_2F))(**(_QWORD **)&v7 + 248LL))(v7) )
    {
      v13 = 0;
      TopByReference = (const enum MilBackfaceVisibility::Enum *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)&this[22]);
      v10 = CPolygon::HitTestWithTransformation(a3, this + 11, v9, a2, TopByReference, &v13);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1A4u, 0LL);
      }
      else if ( v13 )
      {
        this[14] = v7;
      }
    }
  }
  return v3;
}
