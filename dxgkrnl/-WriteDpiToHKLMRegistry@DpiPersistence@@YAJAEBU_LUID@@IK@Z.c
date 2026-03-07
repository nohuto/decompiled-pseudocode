__int64 __fastcall DpiPersistence::WriteDpiToHKLMRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rdi
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  unsigned __int16 *v9; // [rsp+20h] [rbp-68h]
  unsigned int v10; // [rsp+28h] [rbp-60h]
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-38h] BYREF
  struct _UNICODE_STRING v12; // [rsp+60h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-18h] BYREF

  v11 = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v11, a4);
  if ( (int)v5 >= 0 )
  {
    DestinationString = 0LL;
    v12 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v12, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v9) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v12, &v11, v6, v9, v10);
    v5 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to write DPI value to HKLM. (Status = 0x%I64x)",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  operator delete(v11.Buffer);
  return (unsigned int)v5;
}
