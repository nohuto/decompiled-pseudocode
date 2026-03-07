char __fastcall x86BiosInitializeBiosEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  memset(&x86BiosLowMemory, 0, 0x800uLL);
  x86BiosIoSpace = 0LL;
  x86BiosIoMemory = a2;
  x86BiosFrameBuffer = a3;
  result = XmInitializeEmulator();
  x86BiosInitialized = 1;
  x86BiosTransferMemory = a4;
  x86BiosTransferLength = 0x2000;
  if ( qword_140C01A40 )
  {
    if ( !XmPciBiosPresent )
    {
      XmPciBiosPresent = 1;
      XmGetPciData = (__int64)x86BiosGetPciBusData;
      XmSetPciData = (__int64)x86BiosSetPciBusData;
      result = HalpMaxPciBus;
      XmNumberPciBusses = -1;
      if ( HalpMaxPciBus )
      {
        if ( HalpMaxPciBus != 255 )
        {
          result = HalpMaxPciBus + 1;
          XmNumberPciBusses = HalpMaxPciBus + 1;
        }
      }
    }
  }
  return result;
}
