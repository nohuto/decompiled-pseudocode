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
  PIRP *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00631A8);
  v3 = v2;
  v4 = v2 + 1320;
  if ( *(_BYTE *)(v2 + 1344) )
    XilEndpoint_DestroySecureObject((__int64 *)(v2 + 1320));
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
    v10 = *(PIRP **)(v3 + 272);
    if ( v10 )
    {
      if ( *v10 )
      {
        IoFreeIrp(*v10);
        **(_QWORD **)(v3 + 272) = 0LL;
      }
      if ( *(_QWORD *)(*(_QWORD *)(v3 + 272) + 144LL) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(*(_QWORD *)(v3 + 272) + 144LL) = 0LL;
      }
      ExFreePoolWithTag(*(PVOID *)(v3 + 272), 0x49434858u);
    }
    v11 = *(_QWORD *)(v3 + 264);
    if ( v11 )
    {
      XilEndpoint_ReleaseBuffer(v3, v11);
      *(_QWORD *)(v3 + 264) = 0LL;
    }
    UsbDevice_RemoveEndpointFromDeviceEndpointList(*(_QWORD *)(v3 + 16), *(_QWORD *)(v3 + 24), v3 + 64);
    return Etw_EndpointDelete(v12, v3);
  }
  return result;
}
