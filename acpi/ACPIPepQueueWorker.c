void __fastcall ACPIPepQueueWorker(__int64 a1)
{
  __int128 InputBuffer; // [rsp+30h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 97) )
  {
    *(_BYTE *)(a1 + 97) = 1;
    InputBuffer = 0LL;
    LODWORD(InputBuffer) = 40;
    DWORD2(InputBuffer) = 0;
    BYTE12(InputBuffer) = 1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x10u, 0LL, 0);
    ACPISetDeviceWorker(a1 - 160, 0);
  }
}
