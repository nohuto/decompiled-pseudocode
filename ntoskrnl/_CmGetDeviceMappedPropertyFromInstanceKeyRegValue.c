/*
 * XREFs of _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407FD090
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1406C9070 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1407FCE14 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r13
  int v9; // ebx
  _DWORD *v10; // rax
  HANDLE v11; // r10
  unsigned __int64 v13; // r15
  int v15; // esi
  int v16; // r11d
  DEVPROPKEY **v17; // rdx
  unsigned int i; // r9d
  DEVPROPKEY *v19; // r8
  DEVPROPKEY **v20; // rdi
  __int64 v21; // rcx
  const WCHAR *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  int v26; // ecx
  int v27; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF

  v8 = (_DWORD *)a5;
  v9 = 0;
  v10 = a8;
  v11 = 0LL;
  v27 = 0;
  v13 = (unsigned __int64)a6;
  *(_DWORD *)a5 = 0;
  *v10 = 0;
  Handle = 0LL;
  if ( v13 )
  {
    v15 = a7;
    v13 &= -(__int64)(a7 != 0);
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  v17 = &off_140A756D0;
  for ( i = 0; i < 2; ++i )
  {
    v19 = *v17;
    v20 = v17;
    if ( v16 == (*v17)->pid )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&v19->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v19->fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v19->fmtid.Data4;
      if ( !v21 )
        break;
    }
    v20 = 0LL;
    v17 += 4;
  }
  if ( !v20 )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v9 = CmOpenDeviceRegKey(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
    if ( v9 < 0 )
      goto LABEL_22;
    v11 = Handle;
  }
  v22 = (const WCHAR *)v20[2];
  if ( *(_DWORD *)(a4 + 16) == 2 )
  {
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Reported.fmtid.Data4;
    if ( !v23 )
    {
      LODWORD(a6) = 0;
      LODWORD(a5) = 4;
      if ( a3 )
        v11 = a3;
      if ( (int)RegRtlQueryValue(v11, v22, &v27, &a6, (unsigned int *)&a5) >= 0 && v27 == 4 && (_DWORD)a5 == 4 )
        v24 = (int)a6;
      else
        v24 = 0;
      if ( !v24 )
      {
LABEL_21:
        v9 = -1073741275;
        goto LABEL_22;
      }
      *a8 = 1;
      *v8 = 17;
      if ( v15 )
      {
        *(_BYTE *)v13 = -1;
        goto LABEL_22;
      }
LABEL_46:
      v9 = -1073741789;
      goto LABEL_22;
    }
  }
  LODWORD(a5) = v15;
  if ( a3 )
    v11 = a3;
  v26 = RegRtlQueryValue(v11, v22, &v27, (void *)v13, (unsigned int *)&a5);
  if ( v26 == -1073741772 || v26 == -1073741444 )
    goto LABEL_21;
  if ( v26 && v26 != -1073741789 )
  {
    v9 = v26;
    goto LABEL_22;
  }
  if ( v27 != *((_DWORD *)v20 + 6) )
  {
    v9 = -1073741811;
    goto LABEL_22;
  }
  *a8 = a5;
  *v8 = *((_DWORD *)v20 + 2);
  if ( v26 || !v15 )
    goto LABEL_46;
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
