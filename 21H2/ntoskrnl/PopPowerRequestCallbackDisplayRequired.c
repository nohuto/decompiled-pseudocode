/*
 * XREFs of PopPowerRequestCallbackDisplayRequired @ 0x1407F2D00
 * Callers:
 *     PopPowerRequestHandleRequestUpdate @ 0x1407EFDC8 (PopPowerRequestHandleRequestUpdate.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x1406831A8 (PoEnergyContextUpdateComponentPower.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x1407F2AD0 (PopInvokeWin32Callout.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409A4620 (TtmNotifySessionDisplayRequiredChange.c)
 */

__int64 __fastcall PopPowerRequestCallbackDisplayRequired(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-30h] BYREF
  char v8; // [rsp+24h] [rbp-2Ch]
  __int16 v9; // [rsp+25h] [rbp-2Bh]
  char v10; // [rsp+27h] [rbp-29h]
  __int64 v11; // [rsp+28h] [rbp-28h]
  int *v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-18h]
  int *v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+70h] [rbp+20h] BYREF
  int v16; // [rsp+80h] [rbp+30h] BYREF

  v15 = 0;
  PoEnergyContextUpdateComponentPower(*(_QWORD *)(a1 + 136), 12, 2LL - (a3 != 0));
  if ( TtmIsEnabled() )
  {
    LOBYTE(v5) = a3;
    return TtmNotifySessionDisplayRequiredChange(*(unsigned int *)(a1 + 16), *(unsigned int *)(a1 + 36), v5);
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v11 = 4LL;
    v13 = 4LL;
    v7 = 2;
    v16 = a3 != 0 ? 1 : -1;
    v8 = 0;
    v12 = &v16;
    v14 = &v15;
    return PopInvokeWin32Callout(5, (__int64)&v7, 1, (unsigned int *)(a1 + 16));
  }
}
