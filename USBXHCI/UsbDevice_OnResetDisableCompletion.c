char __fastcall UsbDevice_OnResetDisableCompletion(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return UsbDevice_DisableCompletion(a1, a2, 2, a4);
}
