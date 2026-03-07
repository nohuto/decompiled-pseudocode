void __fastcall __noreturn UsbhTrapFatal_Dbg(__int64 a1, ULONG_PTR a2)
{
  if ( a1 )
    USBHUB_TriggerCallBacks(a1);
  KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, 0LL);
}
