/*
 * XREFs of ?PopLight@CDrawingContext@@AEAAJXZ @ 0x18000DE74
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18008E940 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18000DEB4 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800E29EC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 */

__int64 __fastcall CDrawingContext::PopLight(CDrawingContext *this)
{
  __int64 v1; // r8
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, v6, this);
  v2 = CLightStack::Pop((CLightStack *)(v1 + 560));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x18D3u, 0LL);
  return v4;
}
