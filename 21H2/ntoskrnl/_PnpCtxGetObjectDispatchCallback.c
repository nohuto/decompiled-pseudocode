/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x14077DE44
 * Callers:
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x1406989E4 (_PnpGetMappedPropertyLocalesDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x140699CF0 (_PnpValidateObjectNameDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140699D9C (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140771F34 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x14077CA18 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x14077DD78 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x14078A0E8 (_PnpGetObjectListDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x140A26D58 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140A26F84 (_PnpDeleteObjectDispatch.c)
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
