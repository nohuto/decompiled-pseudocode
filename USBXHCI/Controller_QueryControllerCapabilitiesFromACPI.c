void __fastcall Controller_QueryControllerCapabilitiesFromACPI(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  __int16 v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+28h] [rbp-10h]

  if ( !*(_DWORD *)(a1 + 636) )
  {
    if ( *(_BYTE *)(a1 + 601) )
    {
      *(_DWORD *)(a1 + 636) = 0;
    }
    else
    {
      v4 = 0;
      if ( (Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL, 3LL, 0LL, v4) & 1) != 0 )
      {
        LOWORD(v5) = 0;
        v2 = Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL, 4LL, 0LL, v5);
        if ( v2 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = v2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v3) = 4;
            WPP_RECORDER_SF_(
              *(_QWORD *)(a1 + 72),
              v3,
              4,
              250,
              (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
          }
          *(_DWORD *)(a1 + 636) = 1;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 249, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
        }
      }
    }
  }
}
