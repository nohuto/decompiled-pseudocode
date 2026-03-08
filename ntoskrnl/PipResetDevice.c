/*
 * XREFs of PipResetDevice @ 0x140B91440
 * Callers:
 *     PipResetDevices @ 0x140B5B0A4 (PipResetDevices.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _CmSetDeviceRegProp @ 0x140684F2C (_CmSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CD550 (_CmIsRootEnumeratedDevice.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     _CmDeleteDevice @ 0x140A5E810 (_CmDeleteDevice.c)
 *     _CmDeleteDeviceRegKey @ 0x140A5F12C (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PipResetDevice(__int64 a1, const WCHAR *a2)
{
  __int64 v4; // rax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+40h] [rbp-49h] BYREF
  int v12; // [rsp+44h] [rbp-45h] BYREF
  int v13; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  GUID Guid; // [rsp+60h] [rbp-29h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-19h] BYREF

  v13 = 0;
  v12 = 0;
  Guid = 0LL;
  DestinationString = 0LL;
  DbgPrintEx(0x20u, 0, "Resetting device '%ws'\n", a2);
  if ( PipResetDeviceBreakOnReset )
    __debugbreak();
  v11 = 78;
  if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 9, (__int64)&v12, (__int64)SourceString, (__int64)&v11, 0) < 0
    || v12 != 1
    || v11 < 2
    || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0
    || RtlGUIDFromString(&DestinationString, &Guid) < 0 )
  {
    Guid = 0LL;
  }
  if ( CmIsRootEnumeratedDevice(a2) )
    goto LABEL_14;
  v4 = *(_QWORD *)&Guid.Data1 - 0x11CEE3254D36E968LL;
  if ( *(_QWORD *)&Guid.Data1 == 0x11CEE3254D36E968LL )
    v4 = *(_QWORD *)Guid.Data4 - 0x1803E12B0008C1BFLL;
  if ( !v4 )
  {
LABEL_14:
    v6 = CmDeleteDeviceRegKey(a1, (__int64)a2, 17, 0);
    v5 = 0;
    if ( v6 < 0 )
      v5 = v6;
    v7 = CmDeleteDeviceRegKey(a1, (__int64)a2, 18, 0);
    if ( v5 >= 0 && v7 < 0 )
      v5 = v7;
    v11 = 4;
    if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 11, (__int64)&v12, (__int64)&v13, (__int64)&v11, 0) >= 0
      && v12 == 4
      && v11 == 4 )
    {
      v8 = v13;
    }
    else
    {
      v8 = 0;
    }
    if ( (v8 & 0x20) == 0 )
    {
      v13 = v8 | 0x20;
      v9 = CmSetDeviceRegProp(a1, (__int64)a2, 0LL, 0xBu, 4u, (__int64)&v13, 4u, 0);
      if ( v5 >= 0 && v9 < 0 )
        return (unsigned int)v9;
    }
  }
  else
  {
    return (unsigned int)CmDeleteDevice(a1, (__int64)a2, 0);
  }
  return (unsigned int)v5;
}
