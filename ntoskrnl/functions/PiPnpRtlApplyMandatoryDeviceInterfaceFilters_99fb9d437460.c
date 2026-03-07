__int64 __fastcall PiPnpRtlApplyMandatoryDeviceInterfaceFilters(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int ObjectProperty; // edi
  int v9; // [rsp+60h] [rbp-18h] BYREF
  int v10; // [rsp+64h] [rbp-14h] BYREF
  PVOID P; // [rsp+68h] [rbp-10h] BYREF

  P = 0LL;
  v9 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     a3,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v9,
                     (__int64)&P,
                     (__int64)&v10,
                     0);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PiPnpRtlApplyMandatoryDeviceFilters(a1, (_DWORD)P, 0, a4, a5);
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)ObjectProperty;
}
