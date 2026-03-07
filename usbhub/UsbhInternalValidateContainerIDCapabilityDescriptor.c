char __fastcall UsbhInternalValidateContainerIDCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r10
  __int64 v3; // r11
  char v4; // dl
  __int64 v6; // rax

  v2 = a2;
  v3 = a1;
  v4 = 1;
  if ( *v2 == 20 )
  {
    if ( v2[3] )
    {
      Log(a1, 256, 1447250226, v2[3], 0LL);
      v4 = 0;
    }
    v6 = *(_QWORD *)(v2 + 4) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(v2 + 12) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v6 )
    {
      Log(v3, 256, 1447250227, 0LL, 0LL);
      return 0;
    }
    return v4;
  }
  else
  {
    Log(a1, 256, 1447250225, *v2, 0LL);
    return 0;
  }
}
