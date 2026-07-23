/*
 * XREFs of _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14097BC28
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14073A704 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromInstanceKeyRegValue(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        _BYTE *a6,
        ULONG a7)
{
  int v7; // r14d
  int v8; // ebx
  int v9; // r11d
  HANDLE v11; // rcx
  DEVPROPKEY **v15; // r9
  unsigned int i; // r10d
  DEVPROPKEY *v17; // r8
  DEVPROPKEY **v18; // rdi
  __int64 v19; // rdx
  const WCHAR *v20; // rdx
  ULONG v21; // r8d
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v26; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v9 = 0;
  v11 = 0LL;
  v26 = 0;
  Handle = 0LL;
  v15 = &off_140983FA0;
  for ( i = 0; i < 2; ++i )
  {
    v17 = *v15;
    v18 = v15;
    if ( v7 == (*v15)->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v17->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v19 )
        break;
    }
    v18 = 0LL;
    v15 += 4;
  }
  if ( !v18 )
    return (unsigned int)-1073741264;
  if ( a5 != *((_DWORD *)v18 + 2) )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v8 = CmOpenDeviceRegKey(a1, a2, 16, 0, 2, 0, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_31;
    v11 = Handle;
    v9 = v26;
  }
  v20 = (const WCHAR *)v18[2];
  v21 = *((_DWORD *)v18 + 6);
  if ( *(_DWORD *)(a4 + 16) != 2 )
    goto LABEL_26;
  v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1 )
    v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Reported.fmtid.Data4;
  if ( v22 )
  {
LABEL_26:
    if ( a3 )
      v11 = a3;
    v24 = RegRtlSetValue(v11, v20, v21, a6, a7);
    if ( v24 != -1073741444 )
    {
      if ( v24 < 0 )
        v8 = v24;
      goto LABEL_31;
    }
  }
  else
  {
    if ( *a6 == 0xFF )
      v9 = 1;
    v26 = v9;
    if ( a3 )
      v11 = a3;
    v23 = RegRtlSetValue(v11, v20, v21, &v26, 4u);
    if ( v23 != -1073741444 )
    {
      if ( v23 < 0 )
        v8 = v23;
      goto LABEL_31;
    }
  }
  v8 = -1073741810;
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
