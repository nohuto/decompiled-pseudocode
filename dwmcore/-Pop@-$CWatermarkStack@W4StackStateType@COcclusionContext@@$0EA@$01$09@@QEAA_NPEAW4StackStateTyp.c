/*
 * XREFs of ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x1800E84A8
 * Callers:
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x1800E8420 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?PopClip@COcclusionContext@@AEAAXXZ @ 0x1801E4174 (-PopClip@COcclusionContext@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(unsigned int *a1, _DWORD *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx

  v3 = *a1;
  if ( !v3 )
    return 0;
  v4 = v3 - 1;
  *a1 = v4;
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v4);
  return 1;
}
