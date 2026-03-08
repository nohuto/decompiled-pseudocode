/*
 * XREFs of PpmWmiDispatch @ 0x14084C650
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     PpmWmiRegisterInfo @ 0x14084C6B0 (PpmWmiRegisterInfo.c)
 *     PpmWmiGetAllData @ 0x1409931AC (PpmWmiGetAllData.c)
 */

__int64 __fastcall PpmWmiDispatch(int a1, __int64 *a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  char v6; // bl
  char v7; // r10
  __int64 result; // rax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx

  v6 = 0;
  v7 = 0;
  if ( a1 > 5 )
  {
    if ( a1 == 8 )
    {
      result = PpmWmiRegisterInfo(*(unsigned int *)(a5 - 33796));
      goto LABEL_4;
    }
LABEL_7:
    *a6 = 0;
    return 3221225488LL;
  }
  if ( a1 != 5 )
  {
    if ( a1 )
    {
      v9 = a1 - 1;
      if ( v9 )
      {
        if ( v9 != 3 )
          goto LABEL_7;
        v6 = 1;
        goto LABEL_13;
      }
    }
    else
    {
      v7 = 1;
    }
    result = PpmWmiGetAllData((int)a5 - 232, (_DWORD)a2, a3, a4, (__int64)a6, v7);
LABEL_4:
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
LABEL_13:
  *a6 = 0;
  v10 = *a2;
  v11 = PPM_PERFSTATE_CHANGE_GUID - *a2;
  if ( PPM_PERFSTATE_CHANGE_GUID == *a2 )
    v11 = 0xBB9EB5430E9092B8uLL - a2[1];
  if ( v11 )
  {
    v13 = PPM_PERFSTATE_DOMAIN_CHANGE_GUID - v10;
    if ( PPM_PERFSTATE_DOMAIN_CHANGE_GUID == v10 )
      v13 = 0x1BF290CA33678B9LL - a2[1];
    if ( v13 )
    {
      v14 = PPM_IDLESTATE_CHANGE_GUID - v10;
      if ( PPM_IDLESTATE_CHANGE_GUID == v10 )
        v14 = 0x6C4CACA73084CC9ELL - a2[1];
      if ( v14 )
      {
        v15 = PPM_IDLE_ACCOUNTING_EX_GUID - v10;
        if ( PPM_IDLE_ACCOUNTING_EX_GUID == v10 )
          v15 = 0xEE12C91EE3725281uLL - a2[1];
        if ( v15 )
        {
          v16 = PPM_THERMALCONSTRAINT_GUID - v10;
          if ( PPM_THERMALCONSTRAINT_GUID == v10 )
            v16 = 0x881A93820DF32C8CuLL - a2[1];
          if ( v16 )
          {
            v17 = PPM_THERMAL_POLICY_CHANGE_GUID - v10;
            if ( PPM_THERMAL_POLICY_CHANGE_GUID == v10 )
              v17 = 0x4D65C6760138DC8BLL - a2[1];
            if ( v17 )
              return 3221226133LL;
            v12 = &WmiThermalPolicyEventEnabled;
          }
          else
          {
            v12 = &WmiThermalEventEnabled;
          }
        }
        else
        {
          v12 = (volatile signed __int32 *)&WmiIdleAccntEventEnabled;
        }
      }
      else
      {
        v12 = (volatile signed __int32 *)&WmiIdleStateEventEnabled;
      }
    }
    else
    {
      v12 = &WmiPerfStateDomainEventEnabled;
    }
  }
  else
  {
    v12 = &WmiPerfStateEventEnabled;
  }
  if ( v6 )
  {
    if ( _InterlockedIncrement(v12) == 1 && v12 == (volatile signed __int32 *)&WmiIdleAccntEventEnabled )
      KiSetTimerEx((__int64)&PpmWmiIdleAccountingTimer, 0LL, 10000, 0, (__int64)&PpmWmiIdleAccountingDpc);
  }
  else if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 && v12 == (volatile signed __int32 *)&WmiIdleAccntEventEnabled )
  {
    KeCancelTimer(&PpmWmiIdleAccountingTimer);
  }
  return 0LL;
}
