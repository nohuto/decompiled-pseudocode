/*
 * XREFs of HUBID_BuildUxdPnpId @ 0x1C001DC7C
 * Callers:
 *     HUBPDO_AssignPDOIds @ 0x1C007EB7C (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 *     HUBREG_GetUxdPnpValue @ 0x1C0087514 (HUBREG_GetUxdPnpValue.c)
 */

void *__fastcall HUBID_BuildUxdPnpId(__int64 a1, const void **a2)
{
  void *result; // rax
  void *v5; // rsi
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  result = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
                     WdfDriverGlobals,
                     0LL,
                     0LL,
                     &v7);
  if ( (int)result >= 0 )
  {
    v6 = *(_OWORD *)(a1 + 1668);
    result = (void *)HUBREG_GetUxdPnpValue(a1, &v6, v7);
    if ( (int)result >= 0 )
    {
      if ( !v7 )
        return result;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v7,
        a2);
      result = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a2 + 2LL, 1681082453LL);
      v5 = result;
      if ( result )
      {
        result = memmove(result, a2[1], *(unsigned __int16 *)a2);
        *(_WORD *)a2 += 2;
        a2[1] = v5;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        result = (void *)WPP_RECORDER_SF_(
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                           3u,
                           5u,
                           0xBu,
                           (__int64)&WPP_bdf3ab4397113be5813bb2cc4e6ee38f_Traceguids);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = (void *)WPP_RECORDER_SF_d(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                       3u,
                       5u,
                       0xAu,
                       (__int64)&WPP_bdf3ab4397113be5813bb2cc4e6ee38f_Traceguids,
                       (_DWORD)result);
  }
  if ( v7 )
    return (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return result;
}
