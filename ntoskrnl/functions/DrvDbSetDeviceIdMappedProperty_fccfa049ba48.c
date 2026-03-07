__int64 __fastcall DrvDbSetDeviceIdMappedProperty(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        int *a6,
        ULONG a7)
{
  int v7; // r11d
  HANDLE v8; // r10
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 **i; // r8
  __int64 *v17; // r9
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 **v21; // rbp
  int v22; // edi
  int v23; // eax
  __int64 v24; // rax
  const wchar_t *v25; // r8
  unsigned int v26; // eax
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0LL;
  Handle = 0LL;
  if ( v7 == 2 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
      v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  v15 = 0LL;
  for ( i = &off_14000B278; ; i += 5 )
  {
    v17 = *i;
    if ( *((_DWORD *)*i + 4) == v7 )
    {
      v18 = *v17 - *(_QWORD *)a4;
      if ( *v17 == *(_QWORD *)a4 )
        v18 = v17[1] - *(_QWORD *)(a4 + 8);
      if ( !v18 )
        break;
    }
    v15 = (unsigned int)(v15 + 1);
    if ( (_DWORD)v15 )
      return (unsigned int)-1073741802;
  }
  v20 = 5 * v15;
  v21 = &(&off_14000B278)[5 * v15];
  if ( !v21 )
    return (unsigned int)-1073741802;
  v22 = a5;
  if ( a5 != *((_DWORD *)v21 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( a3 || (v23 = DrvDbOpenDeviceIdRegKey(a1, a2, 3, 0, (__int64)&Handle, 0LL), v8 = Handle, v14 = v23, v23 >= 0) )
  {
    if ( *(_DWORD *)(a4 + 16) != 3 )
      goto LABEL_34;
    v24 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v24 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v24 )
    {
LABEL_34:
      if ( a3 )
        v8 = a3;
      v26 = DrvDbSetRegValueMappedProperty(v20, v8, (__int64)v21, v22, a6, a7);
    }
    else
    {
      if ( v22 == 8210 )
      {
        v25 = (const wchar_t *)a6;
        if ( !a6 || !a7 )
        {
LABEL_27:
          v14 = -1073741811;
          goto LABEL_38;
        }
      }
      else
      {
        if ( v22 )
          goto LABEL_27;
        v25 = (const wchar_t *)a6;
        if ( a6 || a7 )
          goto LABEL_27;
      }
      if ( a3 )
        v8 = a3;
      v26 = DrvDbSetDeviceIdDriverInfMatches(v20, v8, v25);
    }
    v8 = Handle;
    v14 = v26;
  }
LABEL_38:
  if ( v8 )
    ZwClose(v8);
  return v14;
}
