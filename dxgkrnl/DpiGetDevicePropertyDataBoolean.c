__int64 __fastcall DpiGetDevicePropertyDataBoolean(struct _DEVICE_OBJECT *a1, const DEVPROPKEY *a2, char *a3)
{
  char v4; // di
  NTSTATUS DevicePropertyData; // eax
  __int64 v6; // rbx
  ULONG v8[6]; // [rsp+40h] [rbp-18h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  ULONG v10; // [rsp+78h] [rbp+20h] BYREF

  v8[0] = 0;
  v10 = 0;
  v9 = 0;
  if ( a1 && a2 && a3 )
  {
    v4 = 1;
    DevicePropertyData = IoGetDevicePropertyData(a1, a2, 0, 0, 1u, &v9, v8, &v10);
    v6 = DevicePropertyData;
    if ( DevicePropertyData == -1073741772 )
    {
      LODWORD(v6) = 0;
LABEL_6:
      v4 = 0;
LABEL_7:
      *a3 = v4;
      return (unsigned int)v6;
    }
    if ( DevicePropertyData >= 0 )
    {
      if ( v10 == 17 )
      {
        if ( v9 == -1 )
          goto LABEL_7;
        goto LABEL_6;
      }
      v6 = -1073741788LL;
    }
    WdLogSingleEntry1(2LL, v6);
    return (unsigned int)v6;
  }
  return 3221225485LL;
}
