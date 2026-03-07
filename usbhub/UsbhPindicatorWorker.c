__int64 __fastcall UsbhPindicatorWorker(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  FdoExt(a1);
  result = UsbhGetPortData(a1, a2);
  if ( result )
    return Usbh_PIND_Timeout_Action(a1, result, a3);
  return result;
}
