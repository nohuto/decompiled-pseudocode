/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyKeys @ 0x14072DD10
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x140631090 (_PnpDispatchDeviceInterface.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x14072C94C (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140632AA8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406BD0D8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyKeys(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  signed int v9; // r10d
  void *v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rdi
  char v14; // si
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ebp
  __int64 *v21; // rsi
  __int64 v22; // r14
  char v23; // di
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // ecx
  signed int DeviceInterfaceMappedPropertyFromRegValue; // eax
  signed int DeviceInterfaceMappedPropertyFromComposite; // eax
  _DWORD v32[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+90h] [rbp+8h]
  __int64 v34; // [rsp+98h] [rbp+10h]

  v34 = (__int64)a2;
  v33 = a1;
  v7 = a7;
  v8 = (__int64 *)&off_140983B98;
  v9 = 0;
  v32[0] = 0;
  v11 = (void *)a3;
  *a7 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = *v8;
    v14 = 0;
    if ( *v8 )
      break;
LABEL_11:
    ++v12;
    v8 += 2;
    if ( v12 >= 3 )
      goto LABEL_12;
  }
  if ( !a4 )
  {
    DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromRegValue(
                                                  a1,
                                                  a2,
                                                  v11,
                                                  v13,
                                                  v32,
                                                  0LL,
                                                  0,
                                                  &a7);
    v9 = DeviceInterfaceMappedPropertyFromRegValue;
    if ( DeviceInterfaceMappedPropertyFromRegValue == -1073741789 || !DeviceInterfaceMappedPropertyFromRegValue )
    {
      v14 = 1;
    }
    else if ( DeviceInterfaceMappedPropertyFromRegValue == -1073741811
           || (unsigned int)(DeviceInterfaceMappedPropertyFromRegValue + 1073741767) <= 1 )
    {
      goto LABEL_30;
    }
    v9 = 0;
    if ( !v14 )
      goto LABEL_10;
  }
  if ( a5 )
  {
    v15 = *v7;
    if ( (unsigned int)v15 < a6 )
    {
      v16 = 5 * v15;
      *(_OWORD *)(a5 + 4 * v16) = *(_OWORD *)v13;
      *(_DWORD *)(a5 + 4 * v16 + 16) = *(_DWORD *)(v13 + 16);
    }
  }
  v17 = *v7;
  v18 = -1;
  v19 = *v7 + 1;
  if ( v19 >= *v7 )
    v18 = *v7 + 1;
  v9 = v19 < v17 ? 0xC0000095 : 0;
  *v7 = v18;
  if ( v19 >= v17 )
  {
LABEL_10:
    a1 = v33;
    a2 = (const WCHAR *)v34;
    v11 = (void *)a3;
    goto LABEL_11;
  }
LABEL_30:
  *v7 = 0;
LABEL_12:
  if ( v9 >= 0 )
  {
    v20 = 0;
    v21 = (__int64 *)&off_140984090;
    while ( 1 )
    {
      v22 = *v21;
      v23 = 0;
      if ( a4 )
        goto LABEL_44;
      DeviceInterfaceMappedPropertyFromComposite = CmGetDeviceInterfaceMappedPropertyFromComposite(
                                                     v33,
                                                     v34,
                                                     a3,
                                                     *v21,
                                                     v32,
                                                     0LL,
                                                     0,
                                                     &a7);
      v9 = DeviceInterfaceMappedPropertyFromComposite;
      if ( DeviceInterfaceMappedPropertyFromComposite == -1073741789 || !DeviceInterfaceMappedPropertyFromComposite )
      {
        v23 = 1;
      }
      else if ( DeviceInterfaceMappedPropertyFromComposite == -1073741811
             || (unsigned int)(DeviceInterfaceMappedPropertyFromComposite + 1073741767) <= 1 )
      {
        break;
      }
      v9 = 0;
      if ( v23 )
      {
LABEL_44:
        if ( a5 )
        {
          v24 = *v7;
          if ( (unsigned int)v24 < a6 )
          {
            v25 = 5 * v24;
            *(_OWORD *)(a5 + 4 * v25) = *(_OWORD *)v22;
            *(_DWORD *)(a5 + 4 * v25 + 16) = *(_DWORD *)(v22 + 16);
          }
        }
        v26 = *v7;
        v27 = -1;
        v28 = *v7 + 1;
        if ( v28 >= *v7 )
          v27 = *v7 + 1;
        v9 = v28 < v26 ? 0xC0000095 : 0;
        *v7 = v27;
        if ( v28 < v26 )
          break;
      }
      ++v20;
      v21 += 2;
      if ( v20 >= 4 )
        goto LABEL_22;
    }
    *v7 = 0;
LABEL_22:
    if ( v9 >= 0 )
      return a6 < *v7 ? 0xC0000023 : 0;
  }
  return (unsigned int)v9;
}
