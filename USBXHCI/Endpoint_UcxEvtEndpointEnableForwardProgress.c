/*
 * XREFs of Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x1C003C720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0017FB0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C0041604 (TR_EnableForwardProgress_Internal.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointEnableForwardProgress(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  int v6; // r9d
  int v7; // edx
  char v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  char v11; // [rsp+38h] [rbp-10h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00631A8);
  v4 = v3;
  if ( *(_BYTE *)(v3 + 37) )
  {
    v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 48LL), a2);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 59;
        v11 = v5;
        v7 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
        v10 = *(_DWORD *)(v4 + 144);
        v9 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
LABEL_8:
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(v4 + 80),
          v7,
          13,
          v6,
          (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
          v9,
          v10,
          v11);
        return (unsigned int)v5;
      }
      return (unsigned int)v5;
    }
LABEL_9:
    *(_BYTE *)(v4 + 36) = 1;
    return (unsigned int)v5;
  }
  v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(v3 + 88), a2);
  if ( v5 >= 0 )
    goto LABEL_9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 60;
    v11 = v5;
    v10 = *(_DWORD *)(v4 + 144);
    v9 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
    goto LABEL_8;
  }
  return (unsigned int)v5;
}
