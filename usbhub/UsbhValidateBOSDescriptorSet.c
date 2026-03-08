/*
 * XREFs of UsbhValidateBOSDescriptorSet @ 0x1C00524CC
 * Callers:
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0037CEC (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhInternalValidateBOSDescriptor @ 0x1C0051B04 (UsbhInternalValidateBOSDescriptor.c)
 *     UsbhInternalValidateCommonDescriptorHeader @ 0x1C0051D4C (UsbhInternalValidateCommonDescriptorHeader.c)
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0051EEC (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 */

char __fastcall UsbhValidateBOSDescriptorSet(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _OWORD *a5)
{
  _OWORD *v7; // rcx
  char v9; // cl
  unsigned __int8 *i; // rbx
  __int64 v12; // [rsp+30h] [rbp-21h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-19h]
  unsigned int v14; // [rsp+40h] [rbp-11h]
  int v15; // [rsp+44h] [rbp-Dh]
  _OWORD *v16; // [rsp+48h] [rbp-9h]
  __int64 v17; // [rsp+50h] [rbp-1h]
  _OWORD v18[3]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v19; // [rsp+88h] [rbp+37h]
  unsigned int v20; // [rsp+C8h] [rbp+77h] BYREF

  v20 = 0;
  v15 = 0;
  v19 = 0LL;
  memset(v18, 0, sizeof(v18));
  v7 = v18;
  v14 = a4;
  v12 = a2;
  v13 = a4 + a2;
  v17 = a3;
  if ( a5 )
    v7 = a5;
  v16 = v7;
  *v7 = 0LL;
  v7[1] = 0LL;
  v7[2] = 0LL;
  *((_QWORD *)v7 + 6) = 0LL;
  if ( a4 < 5 )
    return 0;
  v9 = UsbhInternalValidateBOSDescriptor(a1, (unsigned __int8 *)a2, (__int64)&v12);
  if ( !v9 )
    return 0;
  if ( a4 != *(unsigned __int16 *)(a2 + 2) )
  {
    Log(a1, 256, 1447186259, a4, *(unsigned __int16 *)(a2 + 2));
    v9 = 0;
  }
  for ( i = (unsigned __int8 *)(a2 + 5); (unsigned __int64)i < v13; i += v20 )
  {
    v9 = UsbhInternalValidateCommonDescriptorHeader(a1, i, &v12, &v20);
    if ( !v9 )
      return 0;
    if ( i[1] == 16 )
    {
      v9 = UsbhInternalValidateDeviceCapabilityDescriptor(a1, i, (__int64)&v12);
      if ( !v9 )
        return 0;
    }
  }
  return v9;
}
