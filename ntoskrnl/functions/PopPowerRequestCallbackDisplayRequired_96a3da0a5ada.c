__int64 __fastcall PopPowerRequestCallbackDisplayRequired(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+28h] [rbp-28h]
  int *v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-18h]
  int *v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+70h] [rbp+20h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF

  v12 = 0;
  PoEnergyContextUpdateComponentPower(*(_QWORD *)(a1 + 136), 12, 2LL - (a3 != 0));
  if ( (unsigned __int8)TtmIsEnabled() )
  {
    LOBYTE(v5) = a3;
    return TtmNotifySessionDisplayRequiredChange(*(unsigned int *)(a1 + 16), *(unsigned int *)(a1 + 36), v5);
  }
  else
  {
    v8 = 4LL;
    v10 = 4LL;
    v13 = a3 != 0 ? 1 : -1;
    v9 = &v13;
    v11 = &v12;
    return PopInvokeWin32Callout(5LL, &v7, 1LL, a1 + 16, 2);
  }
}
