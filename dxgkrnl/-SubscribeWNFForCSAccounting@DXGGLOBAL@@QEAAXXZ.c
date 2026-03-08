/*
 * XREFs of ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C02E1A94
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0205878 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1C00205D0 (McGenEventRegister_EtwRegister.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::SubscribeWNFForCSAccounting(PVOID *this)
{
  _QWORD *v1; // rbx
  int v3; // eax
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF

  v1 = this + 263;
  v6 = WNF_PO_SCENARIO_CHANGE;
  v3 = ExSubscribeWnfStateChange(this + 263, &v6, 1LL);
  if ( v3 >= 0 )
  {
    v4 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           (PPOWER_SETTING_CALLBACK)PDCIdleResiliencyEngagedCallBackFn,
           0LL,
           this + 264);
    if ( v4 >= 0 )
    {
      McGenEventRegister_EtwRegister(
        &SLEEPSTUDY_ETW_PROVIDER,
        v5,
        SLEEPSTUDY_ETW_PROVIDER_Context,
        SLEEPSTUDY_ETW_PROVIDER_Context);
      *((_DWORD *)this + 531) = 1;
    }
    else
    {
      WdLogSingleEntry1(3LL, v4);
      ExUnsubscribeWnfStateChange(*v1);
      *v1 = 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v3);
  }
}
