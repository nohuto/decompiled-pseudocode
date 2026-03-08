/*
 * XREFs of _PnpOpenObjectRegKeyDispatch @ 0x1406CEDAC
 * Callers:
 *     _PnpOpenObjectRegKey @ 0x1406CECB8 (_PnpOpenObjectRegKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x1406D13A4 (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpOpenObjectRegKeyDispatch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        __int16 a8)
{
  int ObjectDispatchCallback; // edx
  int v13; // r10d
  __int64 (__fastcall *v15[2])(_QWORD, _QWORD, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-58h] BYREF
  _QWORD v16[8]; // [rsp+40h] [rbp-48h] BYREF

  v15[0] = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( a8 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ObjectDispatchCallback = PnpCtxGetObjectDispatchCallback(a1, a3, v15);
    if ( ObjectDispatchCallback >= 0 )
    {
      if ( v15[0] )
      {
        BYTE4(v16[0]) = a5;
        v16[1] = a6;
        LODWORD(v16[0]) = a4;
        HIDWORD(v16[2]) = v13;
        ObjectDispatchCallback = v15[0](a1, a2, a3, 2LL, v16);
        if ( ObjectDispatchCallback >= 0 )
          *a7 = v16[2];
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)ObjectDispatchCallback;
}
