/*
 * XREFs of ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x1801D4F88
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801D4D50 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801D50B8 (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWatermarkStack<CBspNode *,64,2,10>::Pop(int *a1, _QWORD *a2)
{
  int v3; // ecx
  __int64 v5; // rcx

  v3 = *a1;
  if ( !v3 )
    return 0;
  v5 = (unsigned int)(v3 - 1);
  *a1 = v5;
  if ( a2 )
    *a2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v5);
  return 1;
}
