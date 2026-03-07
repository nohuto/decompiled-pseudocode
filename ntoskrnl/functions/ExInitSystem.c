char __fastcall ExInitSystem(__int64 a1)
{
  if ( (_DWORD)InitializationPhase )
  {
    if ( (_DWORD)InitializationPhase != 1 )
      KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
    return ExpInitSystemPhase1(a1);
  }
  else
  {
    ExpStringCheck(
      L"\\Registry\\Machine\\System\\Setup",
      L"SetupType",
      L"SystemPrefix",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions",
      L"ProductType",
      L"LanmanNT",
      L"ServerNT",
      L"WinNT",
      L"ProductSuite",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites",
      L"ConcurrentLimit",
      L"Small Business",
      L"Enterprise",
      L"CommunicationServer",
      L"BackOffice",
      L"Small Business(Restricted)",
      L"Terminal Server",
      L"EmbeddedNT",
      L"DataCenter",
      L"Personal",
      L"Blade",
      L"Embedded(Restricted)",
      L"Security Appliance",
      L"Storage Server",
      L"Compute Server",
      L"WH Server",
      L"SystemSetupInProgress",
      L"PhoneNT",
      L"Kernel-ProductType");
    return ExpInitSystemPhase0();
  }
}
