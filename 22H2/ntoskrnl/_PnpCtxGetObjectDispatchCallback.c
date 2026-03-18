/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1406D0690
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x1406CFB04 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1406D05C4 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140797610 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x1407FAED8 (_PnpValidateObjectNameDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x14083BC8C (_PnpGetMappedPropertyLocalesDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x14083C508 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x14086CDB0 (_PnpGetObjectListDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x140A64C24 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140A64E50 (_PnpDeleteObjectDispatch.c)
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
