NTSTATUS __fastcall HalpSetShutdownResetHandler(__int64 a1)
{
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-28h] BYREF

  InputBuffer[1] = a1;
  InputBuffer[2] = 0LL;
  InputBuffer[0] = 5LL;
  return ZwPowerInformation(SystemPowerStateHandler, InputBuffer, 0x18u, 0LL, 0);
}
