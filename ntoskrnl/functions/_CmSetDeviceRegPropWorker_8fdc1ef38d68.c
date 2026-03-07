__int64 __fastcall CmSetDeviceRegPropWorker(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        int a4,
        ULONG a5,
        _DWORD *SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int inited; // ebx
  _DWORD *v13; // rbp
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  const wchar_t *v17; // rax
  HANDLE v18; // rcx
  int v19; // eax
  int v20; // r9d
  HANDLE v22; // rsi
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  inited = 0;
  Handle = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v13 = SecurityDescriptorInput;
    if ( !SecurityDescriptorInput )
      return (unsigned int)-1073741811;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmDevicePropertyRead(a1, a4) )
    goto LABEL_55;
  if ( !CmDevicePropertyWrite(v14, a4) )
    return (unsigned int)-1073741790;
  v15 = MapCmDevicePropertyToRegType(a4);
  if ( !v15 )
    return (unsigned int)-1073741264;
  if ( a5 != v15 )
    return (unsigned int)-1073741811;
  if ( a4 == 11 )
  {
    if ( !SecurityDescriptorLength )
      goto LABEL_12;
    if ( v13 && SecurityDescriptorLength == 4 )
    {
      if ( *v13 && CmIsRootDevice(a2) )
      {
        inited = -1073741808;
        goto LABEL_24;
      }
      goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_12;
    return (unsigned int)-1073741811;
  }
  if ( a4 == 24
    && SecurityDescriptorLength
    && (!RtlValidRelativeSecurityDescriptor(v13, SecurityDescriptorLength, 0)
     || RtlLengthSecurityDescriptor(v13) != SecurityDescriptorLength) )
  {
    inited = -1073741811;
    goto LABEL_24;
  }
LABEL_12:
  if ( !a3 )
  {
    inited = CmOpenDeviceRegKey(a1, (__int64)a2, 16, 0, 33554434, 0, (__int64)&Handle, 0LL);
    if ( inited < 0 )
      goto LABEL_24;
  }
  if ( a4 == 8 )
    goto LABEL_21;
  v17 = MapCmDevicePropertyToRegValue(v16, a4);
  if ( !v17 )
  {
LABEL_55:
    inited = -1073741264;
    goto LABEL_24;
  }
  if ( !SecurityDescriptorLength )
  {
    v22 = Handle;
    DestinationString = 0LL;
    if ( a3 )
      v22 = a3;
    inited = RtlInitUnicodeStringEx(&DestinationString, v17);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(v22, &DestinationString);
    if ( inited == -1073741772 || inited == -1073741444 )
      inited = -1073741275;
LABEL_20:
    if ( inited < 0 )
      goto LABEL_24;
LABEL_21:
    v20 = (int)Handle;
    if ( a3 )
      v20 = (int)a3;
    CmRaisePropertyChangeEvent(a1, (_DWORD)a2, 1, v20, a4);
    goto LABEL_24;
  }
  v18 = Handle;
  if ( a3 )
    v18 = a3;
  v19 = RegRtlSetValue(v18, v17, a5, v13, SecurityDescriptorLength);
  if ( v19 == -1073741444 )
  {
    inited = -1073741810;
  }
  else
  {
    if ( v19 >= 0 )
      goto LABEL_20;
    inited = v19;
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
