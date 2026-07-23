/*
 * XREFs of PpDevCfgProcessDeviceClass @ 0x140730028
 * Callers:
 *     PiConfigureDevice @ 0x14072FFA4 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x14066DF18 (RtlStringFromGUIDEx.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140739E10 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14073A554 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x14073BBF0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1407677A4 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140770ECC (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x1407710B0 (PiDevCfgGetDeviceClassConfigFlags.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceClass(__int64 a1)
{
  wchar_t *Buffer; // r14
  int v3; // edi
  unsigned __int8 v4; // si
  __int64 v5; // rcx
  NTSTATUS inited; // ebx
  __int64 v7; // r12
  __int64 v8; // rdx
  int v9; // eax
  NTSTATUS v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v24[10]; // [rsp+B8h] [rbp-50h] BYREF
  GUID Guid; // [rsp+108h] [rbp+0h] BYREF

  memset(v24, 0, 0x48uLL);
  Handle = 0LL;
  v23 = 0LL;
  KeyHandle = 0LL;
  Buffer = 0LL;
  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  v3 = 0;
  GuidString.Buffer = 0LL;
  v4 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0x100000000LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_25;
  }
  v5 = *(_QWORD *)(a1 + 48);
  if ( !v5 )
  {
    inited = -1073741808;
    goto LABEL_25;
  }
  inited = PiDevCfgInitDeviceContext(v5, 0LL, v24);
  if ( inited >= 0 )
  {
    v7 = v24[2];
    v8 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)&ObjectAttributes.Length = &DEVPKEY_Device_ClassGuid;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&Guid;
    ObjectAttributes.RootDirectory = (HANDLE)13;
    *(_QWORD *)(&ObjectAttributes.Attributes + 1) = 0LL;
    HIDWORD(ObjectAttributes.SecurityDescriptor) = 0;
    ObjectAttributes.Attributes = 16;
    inited = PiDevCfgQueryObjectProperties(1, v8, 1, v24[2], (__int64)&ObjectAttributes, 1);
    if ( inited >= 0 )
    {
      if ( SLODWORD(ObjectAttributes.SecurityDescriptor) >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_25;
        Buffer = GuidString.Buffer;
        v9 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)GuidString.Buffer, 2u, 131097, 0, (__int64)&Handle);
        inited = v9;
        if ( v9 == -1073741772 )
        {
          Handle = 0LL;
LABEL_14:
          inited = PiDevCfgConfigureDeviceLocation(a1, v24, &v16, &v17);
          if ( inited < 0 )
            goto LABEL_25;
          v11 = v16 | v3;
          if ( (((unsigned __int8)v17 | v4) & 2) == 0 && Buffer && Handle )
          {
            inited = PiDevCfgGetDeviceClassConfigFlags(Buffer, Handle, &v16);
            if ( inited < 0 )
              goto LABEL_25;
            v11 |= v16;
          }
          if ( v11 )
          {
            v12 = *(_QWORD *)(a1 + 48);
            LODWORD(v18) = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v12,
                        v7,
                        11,
                        (__int64)&v18 + 4,
                        (__int64)&v16,
                        (__int64)&v18,
                        0) < 0
              || HIDWORD(v18) != 4
              || (v14 = v16, (_DWORD)v18 != 4) )
            {
              v14 = 0;
            }
            v16 = v11 | v14;
            PiDevCfgSetDeviceRegProp(v13, (unsigned int)v24, 11, 4, (__int64)&v16, 4);
          }
          goto LABEL_25;
        }
        if ( v9 < 0 )
          goto LABEL_25;
      }
      if ( Handle )
      {
        ObjectAttributes.RootDirectory = Handle;
        *((_QWORD *)&v23 + 1) = L"Configuration";
        LODWORD(v23) = 1835034;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        inited = v10;
        if ( v10 != -1073741772 )
        {
          if ( v10 < 0 )
            goto LABEL_25;
          inited = PiDevCfgConfigureDeviceKeys(
                     a1,
                     (unsigned int)v24,
                     (_DWORD)KeyHandle,
                     -1,
                     (__int64)&v16,
                     (__int64)&v17);
          if ( inited < 0 )
            goto LABEL_25;
          v3 = v16;
          v4 = v17;
        }
      }
      goto LABEL_14;
    }
  }
LABEL_25:
  RtlFreeAnsiString(&GuidString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext(v24);
  return (unsigned int)inited;
}
