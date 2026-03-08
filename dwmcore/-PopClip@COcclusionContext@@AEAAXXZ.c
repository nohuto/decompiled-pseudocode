/*
 * XREFs of ?PopClip@COcclusionContext@@AEAAXXZ @ 0x1801E4174
 * Callers:
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x1800E8420 (-Pop@COcclusionContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x1800E84A8 (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateTyp.c)
 */

void __fastcall COcclusionContext::PopClip(COcclusionContext *this)
{
  __int64 v1; // r8
  int v2; // eax
  int v3; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop((unsigned int *)this + 360, &v4);
  v2 = *(_DWORD *)(v1 + 144);
  if ( v2 )
    *(_DWORD *)(v1 + 144) = v2 - 1;
  v3 = *(_DWORD *)(v1 + 176);
  if ( v3 )
    *(_DWORD *)(v1 + 176) = v3 - 1;
}
