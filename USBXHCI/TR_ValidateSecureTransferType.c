__int64 __fastcall TR_ValidateSecureTransferType(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  char v3; // di
  __int64 v5; // r8
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  char v10; // [rsp+38h] [rbp-10h]

  v2 = 0;
  v3 = a2;
  if ( *(_WORD *)(a2 + 2) != 8
    && *(_WORD *)(a2 + 2) != 9
    && *(_WORD *)(a2 + 2) != 10
    && *(_WORD *)(a2 + 2) != 50
    && *(_WORD *)(a2 + 2) != 55
    && *(_WORD *)(a2 + 2) != 56 )
  {
    v5 = (unsigned int)*(unsigned __int16 *)(a2 + 2) - 57;
    if ( (unsigned int)v5 <= 1 )
    {
      if ( *(_BYTE *)(a1 + 280) )
      {
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 48) + 672LL) )
        {
          Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage(a1, a2, v5, 0LL);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v8) = 2;
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v8,
              v7,
              31,
              (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              v3);
          }
          return (unsigned int)-1073741790;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = a2;
          v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_DDi(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v6,
            v5,
            30,
            (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            v10);
        }
        return (unsigned int)-1073741811;
      }
    }
  }
  return v2;
}
