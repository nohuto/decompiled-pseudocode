/*
 * XREFs of _CmSetInstallerClassRegPropWorker @ 0x140A60700
 * Callers:
 *     _CmSetInstallerClassRegProp @ 0x140A6059C (_CmSetInstallerClassRegProp.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     _CmClassPropertyRead @ 0x1402C0BC8 (_CmClassPropertyRead.c)
 *     _MapCmClassPropertyToRegValue @ 0x1402C0C58 (_MapCmClassPropertyToRegValue.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     _CmClassPropertyWrite @ 0x140671848 (_CmClassPropertyWrite.c)
 *     _CmOpenInstallerClassRegKey @ 0x1406C4ED8 (_CmOpenInstallerClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x1406D1610 (_PnpOpenPropertiesKey.c)
 *     RtlLengthSecurityDescriptor @ 0x14071C8F0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14071D120 (RtlValidRelativeSecurityDescriptor.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 *     _CmRaisePropertyChangeEvent @ 0x14086A444 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall CmSetInstallerClassRegPropWorker(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        ULONG a5,
        void *a6,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int inited; // ebx
  void *v12; // r15
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  HANDLE v18; // rdx
  HANDLE v19; // rsi
  const wchar_t *v20; // rax
  HANDLE v21; // r9
  int v22; // eax
  __int64 v24; // [rsp+28h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  inited = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v12 = a6;
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  else
  {
    v12 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    goto LABEL_58;
  if ( !CmClassPropertyWrite(a4) )
    return (unsigned int)-1073741790;
  v16 = (unsigned int)(a4 - 8);
  if ( a4 == 8 || (v16 = (unsigned int)(a4 - 13), a4 == 13) )
  {
    v17 = 1;
  }
  else
  {
    v16 = (unsigned int)(a4 - 18);
    if ( a4 == 18 || (v16 = (unsigned int)(a4 - 19), a4 == 19) )
    {
      v17 = 7;
    }
    else
    {
      v16 = (unsigned int)(a4 - 24);
      if ( a4 == 24 )
      {
        v17 = 3;
      }
      else
      {
        v16 = (unsigned int)(a4 - 26);
        if ( a4 != 26 )
        {
          v16 = (unsigned int)(a4 - 27);
          if ( (unsigned int)v16 >= 2 )
            return (unsigned int)-1073741264;
        }
        v17 = 4;
      }
    }
  }
  if ( a5 != v17 )
    return (unsigned int)-1073741811;
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_32;
    return (unsigned int)-1073741811;
  }
  if ( a4 != 24 || !SecurityDescriptorLength )
  {
LABEL_32:
    if ( !a3 )
    {
      inited = CmOpenInstallerClassRegKey(a1, v13, v14, v15, 33554438, 0, (__int64)&Handle, 0LL);
      if ( inited < 0 )
        goto LABEL_59;
    }
    if ( a4 == 8 || a4 == 13 || (unsigned int)(a4 - 18) < 2 )
    {
      v19 = a3;
      if ( !a3 )
        v19 = Handle;
    }
    else
    {
      v18 = Handle;
      if ( a3 )
        v18 = a3;
      inited = PnpOpenPropertiesKey(a1, (__int64)v18, 0LL, 2, 1, v24, &KeyHandle);
      if ( inited < 0 )
        goto LABEL_59;
      v19 = KeyHandle;
    }
    v20 = MapCmClassPropertyToRegValue(v16, a4);
    if ( v20 )
    {
      if ( SecurityDescriptorLength )
      {
        v22 = RegRtlSetValue(v19, v20, a5, v12, SecurityDescriptorLength);
        if ( v22 == -1073741444 )
        {
          inited = -1073741772;
          goto LABEL_59;
        }
        if ( v22 < 0 )
        {
          inited = v22;
          goto LABEL_59;
        }
      }
      else
      {
        DestinationString = 0LL;
        inited = RtlInitUnicodeStringEx(&DestinationString, v20);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v19, &DestinationString);
        if ( inited == -1073741772 || inited == -1073741444 )
          inited = -1073741275;
        if ( inited < 0 )
          goto LABEL_59;
      }
      v21 = Handle;
      if ( a3 )
        v21 = a3;
      CmRaisePropertyChangeEvent(a1, a2, 2u, (__int64)v21, a4);
      goto LABEL_59;
    }
LABEL_58:
    inited = -1073741264;
    goto LABEL_59;
  }
  if ( RtlValidRelativeSecurityDescriptor(v12, SecurityDescriptorLength, 0)
    && RtlLengthSecurityDescriptor(v12) == SecurityDescriptorLength )
  {
    v13 = a2;
    goto LABEL_32;
  }
  inited = -1073741811;
LABEL_59:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
