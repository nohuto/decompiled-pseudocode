/*
 * XREFs of Endpoint_EvtEndpointCleanupCallback @ 0x1C0038520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C00374CC (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_FreeResources @ 0x1C00375A8 (XilEndpoint_FreeResources.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x1C003B710 (WPP_RECORDER_SF_ddqqq.c)
 *     UsbDevice_RemoveEndpointFromDeviceEndpointList @ 0x1C0046EA8 (UsbDevice_RemoveEndpointFromDeviceEndpointList.c)
 *     Etw_EndpointDelete @ 0x1C0048200 (Etw_EndpointDelete.c)
 */

__int64 __fastcall Endpoint_EvtEndpointCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00601A8);
  v3 = v2;
  v4 = v2 + 1312;
  if ( *(_BYTE *)(v2 + 1336) )
    XilEndpoint_DestroySecureObject((__int64 *)(v2 + 1312));
  result = XilEndpoint_FreeResources(v4);
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 == a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqqq(
        *(_QWORD *)(*(_QWORD *)v3 + 72LL),
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        v6,
        22);
    v7 = *(_DWORD *)(v3 + 144);
    if ( v7 != 1 )
    {
      v8 = v7;
      v9 = *(_QWORD *)(v3 + 16);
      if ( v3 == *(_QWORD *)(v9 + 8 * v8 + 168) )
        *(_QWORD *)(v9 + 8 * v8 + 168) = 0LL;
    }
    v10 = *(_QWORD *)(v3 + 264);
    if ( v10 )
    {
      if ( *(_QWORD *)v10 )
      {
        IoFreeIrp(*(PIRP *)v10);
        **(_QWORD **)(v3 + 264) = 0LL;
        v10 = *(_QWORD *)(v3 + 264);
      }
      if ( *(_QWORD *)(v10 + 144) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(*(_QWORD *)(v3 + 264) + 144LL) = 0LL;
        v10 = *(_QWORD *)(v3 + 264);
      }
      ExFreePoolWithTag((PVOID)v10, 0x49434858u);
    }
    UsbDevice_RemoveEndpointFromDeviceEndpointList(*(_QWORD *)(v3 + 16), *(_QWORD *)(v3 + 24), v3 + 64);
    return Etw_EndpointDelete(v11, v3);
  }
  return result;
}
