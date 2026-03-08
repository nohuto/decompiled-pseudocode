/*
 * XREFs of ACPIPepQueueWorker @ 0x1C008AF08
 * Callers:
 *     ACPIPepPowerSettingChangeCallback @ 0x1C008ADB0 (ACPIPepPowerSettingChangeCallback.c)
 *     ACPIPepWnfCallback @ 0x1C008AF90 (ACPIPepWnfCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPISetDeviceWorker @ 0x1C00474D4 (ACPISetDeviceWorker.c)
 */

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
