/*
 * XREFs of HalpMapNvsArea @ 0x140A93E80
 * Callers:
 *     HalpPowerStateCallback @ 0x1403AB2F0 (HalpPowerStateCallback.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpFreeNvsBuffers @ 0x140A93E04 (HalpFreeNvsBuffers.c)
 */

void __fastcall HalpMapNvsArea(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( !HalpNvsPreservedDataSize )
  {
    HalpDisableNvsSaveRestore = 1;
    return;
  }
  HalpDisableNvsSaveRestore = 0;
  HalpNvsPreservedData = HalpMmAllocCtxAlloc(a1, (unsigned int)HalpNvsPreservedDataSize);
  if ( HalpNvsPreservedData )
  {
    v1 = 0LL;
    if ( !HalpNvsRegionCount )
      return;
    while ( 1 )
    {
      v2 = MmMapIoSpaceEx(
             *(_QWORD *)(HalpNvsRegionData + 24 * v1),
             *(unsigned int *)(HalpNvsRegionData + 24 * v1 + 8),
             0x204u);
      *(_QWORD *)(HalpNvsRegionData + 24 * v1 + 16) = v2;
      if ( !v2 )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= HalpNvsRegionCount )
        return;
    }
  }
  DbgPrint("HALACPI:  The BIOS's non-volatile data will not be preserved\n");
  HalpDisableNvsSaveRestore = 1;
  HalpFreeNvsBuffers(v3);
}
