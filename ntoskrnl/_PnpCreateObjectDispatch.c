/*
 * XREFs of _PnpCreateObjectDispatch @ 0x140A61F24
 * Callers:
 *     _PnpCreateObject @ 0x140A61DB4 (_PnpCreateObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x1406D13A4 (_PnpCtxGetObjectDispatchCallback.c)
 *     _PnpObjectRaiseCreateEvent @ 0x14087BCA8 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 __fastcall PnpCreateObjectDispatch(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5, _BYTE *a6, __int16 a7)
{
  int ObjectDispatchCallback; // ebx
  int v12; // r10d
  char v13; // cl
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-58h] BYREF
  _QWORD v16[8]; // [rsp+40h] [rbp-48h] BYREF

  v15 = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( a7 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ObjectDispatchCallback = PnpCtxGetObjectDispatchCallback(a1, a3, &v15);
    if ( ObjectDispatchCallback >= 0 )
    {
      if ( v15 )
      {
        LODWORD(v16[0]) = a4;
        HIDWORD(v16[2]) = v12;
        ObjectDispatchCallback = v15(a1, a2, (unsigned int)a3, 3LL, v16);
        if ( ObjectDispatchCallback >= 0 )
        {
          v13 = v16[2];
          *a5 = v16[1];
          *a6 = v13;
          if ( v13 )
          {
            if ( a3 >= 7 )
              PnpObjectRaiseCreateEvent(a1, a2, (unsigned int)a3, *a5);
          }
        }
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)ObjectDispatchCallback;
}
