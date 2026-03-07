__int64 __fastcall SshpGenerateDeviceVerboseDescription(PDEVICE_OBJECT DeviceObject, ULONG a2, unsigned int **a3)
{
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  ULONG v10; // r8d
  ULONG v11; // r9d
  unsigned int v12; // r11d
  ULONG v13; // ecx
  unsigned int v14; // r10d
  unsigned int v15; // eax
  ULONG *Pool2; // rax
  unsigned int *v17; // rdi
  char *v18; // rsi
  int v19; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-10h] BYREF
  ULONG v22[3]; // [rsp+34h] [rbp-Ch] BYREF
  ULONG BufferLength; // [rsp+88h] [rbp+48h] BYREF

  BufferLength = 0;
  ResultLength = 0;
  v22[0] = 0;
  DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyClassName, 0, 0LL, &ResultLength);
  v7 = DeviceProperty;
  if ( DeviceProperty == -1073741772 )
  {
    ResultLength = 0;
  }
  else if ( DeviceProperty != -1073741789 )
  {
    return (unsigned int)v7;
  }
  v8 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassGuid, 0, 0LL, &BufferLength);
  v7 = v8;
  if ( v8 == -1073741772 )
  {
    BufferLength = 0;
  }
  else if ( v8 != -1073741789 )
  {
    return (unsigned int)v7;
  }
  v9 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, v22);
  v7 = v9;
  if ( v9 == -1073741772 )
  {
    v10 = 0;
    v22[0] = 0;
  }
  else
  {
    if ( v9 != -1073741789 )
      return (unsigned int)v7;
    v10 = v22[0];
  }
  v11 = BufferLength + 12;
  if ( BufferLength >= 0xFFFFFFF4 )
    return (unsigned int)-1073741675;
  v12 = -1;
  v13 = v11 + ResultLength;
  v14 = -1;
  if ( v11 + ResultLength >= v11 )
    v14 = v11 + ResultLength;
  v7 = v13 < v11 ? 0xC0000095 : 0;
  if ( v13 >= v11 )
  {
    v15 = v14 + v10;
    if ( v14 + v10 >= v14 )
      v12 = v14 + v10;
    v7 = v15 < v14 ? 0xC0000095 : 0;
    if ( v15 >= v14 )
    {
      Pool2 = (ULONG *)ExAllocatePool2(256LL, v12, a2);
      v17 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v18 = (char *)(Pool2 + 3);
      *Pool2 = BufferLength >> 1;
      Pool2[1] = ResultLength >> 1;
      Pool2[2] = v22[0] >> 1;
      if ( BufferLength )
      {
        v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassGuid, BufferLength, Pool2 + 3, &BufferLength);
        if ( v7 < 0 )
          goto LABEL_34;
        v18 += 2 * *v17;
      }
      if ( ResultLength )
      {
        v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassName, ResultLength, v18, &ResultLength);
        if ( v7 < 0 )
          goto LABEL_34;
        v18 += 2 * v17[1];
      }
      if ( !v22[0] )
      {
LABEL_28:
        *a3 = v17;
        return 0;
      }
      v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v22[0], v18, v22);
      if ( v7 >= 0 )
      {
        v19 = 0;
        if ( v17[2] > 2 )
        {
          do
          {
            if ( !*(_WORD *)&v18[2 * v19] )
              *(_WORD *)&v18[2 * v19] = 44;
            ++v19;
          }
          while ( v19 + 2 < v17[2] );
        }
        goto LABEL_28;
      }
LABEL_34:
      CmpFreeTransientPoolWithTag(v17, a2);
    }
  }
  return (unsigned int)v7;
}
