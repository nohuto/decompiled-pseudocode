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
