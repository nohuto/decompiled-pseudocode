/*
 * XREFs of _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140A66450
 * Callers:
 *     _CmGetInterfaceClassMappedProperty @ 0x1406C58F4 (_CmGetInterfaceClassMappedProperty.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x140A66558 (_CmGetInterfaceClassMappedPropertyKeys.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyFromComposite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  __int64 v8; // rdi
  unsigned int v9; // r10d
  _DWORD *v10; // rbx
  __int64 v12; // r11
  int v13; // r8d
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int ObjectProperty; // eax
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v8 = (__int64)a5;
  v9 = 0;
  v10 = a8;
  v18 = 0;
  v12 = a6;
  *a5 = 0;
  *v10 = 0;
  if ( v12 )
  {
    v13 = a7;
    v12 &= -(__int64)(a7 != 0);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  if ( v14 >= 2 )
  {
    if ( v14 == 10 )
    {
      v15 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v15 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           a2,
                           4LL,
                           a3,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterfaceClass_Name,
                           v8,
                           v12,
                           v13,
                           (__int64)&v18,
                           0);
        v9 = ObjectProperty;
        if ( !ObjectProperty || ObjectProperty == -1073741789 )
          *v10 = v18;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741264;
  }
  return v9;
}
