/*
 * XREFs of Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_D @ 0x1C00180C4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001A2FC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_IsHandlePresentInCollection @ 0x1C0034130 (Controller_IsHandlePresentInCollection.c)
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1C003539C (Controller_TranslateFrameNumberToQpcValue.c)
 *     WPP_RECORDER_SF_II @ 0x1C0037144 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C00377F0 (WPP_RECORDER_SF_qqqd.c)
 */

__int64 __fastcall Controller_UcxEvtGetFrameNumberAndQpcForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  LARGE_INTEGER *v9; // rdi
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  char v13; // r12
  int v14; // ebx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  LARGE_INTEGER *v18; // rcx
  int v20; // [rsp+20h] [rbp-68h]
  __int64 *v21; // [rsp+50h] [rbp-38h] BYREF
  LARGE_INTEGER *v22; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  LOBYTE(v7) = 0;
  LOBYTE(v8) = 0;
  v9 = (LARGE_INTEGER *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                          WdfDriverGlobals,
                          a1,
                          off_1C0063428);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2240))(WdfDriverGlobals, a2);
  if ( a4 < 0x3C )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(v9[9].QuadPart, v10, v11, 305);
    v14 = -1073741811;
    goto LABEL_33;
  }
  v20 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v21);
  if ( v14 >= 0 )
  {
    if ( !*v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(v9[9].QuadPart, v10, 4, 306, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      }
LABEL_9:
      v14 = -1073741811;
      goto LABEL_33;
    }
    if ( v13 == 1 )
    {
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
      v8 = v15;
      if ( !v15 )
      {
        v14 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
                   WdfDriverGlobals,
                   a2,
                   (unsigned int)v14,
                   a3);
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_D(v9[9].QuadPart, v16, 4, 307, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, 120);
        goto LABEL_33;
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             v15,
             off_1C00633B0);
      v17 = *(_QWORD *)(v7 + 24);
      v10 = *v21;
      if ( v17 != *v21 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_qq(
            v9[9].QuadPart,
            v10,
            4,
            308,
            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
            *v21,
            v17);
        }
        goto LABEL_9;
      }
    }
    else
    {
      v8 = *v21;
      if ( !Controller_IsHandlePresentInCollection((__int64)v9, *v21) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_q(v9[9].QuadPart, v10, 4, 309, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v8);
        }
        goto LABEL_9;
      }
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v8,
           off_1C00633B0);
    if ( !*(_BYTE *)(v7 + 48) )
    {
      v14 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023
                                                                                                 + 2120))(
                 WdfDriverGlobals,
                 a2,
                 (unsigned int)v14,
                 a3);
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_q(v9[9].QuadPart, v10, 4, 310, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v8);
      goto LABEL_33;
    }
    if ( a3 >= 0x3C )
    {
      v20 = 0;
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, LARGE_INTEGER **))(WdfFunctions_01023 + 2160))(
              WdfDriverGlobals,
              a2,
              a3,
              &v22);
      if ( v14 >= 0 )
      {
        if ( v9[49].LowPart == 1 )
        {
          ++*(_DWORD *)(v7 + 52);
          v18 = v22;
          if ( v22[1].LowPart || v22[1].HighPart )
          {
            ++*(_DWORD *)(v7 + 56);
            v18 = v22;
          }
          v18[4].HighPart = v9[85].LowPart;
          v22[3] = v9[98];
          v14 = Controller_TranslateFrameNumberToQpcValue((__int64)v9, v22);
        }
        else
        {
          v14 = -1073741436;
        }
      }
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(v9[9].QuadPart, v10, v11, 311);
    goto LABEL_9;
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqd(v9[9].QuadPart, v10, v11, v12, v20, a2, v8, v7, v14);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v14,
           a3);
}
