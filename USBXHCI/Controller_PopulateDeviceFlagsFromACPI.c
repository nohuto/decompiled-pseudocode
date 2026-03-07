__int64 __fastcall Controller_PopulateDeviceFlagsFromACPI(__int64 a1)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx

  if ( (*(_BYTE *)(a1 + 336) & 1) == 0
    && (unsigned int)Controller_ExecuteDSM((__int64 *)a1, &GUID_USB_ACPI_DSM, 0, 6, 0LL, 0) == 1 )
  {
    *(_QWORD *)(a1 + 336) |= 1uLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v2, 4, 167, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    }
  }
  result = *(unsigned int *)(a1 + 344);
  if ( (result & 0x100000) == 0 )
  {
    result = Controller_ExecuteDSM((__int64 *)a1, &GUID_DSM_QUERY_HSII_WORKAROUND_STATUS, 0, 1, 0LL, 0);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 344) |= 0x100000uLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        return WPP_RECORDER_SF_(
                 *(_QWORD *)(a1 + 72),
                 v4,
                 4,
                 168,
                 (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      }
    }
  }
  return result;
}
