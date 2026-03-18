/*
 * XREFs of _CmGetInterfaceClassMappedPropertyKeys @ 0x140A2BE80
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140787620 (_PnpDispatchInterfaceClass.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140A25124 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140787818 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140A2BD78 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 */

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
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // ecx
  _DWORD v17[4]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  LODWORD(a7) = 0;
  *v7 = 0;
  if ( !&DEVPKEY_DeviceInterfaceClass_DefaultInterface )
    goto LABEL_12;
  if ( a4
    || (result = CmGetInterfaceClassMappedPropertyFromRegValue(
                   a1,
                   a2,
                   a3,
                   (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                   &a7,
                   0LL,
                   0,
                   v17),
        (_DWORD)result == -1073741789)
    || !(_DWORD)result )
  {
    if ( a5 )
    {
      v13 = *v7;
      if ( (unsigned int)v13 < a6 )
        *(DEVPROPKEY *)(a5 + 20 * v13) = DEVPKEY_DeviceInterfaceClass_DefaultInterface;
    }
    v14 = *v7 + 1;
    if ( v14 < *v7 )
    {
LABEL_23:
      result = 3221225621LL;
      goto LABEL_24;
    }
    *v7 = v14;
LABEL_12:
    if ( !a4 )
    {
      result = CmGetInterfaceClassMappedPropertyFromComposite(
                 a1,
                 a2,
                 (__int64)a3,
                 (__int64)&DEVPKEY_NAME,
                 &a7,
                 0LL,
                 0,
                 v17);
      if ( (_DWORD)result != -1073741789 )
      {
        if ( (_DWORD)result )
        {
          if ( (_DWORD)result == -1073741772 )
            goto LABEL_24;
          return a6 < *v7 ? 0xC0000023 : 0;
        }
      }
    }
    if ( a5 )
    {
      v15 = *v7;
      if ( (unsigned int)v15 < a6 )
        *(DEVPROPKEY *)(a5 + 20 * v15) = DEVPKEY_NAME;
    }
    v16 = *v7 + 1;
    if ( v16 >= *v7 )
    {
      *v7 = v16;
      return a6 < *v7 ? 0xC0000023 : 0;
    }
    goto LABEL_23;
  }
  if ( (_DWORD)result != -1073741772 )
    goto LABEL_12;
LABEL_24:
  *v7 = 0;
  return result;
}
