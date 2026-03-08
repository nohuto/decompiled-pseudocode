/*
 * XREFs of ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x1801D4FB4
 * Callers:
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801D4FFC (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801D50B8 (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = v1 - 1;
    LOBYTE(v1) = 1;
  }
  return v1;
}
