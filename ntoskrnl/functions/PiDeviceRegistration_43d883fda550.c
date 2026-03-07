__int64 __fastcall PiDeviceRegistration(unsigned __int16 *a1, char a2, UNICODE_STRING *a3)
{
  void *Pool2; // r14
  int DeviceRegProp; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+50h] BYREF
  int v14; // [rsp+A8h] [rbp+58h] BYREF

  v12 = 0LL;
  v14 = 0;
  v13 = 0;
  Pool2 = 0LL;
  DestinationString = 0LL;
  if ( a3 )
  {
    *(_DWORD *)&a3->Length = 0;
    a3->Buffer = 0LL;
  }
  if ( *a1 <= 2u )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_16;
  }
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2) == 92 )
    *a1 -= 2;
  DeviceRegProp = PnpUnicodeStringToWstr(&v12, 0LL, a1);
  if ( DeviceRegProp < 0 )
  {
LABEL_16:
    if ( !a3 )
      goto LABEL_19;
    goto LABEL_17;
  }
  v13 = 512;
  Pool2 = (void *)ExAllocatePool2(256LL, 512LL, 538996816LL);
  if ( !Pool2 )
  {
    DeviceRegProp = -1073741670;
    goto LABEL_16;
  }
  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v12, 0, 5, (__int64)&v14, (__int64)Pool2, (__int64)&v13, 0);
  PnpUnicodeStringToWstrFree(v12, a1);
  if ( DeviceRegProp < 0 )
  {
    if ( DeviceRegProp != -1073741275 )
      goto LABEL_16;
LABEL_13:
    LOBYTE(v12) = a2;
    DeviceRegProp = PpForEachDeviceInstanceDriver(a1, v8, &v12);
    if ( DeviceRegProp >= 0 )
    {
LABEL_20:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)DeviceRegProp;
    }
    if ( a2 )
    {
      LOBYTE(v12) = 0;
      PpForEachDeviceInstanceDriver(a1, v9, &v12);
    }
    goto LABEL_16;
  }
  DeviceRegProp = -1073741772;
  if ( v14 != 1 || v13 <= 2 )
    goto LABEL_16;
  RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
  if ( !a3 )
    goto LABEL_13;
  DeviceRegProp = PnpConcatenateUnicodeStrings(a3, &DestinationString);
  if ( DeviceRegProp >= 0 )
    goto LABEL_13;
LABEL_17:
  if ( a3->Length )
  {
    ExFreePoolWithTag(a3->Buffer, 0);
    a3->Buffer = 0LL;
    *(_DWORD *)&a3->Length = 0;
  }
LABEL_19:
  if ( Pool2 )
    goto LABEL_20;
  return (unsigned int)DeviceRegProp;
}
