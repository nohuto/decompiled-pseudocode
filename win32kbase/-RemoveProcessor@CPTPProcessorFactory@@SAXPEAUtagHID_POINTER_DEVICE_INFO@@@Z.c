/*
 * XREFs of ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020F07C
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0211F60 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x1C020CC9C (--1CPTPProcessor@@AEAA@XZ.c)
 */

void __fastcall CPTPProcessorFactory::RemoveProcessor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  char *v1; // rbx

  v1 = (char *)*((_QWORD *)a1 + 132);
  if ( v1 )
  {
    CPTPProcessor::~CPTPProcessor(*((CPTPProcessor **)a1 + 132));
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *((_QWORD *)a1 + 132) = 0LL;
  }
}
