/*
 * XREFs of _PnpDeleteObjectDispatch @ 0x140A62150
 * Callers:
 *     _PnpDeleteObject @ 0x140A6202C (_PnpDeleteObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x1406D13A4 (_PnpCtxGetObjectDispatchCallback.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x140A62B8C (_PnpObjectRaiseDeleteEvent.c)
 */

__int64 __fastcall PnpDeleteObjectDispatch(__int64 a1, __int64 a2, int a3, int a4)
{
  int ObjectDispatchCallback; // ebx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64, _DWORD *); // [rsp+30h] [rbp-58h] BYREF
  _DWORD v11[16]; // [rsp+40h] [rbp-48h] BYREF

  v10 = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( (_WORD)a4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ObjectDispatchCallback = PnpCtxGetObjectDispatchCallback(a1, a3, &v10);
    if ( ObjectDispatchCallback >= 0 )
    {
      if ( v10 )
      {
        v11[0] = a4;
        ObjectDispatchCallback = v10(a1, a2, (unsigned int)a3, 4LL, v11);
        if ( ObjectDispatchCallback >= 0 && a3 >= 7 )
          PnpObjectRaiseDeleteEvent(a1, a2, (unsigned int)a3);
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)ObjectDispatchCallback;
}
