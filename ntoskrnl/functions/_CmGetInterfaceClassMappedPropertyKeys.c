__int64 __fastcall CmGetInterfaceClassMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        void *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 result; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // ecx
  _DWORD v15[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+90h] [rbp+8h]

  v16 = a1;
  v7 = a7;
  LODWORD(a7) = 0;
  *v7 = 0;
  if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface )
  {
    if ( a4
      || (result = CmGetInterfaceClassMappedPropertyFromRegValue(
                     a1,
                     a2,
                     a3,
                     (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                     &a7,
                     0LL,
                     0,
                     v15),
          (_DWORD)result == -1073741789)
      || !(_DWORD)result )
    {
      if ( a5 )
      {
        v11 = *v7;
        if ( (unsigned int)v11 < a6 )
          *(DEVPROPKEY *)(a5 + 20 * v11) = DEVPKEY_DeviceInterfaceClass_DefaultInterface;
      }
      v12 = *v7 + 1;
      if ( v12 < *v7 )
      {
LABEL_24:
        result = 3221225621LL;
        goto LABEL_25;
      }
      *v7 = v12;
    }
    else if ( (_DWORD)result == -1073741772 )
    {
      goto LABEL_25;
    }
    a1 = v16;
  }
  if ( a4
    || (result = CmGetInterfaceClassMappedPropertyFromComposite(
                   a1,
                   a2,
                   (__int64)a3,
                   (__int64)&DEVPKEY_NAME,
                   &a7,
                   0LL,
                   0,
                   v15),
        (_DWORD)result == -1073741789)
    || !(_DWORD)result )
  {
    if ( a5 )
    {
      v13 = *v7;
      if ( (unsigned int)v13 < a6 )
        *(DEVPROPKEY *)(a5 + 20 * v13) = DEVPKEY_NAME;
    }
    v14 = *v7 + 1;
    if ( v14 >= *v7 )
    {
      *v7 = v14;
      return a6 < *v7 ? 0xC0000023 : 0;
    }
    goto LABEL_24;
  }
  if ( (_DWORD)result != -1073741772 )
    return a6 < *v7 ? 0xC0000023 : 0;
LABEL_25:
  *v7 = 0;
  return result;
}
