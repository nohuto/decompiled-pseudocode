/*
 * XREFs of x86BiosExecuteInterruptShadowed @ 0x140396530
 * Callers:
 *     x86BiosCall @ 0x1403964E0 (x86BiosCall.c)
 * Callees:
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     XmEmulateInterrupt @ 0x14039658C (XmEmulateInterrupt.c)
 */

__int64 __fastcall x86BiosExecuteInterruptShadowed(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( !x86BiosInitialized )
    return 4LL;
  if ( HalpIoMemoryBase )
    x86BiosIoMemory = (__int64)HalpIoMemoryBase;
  if ( HalpFrameBufferBase )
    x86BiosFrameBuffer = HalpFrameBufferBase;
  v2 = XmEmulateInterrupt(a1, a2, HalpIoMemoryBase);
  v3 = v2;
  if ( v2 != 1 )
    DbgPrint("HAL: Interrupt emulation failed, status %lx\n", v2);
  return v3;
}
