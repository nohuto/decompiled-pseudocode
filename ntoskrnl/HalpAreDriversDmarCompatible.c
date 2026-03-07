bool __fastcall HalpAreDriversDmarCompatible(struct _DEVICE_OBJECT *a1)
{
  char v1; // bl
  ULONG v3; // [rsp+58h] [rbp+10h] BYREF
  ULONG v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v5 = 0;
  v4 = 0;
  v3 = 0;
  if ( IoGetDevicePropertyData(a1, &DEVPKEY_Device_DmaRemappingPolicy, 0, 0, 4u, &v5, &v4, &v3) >= 0
    && v3 == 7
    && v4 == 4 )
  {
    return v5 == 2;
  }
  return v1;
}
