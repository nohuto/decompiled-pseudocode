/*
 * XREFs of ACPIPepInitializePlatformNotificationSupport @ 0x1C008A9B0
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0081770 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     ACPIAmliEvaluateDsm @ 0x1C007C65C (ACPIAmliEvaluateDsm.c)
 */

char __fastcall ACPIPepInitializePlatformNotificationSupport(char *Context)
{
  _QWORD *v2; // rcx
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  int v5; // r11d
  int v6; // esi
  char i; // di
  unsigned int v8; // eax
  int v9; // eax
  int v10; // r11d
  NTSTATUS v11; // eax
  char v12; // dl
  int v13; // eax
  int v14; // eax
  _BYTE OutputBuffer[4]; // [rsp+38h] [rbp-19h] BYREF
  signed __int32 v17; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v18; // [rsp+40h] [rbp-11h] BYREF
  __int128 v19; // [rsp+48h] [rbp-9h] BYREF
  _OWORD v20[3]; // [rsp+58h] [rbp+7h] BYREF

  DWORD1(v20[0]) = 0;
  OutputBuffer[0] = 0;
  *(_QWORD *)(Context + 260) = 1LL;
  *((_DWORD *)Context + 46) = 1;
  *((_QWORD *)Context + 24) = 0LL;
  *((_DWORD *)Context + 50) = 0;
  KeInitializeEvent((PRKEVENT)(Context + 208), SynchronizationEvent, 0);
  v2 = (_QWORD *)*((_QWORD *)Context + 95);
  memset(v20, 0, sizeof(v20));
  v17 = 0;
  v18 = 0LL;
  v19 = PEP_NOTIFICATIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v2, (__int64)&v19, 0, 0, v20, &v18) >= 0 )
  {
    if ( *(_WORD *)(v18 + 2) == 3 )
    {
      v3 = *(_DWORD *)(v18 + 24);
      if ( v3 )
      {
        v4 = 0;
        v5 = 0;
        v6 = 0;
        for ( i = 0; ; i += 8 )
        {
          v8 = 4;
          if ( v3 < 4 )
            v8 = v3;
          if ( v4 >= v8 )
            break;
          v9 = v5;
          v10 = *(unsigned __int8 *)(v4 + *(_QWORD *)(v18 + 32)) << i;
          if ( v3 >= 4 )
            v9 = v6;
          ++v4;
          v5 = v9 | v10;
          v17 = v5;
          v6 = v5;
        }
      }
    }
    AMLIFreeDataBuffs(v18);
  }
  v11 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, OutputBuffer, 1u);
  v12 = 0;
  if ( v11 >= 0 )
    v12 = OutputBuffer[0];
  if ( _bittest(&v17, 3u) && _bittest(&v17, 4u) )
    *((_DWORD *)Context + 61) |= 2u;
  if ( _bittest(&v17, 5u) && _bittest(&v17, 6u) )
    *((_DWORD *)Context + 61) |= 1u;
  if ( _bittest(&v17, 7u) && _bittest(&v17, 8u) )
    *((_DWORD *)Context + 61) |= 4u;
  v13 = *((_DWORD *)Context + 61);
  if ( _bittest(&v17, 9u) )
  {
    v13 |= 8u;
    *((_DWORD *)Context + 61) = v13;
  }
  if ( !v12 )
  {
    v13 &= 0xFFFFFFFA;
    *((_DWORD *)Context + 61) = v13;
  }
  if ( v13 )
  {
    LOBYTE(v13) = ACPIInitReferenceDeviceExtension((__int64)Context);
    if ( (_BYTE)v13 )
    {
      v14 = *((_DWORD *)Context + 61);
      Context[240] = 1;
      if ( (v14 & 1) != 0 )
        PoRegisterPowerSettingCallback(
          0LL,
          &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
          ACPIPepPowerSettingChangeCallback,
          Context,
          (PVOID *)Context + 34);
      if ( (*((_DWORD *)Context + 61) & 2) != 0 )
      {
        PoRegisterPowerSettingCallback(
          0LL,
          &GUID_CONSOLE_DISPLAY_STATE,
          ACPIPepPowerSettingChangeCallback,
          Context,
          (PVOID *)Context + 35);
        PoRegisterPowerSettingCallback(
          0LL,
          &GUID_GLOBAL_USER_PRESENCE,
          ACPIPepPowerSettingChangeCallback,
          Context,
          (PVOID *)Context + 36);
      }
      if ( (*((_DWORD *)Context + 61) & 4) != 0 )
        PoRegisterPowerSettingCallback(
          0LL,
          &GUID_LOW_POWER_EPOCH,
          ACPIPepPowerSettingChangeCallback,
          Context,
          (PVOID *)Context + 37);
      v13 = *((_DWORD *)Context + 61);
      if ( (v13 & 8) != 0 )
        LOBYTE(v13) = ExSubscribeWnfStateChange(
                        Context + 304,
                        &WNF_PO_MODERN_STANDBY_EXIT_INITIATED,
                        1LL,
                        0LL,
                        ACPIPepWnfCallback,
                        Context);
    }
  }
  return v13;
}
