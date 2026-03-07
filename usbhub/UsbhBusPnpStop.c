__int64 __fastcall UsbhBusPnpStop(__int64 a1, __int64 a2)
{
  UsbhDisableHardReset();
  return UsbhDispatch_BusEvent(a1, a2, 3);
}
