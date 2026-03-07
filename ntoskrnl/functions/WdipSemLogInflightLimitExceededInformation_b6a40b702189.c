__int64 __fastcall WdipSemLogInflightLimitExceededInformation(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int updated; // edi
  __int64 *v8; // rsi
  _QWORD v10[126]; // [rsp+20h] [rbp-418h] BYREF
  __int64 v11; // [rsp+440h] [rbp+8h] BYREF

  v6 = 0;
  v11 = 0LL;
  updated = 0;
  memset(v10, 0, sizeof(v10));
  if ( a1 && a3 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_INFLIGHT_MAX) || (unsigned __int8)WdipSemSqmEnabled() )
    {
      v8 = (__int64 *)WdipSemEnabledInstanceTable;
      if ( &WdipSemEnabledInstanceTable == (__int64 *)WdipSemEnabledInstanceTable )
      {
LABEL_14:
        updated = -1073741823;
      }
      else
      {
        while ( 1 )
        {
          updated = WdipSemUpdateInflightScenarioTable(v8[4], *(unsigned __int16 *)(v8[4] + 16), v10, &v11);
          if ( updated < 0 )
            break;
          v8 = (__int64 *)*v8;
          if ( &WdipSemEnabledInstanceTable == v8 )
          {
            if ( !v11 )
              goto LABEL_14;
            if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_INFLIGHT_MAX) )
              WdipSemWriteInflightLimitExceededEvent(a1, a2, a3, v10);
            if ( (unsigned __int8)WdipSemSqmEnabled() )
              WdipSemUpdateFrequentScenarioTable(v11);
            break;
          }
        }
      }
    }
  }
  else
  {
    updated = -1073741811;
  }
  if ( LODWORD(v10[125]) )
  {
    do
      WdipSemFastFree(5, (struct _SLIST_ENTRY *)v10[v6++]);
    while ( v6 < LODWORD(v10[125]) );
  }
  return (unsigned int)updated;
}
