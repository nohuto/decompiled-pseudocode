/*
 * XREFs of Interrupter_PrepareHardware @ 0x1C0072C28
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C0008228 (Interrupter_SetSecondaryInterrupterCount.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C000880C (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C003E3E8 (WPP_RECORDER_SF_Dd.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070198 (Interrupter_CreateInterrupter.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C0072438 (Interrupter_CmResList_GetInterrupterCountAndType.c)
 *     Interrupter_PrepareInterrupter @ 0x1C007275C (Interrupter_PrepareInterrupter.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C0072D44 (Interrupter_PopulateInterrupterLookupTable.c)
 */

__int64 __fastcall Interrupter_PrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v4; // r15
  __int64 v6; // rbp
  int v8; // edx
  unsigned int v9; // r14d
  int v10; // ebx
  int v11; // r13d
  __int64 Pool2; // rax
  __int64 v13; // rcx
  unsigned __int8 v14; // dl
  int v15; // edx
  unsigned int v16; // ebx
  _QWORD *v17; // rcx
  int v19; // r9d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  bool v22; // cc
  int v23; // r9d
  unsigned int i; // r14d
  _BYTE *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // edx
  int v29; // r8d
  __int64 v30; // r15
  int v31; // r9d
  __int64 v32; // r14
  int v33; // [rsp+20h] [rbp-58h]
  unsigned int v34; // [rsp+80h] [rbp+8h] BYREF
  __int64 v35; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+98h] [rbp+20h] BYREF

  v35 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_DWORD *)(a1 + 16);
  LODWORD(v6) = 0;
  v36 = 0LL;
  v34 = 0;
  Interrupter_CmResList_GetInterrupterCountAndType(a1, a2, &v34, (int *)(a1 + 16));
  v9 = v34;
  if ( !v34 )
  {
    v16 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v16;
    v19 = 17;
LABEL_14:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v8, 9, v19, (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids);
    return v16;
  }
  if ( *(_DWORD *)(v3 + 636) == 1 )
  {
    v20 = (*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) >> 8) & 0x7FF;
    if ( v20 < 2 )
    {
      v16 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v16;
      v19 = 18;
      goto LABEL_14;
    }
    if ( (*(_QWORD *)(v3 + 336) & 0x1000LL) != 0 )
    {
      v16 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v16;
      v19 = 19;
      goto LABEL_14;
    }
    v21 = *(_DWORD *)(a1 + 64);
    if ( v21 == -1 )
    {
      if ( g_ReservedMessageForOffloadMode == -1 )
        g_ReservedMessageForOffloadMode = ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) >> 8) & 0x7FF) - 1;
    }
    else if ( v21 >= v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v3 + 72),
          v21,
          9,
          20,
          (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
          *(_DWORD *)(a1 + 64),
          BYTE1(*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL)));
      }
      *(_DWORD *)(v3 + 636) = 0;
      return (unsigned int)-1073741823;
    }
    if ( g_ReservedMessageForOffloadMode >= ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) >> 8) & 0x7FFu) )
      g_ReservedMessageForOffloadMode = ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) >> 8) & 0x7FF) - 1;
    v10 = g_ReservedMessageForOffloadMode;
    v11 = 1;
    v9 = v34;
    v22 = v34 <= g_ReservedMessageForOffloadMode;
    *(_DWORD *)(a1 + 64) = g_ReservedMessageForOffloadMode;
    if ( !v22 )
      v10 = v9;
  }
  else
  {
    v10 = v34 - 1;
    v11 = 0;
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(8 * v10 + 8), 1229146200LL);
  *(_QWORD *)(a1 + 32) = Pool2;
  if ( !Pool2 )
  {
    v16 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v16;
    v19 = 21;
    goto LABEL_14;
  }
  v13 = *(_QWORD *)(a1 + 40);
  v14 = *v4 != 0;
  *(_DWORD *)(a1 + 80) = v10 + 1;
  v16 = Interrupter_PrepareInterrupter(v13, v14);
  if ( (v16 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v16;
    v23 = 22;
    goto LABEL_67;
  }
  v17 = *(_QWORD **)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v11 + 1;
  *v17 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(v3 + 336) & 0x1000LL) != 0 )
    Interrupter_SetSecondaryInterrupterCount(a1, 0);
  if ( *(_DWORD *)(a1 + 20) && v9 > 1 && *v4 == 2 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(
                  WdfDriverGlobals,
                  a3) )
      {
        *(_DWORD *)(a1 + 24) += *(_DWORD *)(a1 + 20);
        break;
      }
      v25 = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                       WdfDriverGlobals,
                       a3,
                       i);
      if ( *v25 == 2 && (v25[2] & 3) == 3 )
      {
        if ( (_DWORD)v6 )
        {
          if ( (_DWORD)v6 == *(_DWORD *)(a1 + 64) )
          {
            Debug_FreAssertMsg(
              (__int64)"Message number reserved for software offload mode is visible to Windows",
              0,
              (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
              532);
          }
          else
          {
            v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                    WdfDriverGlobals,
                    a3,
                    i);
            v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                    WdfDriverGlobals,
                    v35,
                    i);
            v16 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, v6, v27, v26, &v36, 0LL);
            if ( (v16 & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v16;
              v31 = 23;
LABEL_56:
              WPP_RECORDER_SF_Dd(*(_QWORD *)(v3 + 72), v28, v29, v31, v33, v6, v16);
              return v16;
            }
            v30 = v36;
            v16 = Interrupter_PrepareInterrupter(v36, 1u);
            if ( (v16 & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v16;
              v31 = 24;
              goto LABEL_56;
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)v6) = v30;
          }
          LODWORD(v6) = v6 + 1;
        }
        else
        {
          LODWORD(v6) = 1;
        }
      }
    }
  }
  if ( v11 != 1 )
  {
LABEL_10:
    v16 = Interrupter_PopulateInterrupterLookupTable(a1);
    if ( (v16 & 0x80000000) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v16;
    v23 = 27;
LABEL_67:
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), v15, 9, v23, (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids, v16);
    return v16;
  }
  v6 = *(unsigned int *)(a1 + 64);
  v16 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, *(_DWORD *)(a1 + 64), 0LL, 0LL, &v36, 0LL);
  if ( (v16 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = 25;
      goto LABEL_56;
    }
    return v16;
  }
  v32 = v36;
  v16 = Interrupter_PrepareInterrupter(v36, 1u);
  if ( (v16 & 0x80000000) == 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6) = v32;
    *(_QWORD *)(a1 + 72) = v32;
    goto LABEL_10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = 26;
    goto LABEL_56;
  }
  return v16;
}
