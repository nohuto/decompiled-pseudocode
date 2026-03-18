/*
 * XREFs of _CmSetDeviceRegPropWorker @ 0x14076FF88
 * Callers:
 *     _CmSetDeviceRegProp @ 0x14076FE20 (_CmSetDeviceRegProp.c)
 * Callees:
 *     _MapCmDevicePropertyToRegType @ 0x1402DE400 (_MapCmDevicePropertyToRegType.c)
 *     _CmDevicePropertyWrite @ 0x1402DE48C (_CmDevicePropertyWrite.c)
 *     _CmDevicePropertyRead @ 0x1402DF5A4 (_CmDevicePropertyRead.c)
 *     _MapCmDevicePropertyToRegValue @ 0x1402DF64C (_MapCmDevicePropertyToRegValue.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     _RegRtlSetValue @ 0x1406D5A30 (_RegRtlSetValue.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140715E20 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     _CmRaisePropertyChangeEvent @ 0x140770200 (_CmRaisePropertyChangeEvent.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     _CmIsRootDevice @ 0x140789040 (_CmIsRootDevice.c)
 */

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
  NTSTATUS inited; // ebx
  int v12; // r12d
  _DWORD *v13; // rbp
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  const wchar_t *v18; // rax
  HANDLE v19; // rcx
  int v20; // eax
  int v21; // r9d
  HANDLE v23; // rsi
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  inited = 0;
  Handle = 0LL;
  v12 = a1;
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
  if ( !CmDevicePropertyWrite(v15, v14) )
    return (unsigned int)-1073741790;
  v16 = MapCmDevicePropertyToRegType(a4);
  if ( !v16 )
    return (unsigned int)-1073741264;
  if ( a5 != v16 )
    return (unsigned int)-1073741811;
  if ( a4 == 11 )
  {
    if ( !SecurityDescriptorLength )
      goto LABEL_12;
    if ( v13 && SecurityDescriptorLength == 4 )
    {
      if ( *v13 && (unsigned __int8)CmIsRootDevice(a2) )
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
  if ( a3 || (inited = CmOpenDeviceRegKey(v12, (_DWORD)a2, 16, 0, 33554434, 0, (__int64)&Handle, 0LL), inited >= 0) )
  {
    if ( a4 == 8 )
      goto LABEL_21;
    v18 = MapCmDevicePropertyToRegValue(v17, a4);
    if ( v18 )
    {
      if ( SecurityDescriptorLength )
      {
        v19 = Handle;
        if ( a3 )
          v19 = a3;
        v20 = RegRtlSetValue(v19, v18, a5, v13, SecurityDescriptorLength);
        if ( v20 == -1073741444 )
        {
          inited = -1073741810;
          goto LABEL_24;
        }
        if ( v20 < 0 )
        {
          inited = v20;
          goto LABEL_24;
        }
      }
      else
      {
        v23 = Handle;
        DestinationString = 0LL;
        if ( a3 )
          v23 = a3;
        inited = RtlInitUnicodeStringEx(&DestinationString, v18);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v23, &DestinationString);
        if ( inited == -1073741772 || inited == -1073741444 )
          inited = -1073741275;
      }
      if ( inited < 0 )
        goto LABEL_24;
LABEL_21:
      v21 = (int)Handle;
      if ( a3 )
        v21 = (int)a3;
      CmRaisePropertyChangeEvent(v12, (_DWORD)a2, 1, v21, a4);
      goto LABEL_24;
    }
LABEL_55:
    inited = -1073741264;
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
