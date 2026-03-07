char __fastcall UsbhInternalValidateDeviceCapabilityDescriptor(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  char v6; // dl
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v6 = 1;
  if ( *a2 < 3u )
  {
    Log(a1, 256, 1447183409, *a2, 0LL);
    return 0;
  }
  switch ( a2[2] )
  {
    case 2u:
      v6 = UsbhInternalValidateUSB20DeviceCapabilityDescriptor(a1, a2);
      if ( !v6 )
        return 0;
      v15 = *(_QWORD **)(a3 + 24);
      if ( !*v15 )
      {
        *v15 = a2;
        return v6;
      }
      v9 = 1447183410;
      goto LABEL_35;
    case 3u:
      v6 = UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2);
      if ( !v6 )
        return 0;
      v14 = *(_QWORD *)(a3 + 24);
      if ( *(_QWORD *)(v14 + 8) )
      {
        v9 = 1447183411;
        goto LABEL_35;
      }
      *(_QWORD *)(v14 + 8) = a2;
      break;
    case 4u:
      v6 = UsbhInternalValidateContainerIDCapabilityDescriptor(a1, a2);
      if ( !v6 )
        return 0;
      v13 = *(_QWORD *)(a3 + 24);
      if ( *(_QWORD *)(v13 + 16) )
      {
        v9 = 1447183412;
        goto LABEL_35;
      }
      *(_QWORD *)(v13 + 16) = a2;
      break;
    case 5u:
      v16 = 0LL;
      v6 = UsbhInternalValidatePlatformCapabilityDescriptor(a1, a2, &v16);
      if ( !v6 )
        return 0;
      if ( v16 )
      {
        v10 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v10 + 24) )
        {
          Log(a1, 256, 1447183414, 0LL, 0LL);
          v6 = 0;
        }
        else
        {
          *(_QWORD *)(v10 + 24) = v16;
        }
      }
      v11 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1;
      if ( !v11 )
        v11 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4;
      if ( !v11 )
      {
        v12 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v12 + 32) )
        {
          v9 = 1447183415;
          goto LABEL_35;
        }
        *(_QWORD *)(v12 + 32) = a2;
      }
      break;
    case 0xDu:
      v6 = UsbhInternalValidateBillboardCapabilityDescriptor(a1, a2);
      if ( !v6 )
        return 0;
      v8 = *(_QWORD *)(a3 + 24);
      if ( *(_QWORD *)(v8 + 40) )
      {
        v9 = 1447183416;
LABEL_35:
        Log(a1, 256, v9, 0LL, 0LL);
        return 0;
      }
      *(_QWORD *)(v8 + 40) = a2;
      break;
  }
  return v6;
}
