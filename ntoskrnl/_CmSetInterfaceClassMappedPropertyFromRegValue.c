/*
 * XREFs of _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A674EC
 * Callers:
 *     _CmSetInterfaceClassMappedProperty @ 0x140A673A8 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1406C4F44 (_CmOpenInterfaceClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x1406D1610 (_PnpOpenPropertiesKey.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetInterfaceClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        HANDLE a3,
        __int64 a4,
        int a5,
        void *a6,
        ULONG a7)
{
  unsigned int v7; // edi
  int v8; // ebx
  int v12; // r11d
  DEVPROPKEY **v13; // rcx
  DEVPROPKEY *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // edi
  __int64 v20; // [rsp+28h] [rbp-40h]
  HANDLE v21[5]; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v21[0] = 0LL;
  Handle = 0LL;
  if ( v7 < 2 )
    return (unsigned int)-1073741264;
  v12 = 0;
  v13 = &off_140A74E28;
  do
  {
    v14 = *v13;
    v15 = (__int64)v13;
    if ( v7 == (*v13)->pid )
    {
      v16 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
      if ( !v16 )
        break;
    }
    v15 = 0LL;
    ++v12;
    v13 += 2;
  }
  while ( !v12 );
  if ( !v15 )
    return (unsigned int)-1073741264;
  if ( a5 != *(_DWORD *)(v15 + 8) )
    return (unsigned int)-1073741811;
  if ( v7 == 2 )
  {
    v17 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v17 )
    {
      if ( !a3 )
      {
        v8 = CmOpenInterfaceClassRegKey(a1, a2, v15, a4, 1, 0, (__int64)v21, 0LL);
        if ( v8 < 0 )
        {
LABEL_24:
          if ( v21[0] )
            ZwClose(v21[0]);
          return (unsigned int)v8;
        }
        a3 = v21[0];
      }
      v8 = PnpOpenPropertiesKey(a1, (__int64)a3, 0LL, 2, 1, v20, &Handle);
      if ( v8 >= 0 )
      {
        v18 = RegRtlSetValue(Handle, L"Default", 1u, a6, a7);
        ZwClose(Handle);
        if ( v18 == -1073741444 )
        {
          v8 = -1073741772;
        }
        else if ( v18 < 0 )
        {
          v8 = v18;
        }
      }
      goto LABEL_24;
    }
  }
  return (unsigned int)v8;
}
