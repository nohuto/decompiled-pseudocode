/*
 * XREFs of _PnpGetObjectPropertyKeysWorker @ 0x140697384
 * Callers:
 *     _PnpGetObjectPropertyKeys @ 0x14069726C (_PnpGetObjectPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140698AAC (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140699D9C (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PnpGetObjectPropertyKeysWorker(
        __int64 a1,
        int a2,
        int a3,
        void *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        unsigned int a8,
        _DWORD *a9,
        __int16 a10)
{
  signed int MappedPropertyKeysDispatch; // eax
  __int64 v15; // r9
  signed int v16; // ebx
  HANDLE v17; // rdx
  signed int GenericStorePropertyKeys; // eax
  unsigned int v19; // edx
  int v21; // [rsp+50h] [rbp-10h] BYREF
  int v22; // [rsp+54h] [rbp-Ch]
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v21 = 0;
  v22 = 0;
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
                                     a2,
                                     a3,
                                     (_DWORD)a4,
                                     a5,
                                     a6,
                                     a7,
                                     a8,
                                     (__int64)&v21);
      v16 = MappedPropertyKeysDispatch;
      if ( !MappedPropertyKeysDispatch || (unsigned int)(MappedPropertyKeysDispatch + 1073741790) <= 1 )
      {
        v17 = Handle;
        LOBYTE(v15) = a6;
        if ( a4 )
          v17 = a4;
        GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(a1, v17, a5, v15);
        v16 = GenericStorePropertyKeys;
        if ( !GenericStorePropertyKeys || (unsigned int)(GenericStorePropertyKeys + 1073741790) <= 1 )
        {
          v19 = v21 + v22;
          *a9 = v21 + v22;
          v16 = a8 < v19 ? 0xC0000023 : 0;
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)v16;
}
