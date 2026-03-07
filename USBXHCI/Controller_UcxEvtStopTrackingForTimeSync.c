__int64 __fastcall Controller_UcxEvtStopTrackingForTimeSync(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdi
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rsi
  unsigned int v13; // ebx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0LL;
  LOBYTE(v7) = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2240))(WdfDriverGlobals);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063428);
  v12 = v9;
  if ( a4 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 293);
    v13 = -1073741811;
    goto LABEL_5;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v19,
          0LL);
  if ( (v13 & 0x80000000) == 0 )
  {
    if ( !*v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), v10, 4, 294, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      }
LABEL_13:
      v13 = -1073741811;
      goto LABEL_5;
    }
    if ( v8 == 1 )
    {
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
      v7 = v15;
      if ( !v15 )
      {
        v13 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v13);
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(v12 + 72),
          v16,
          4,
          295,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          124);
        goto LABEL_5;
      }
      v17 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                          WdfDriverGlobals,
                          v15,
                          off_1C00633B0)
                      + 24);
      v10 = *v19;
      if ( v17 != *v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_qq(
            *(_QWORD *)(v12 + 72),
            v10,
            4,
            296,
            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
            *v19,
            v17);
        }
        goto LABEL_13;
      }
    }
    else
    {
      v7 = *v19;
      if ( !Controller_IsHandlePresentInCollection(v12, *v19) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_q(
            *(_QWORD *)(v12 + 72),
            v10,
            4,
            297,
            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
            v7);
        }
        goto LABEL_13;
      }
    }
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v7,
                      off_1C00633B0)
                  + 48) )
    {
      if ( *(_DWORD *)(v12 + 392) == 1 )
      {
        v18 = Controller_StopTimeTrackingForHandle(v12, v7, 1);
        v13 = v18;
        if ( v18 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_qd(
              *(_QWORD *)(v12 + 72),
              v10,
              4,
              299,
              (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
              v7,
              v18);
          }
          if ( !v8 )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1664))(WdfDriverGlobals, v7);
        }
      }
      else
      {
        v13 = -1073741436;
      }
    }
    else
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v13);
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v12 + 72),
        v10,
        4,
        298,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        v7);
    }
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(v12 + 72),
      v10,
      4,
      300,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      v13,
      v7,
      v8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v13);
}
