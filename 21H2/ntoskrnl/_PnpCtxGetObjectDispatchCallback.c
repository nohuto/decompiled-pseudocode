/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x140637F68
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x140637958 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x140637E9C (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x140638768 (_PnpGetObjectListDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x1406A9E48 (_PnpValidateObjectNameDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x1407323EC (_PnpCreateObjectDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140745F78 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x1409766BC (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140976790 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140976860 (_PnpGetMappedPropertyLocalesDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectDispatchCallback(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 296);
  return v3;
}
