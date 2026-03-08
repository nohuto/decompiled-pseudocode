/*
 * XREFs of _PnpStringFromGuid @ 0x1406881E8
 * Callers:
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406874DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1406CE8B0 (PiDmObjectGetCachedCmProperty.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14077D414 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmCacheDataEncode @ 0x14077DC74 (PiDmCacheDataEncode.c)
 *     IoGetDeviceInterfaceAlias @ 0x14078E260 (IoGetDeviceInterfaceAlias.c)
 *     PiDcHandleDeviceEvent @ 0x1407F8294 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1407F8364 (PiDcHandleInterfaceEvent.c)
 *     PiDmListInitEnumCallback @ 0x1407FE3D0 (PiDmListInitEnumCallback.c)
 *     PiSwPdoPnPDispatch @ 0x1408064B0 (PiSwPdoPnPDispatch.c)
 *     _CmBuildDevicePanelId @ 0x14085EF88 (_CmBuildDevicePanelId.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408731D4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x14087BF40 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095763C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PipCreateComputerId @ 0x140B56980 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 */

NTSTATUS __fastcall PnpStringFromGuid(int *a1, wchar_t *a2)
{
  int v3; // [rsp+30h] [rbp-78h]
  int v4; // [rsp+38h] [rbp-70h]
  int v5; // [rsp+40h] [rbp-68h]
  int v6; // [rsp+48h] [rbp-60h]
  int v7; // [rsp+50h] [rbp-58h]
  int v8; // [rsp+58h] [rbp-50h]
  int v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]

  v13 = *((unsigned __int8 *)a1 + 15);
  v12 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v10 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v8 = *((unsigned __int8 *)a1 + 10);
  v7 = *((unsigned __int8 *)a1 + 9);
  v6 = *((unsigned __int8 *)a1 + 8);
  v5 = *((unsigned __int16 *)a1 + 3);
  v4 = *((unsigned __int16 *)a1 + 2);
  v3 = *a1;
  return RtlStringCchPrintfExW(
           a2,
           0x27uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           v3,
           v4,
           v5,
           v6,
           v7,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13);
}
