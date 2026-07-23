/*
 * XREFs of _PnpSetObjectPropertyWorker @ 0x140745F5C
 * Callers:
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 *     _PnpValidatePropertyData @ 0x14062F0CC (_PnpValidatePropertyData.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140746138 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140746274 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpSetGenericStoreProperty @ 0x140746958 (_PnpSetGenericStoreProperty.c)
 */

__int64 __fastcall PnpSetObjectPropertyWorker(
        __int64 a1,
        __int64 a2,
        signed int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        ULONG SecurityDescriptorLength,
        int a10)
{
  __int64 *v14; // r12
  int v15; // ebx
  int v16; // edx
  int v17; // r9d
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  if ( (_WORD)a10 || !a8 && SecurityDescriptorLength )
    return (unsigned int)-1073741811;
  v14 = (__int64 *)(a8 & -(__int64)(SecurityDescriptorLength != 0));
  v15 = PnpValidatePropertyData(v14, SecurityDescriptorLength, a7);
  if ( v15 >= 0 )
  {
    v15 = PnpSetMappedPropertyDispatch(a1, a2, a3, a4, a5, a6, a7, (__int64)v14, SecurityDescriptorLength, a10);
    if ( v15 >= 0 && a3 >= 7 )
      PnpObjectRaisePropertyChangeEvent(a1, a2, a3, a4, a5, a6);
    if ( v15 == -1073741802 )
    {
      if ( a4 )
      {
        v16 = a4;
        goto LABEL_8;
      }
      v15 = PnpOpenObjectRegKey(a1, a2, a3, 33554439, 0, (__int64)Handle);
      if ( v15 >= 0 )
      {
        v16 = (int)Handle[0];
LABEL_8:
        v15 = PnpSetGenericStoreProperty(a1, v16, a5, a6, a7, (__int64)v14, SecurityDescriptorLength);
        if ( v15 >= 0 )
        {
          v17 = (int)Handle[0];
          if ( a4 )
            v17 = a4;
          PnpObjectRaisePropertyChangeEvent(a1, a2, a3, v17, a5, a6);
        }
      }
    }
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v15;
}
