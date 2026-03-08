/*
 * XREFs of ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C03B8368
 * Callers:
 *     DxgkSetGlobalRawmodeFlag @ 0x1C02F85E0 (DxgkSetGlobalRawmodeFlag.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall CCD_BTL::SetUnsupportedMonitorModesFlag(CCD_BTL *this, unsigned __int8 a2)
{
  bool v3; // zf
  int v5; // esi
  NTSTATUS v6; // eax
  __int64 v7; // rdi
  const wchar_t *v8; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+67h] BYREF
  int Data; // [rsp+B8h] [rbp+6Fh] BYREF

  v3 = *((_BYTE *)this + 152) == 0;
  KeyHandle = 0LL;
  v5 = a2;
  DxgkLogCodePointPacket(0x29u, !v3, a2, 0, 0LL);
  *((_BYTE *)this + 152) = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    v8 = L"Cannot open handle to GraphicsDrivers register key (NtStatus = 0x%I64x)";
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v7;
  }
  Data = v5;
  RtlInitUnicodeString(&DestinationString, L"UnsupportedMonitorModesAllowed");
  v7 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  ZwClose(KeyHandle);
  if ( (int)v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    v8 = L"Failed to write unsupported monitor modes flag to registry. (NtStatus = 0x%I64x)";
    goto LABEL_5;
  }
  return (unsigned int)v7;
}
