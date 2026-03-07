__int64 __fastcall PnpGetObjectPropertyKeysWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        unsigned int a8,
        _DWORD *a9,
        __int16 a10)
{
  int v13; // r12d
  signed int MappedPropertyKeysDispatch; // eax
  __int64 v15; // r9
  signed int v16; // ebx
  __int64 v17; // r8
  unsigned int v18; // eax
  HANDLE v19; // rdx
  signed int GenericStorePropertyKeys; // eax
  unsigned int v21; // edx
  unsigned int v23; // [rsp+50h] [rbp-10h] BYREF
  int v24; // [rsp+54h] [rbp-Ch] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v23 = 0;
  v13 = a2;
  v24 = 0;
  if ( a10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a9 = 0;
    if ( a4 || (v16 = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle), v16 >= 0) )
    {
      MappedPropertyKeysDispatch = PnpGetMappedPropertyKeysDispatch(
                                     a1,
                                     v13,
                                     a3,
                                     (_DWORD)a4,
                                     a5,
                                     a6,
                                     a7,
                                     a8,
                                     (__int64)&v23);
      v16 = MappedPropertyKeysDispatch;
      if ( !MappedPropertyKeysDispatch || (unsigned int)(MappedPropertyKeysDispatch + 1073741790) <= 1 )
      {
        if ( v23 >= a8 )
        {
          v17 = 0LL;
          v18 = 0;
        }
        else
        {
          v17 = a7 + 20LL * v23;
          v18 = a8 - v23;
        }
        v19 = Handle;
        LOBYTE(v15) = a6;
        if ( a4 )
          v19 = a4;
        GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(a1, v19, a5, v15, v17, v18, &v24);
        v16 = GenericStorePropertyKeys;
        if ( !GenericStorePropertyKeys || (unsigned int)(GenericStorePropertyKeys + 1073741790) <= 1 )
        {
          v21 = v23 + v24;
          *a9 = v23 + v24;
          v16 = a8 < v21 ? 0xC0000023 : 0;
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)v16;
}
