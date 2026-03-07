void __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2)
{
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 1LL, 30);
}
