/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1406B0D48
 * Callers:
 *     _PnpValidateObjectNameDispatch @ 0x14068CDF8 (_PnpValidateObjectNameDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1406B0738 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1406B0C7C (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1406B1548 (_PnpGetObjectListDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x14073273C (_PnpCreateObjectDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140742418 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x14097670C (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x1409767E0 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x1409768B0 (_PnpGetMappedPropertyLocalesDispatch.c)
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
