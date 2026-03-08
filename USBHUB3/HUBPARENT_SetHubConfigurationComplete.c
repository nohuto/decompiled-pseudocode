/*
 * XREFs of HUBPARENT_SetHubConfigurationComplete @ 0x1C0007230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPARENT_SetHubConfigurationComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebx
  int v10; // ebp
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-40h]
  unsigned int v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-38h]

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1392))(WdfDriverGlobals);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C006A198);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_DWORD *)(a4 + 4);
  v11 = v8;
  if ( v9 < 0 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 1104) = *(_QWORD *)(a4 + 72);
  *(_QWORD *)(v8 + 80) = *(_QWORD *)(a4 + 32);
  v12 = *(unsigned __int16 *)(a4 + 64);
  *(_WORD *)(v11 + 88) = v12;
  if ( *(_WORD *)(v11 + 2458) >= 0x300u )
  {
    if ( v12 <= 2 )
    {
      if ( v12 == 2 )
        goto LABEL_11;
    }
    else
    {
      v9 = -1073741216;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v11 + 2520),
        2u,
        3u,
        0xAu,
        (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
        v15);
    }
    if ( v9 < 0 )
    {
LABEL_9:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = v10;
        LODWORD(v14) = v9;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(v11 + 2520),
          2u,
          3u,
          0xBu,
          (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
          v14,
          v16);
      }
    }
  }
LABEL_11:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  ExFreePoolWithTag((PVOID)a4, 0);
  return HUBSM_AddEvent(v11 + 1264, ((v9 >> 31) & 0xFFFFFFFC) + 2010);
}
