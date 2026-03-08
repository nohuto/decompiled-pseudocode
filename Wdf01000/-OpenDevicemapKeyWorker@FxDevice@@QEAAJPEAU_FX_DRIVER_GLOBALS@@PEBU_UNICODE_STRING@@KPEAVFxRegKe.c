/*
 * XREFs of ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1C003C9B8
 * Callers:
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0032C40 (imp_WdfDeviceOpenDevicemapKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_Sd @ 0x1C003D2D4 (WPP_IFR_SF_Sd.c)
 */

__int64 __fastcall FxDevice::OpenDevicemapKeyWorker(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *pFxDriverGlobals,
        const _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        FxRegKey *pKey)
{
  NTSTATUS id; // eax
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING registryKeyPath; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t baseStringBuffer[256]; // [rsp+80h] [rbp-80h] BYREF

  *(_DWORD *)(&registryKeyPath.MaximumLength + 1) = 0;
  wcscpy(baseStringBuffer, L"\\REGISTRY\\MACHINE\\HARDWARE\\DEVICEMAP\\");
  memset(&baseStringBuffer[38], 0, 0x1B4uLL);
  *(_DWORD *)&registryKeyPath.Length = 33554506;
  registryKeyPath.Buffer = baseStringBuffer;
  id = RtlAppendUnicodeStringToString(&registryKeyPath, KeyName);
  v11 = id;
  if ( id >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &registryKeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v12 = ZwCreateKey(&pKey->m_Key, DesiredAccess, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    v11 = v12;
    if ( v12 < 0 )
      WPP_IFR_SF_D(pFxDriverGlobals, 2u, 2u, 0x1Cu, WPP_FxDeviceKm_cpp_Traceguids, v12);
  }
  else
  {
    WPP_IFR_SF_Sd(pFxDriverGlobals, (unsigned __int8)KeyName->Buffer, v9, v10, traceGuid, KeyName->Buffer, id);
  }
  return v11;
}
