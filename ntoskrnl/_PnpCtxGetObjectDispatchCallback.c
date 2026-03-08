/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1406D13A4
 * Callers:
 *     _PnpSetMappedPropertyDispatch @ 0x140687210 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1406CEDAC (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1406D12D8 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x1407475E8 (_PnpValidateObjectNameDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x14083A99C (_PnpGetMappedPropertyLocalesDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x14083B218 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x14086A180 (_PnpGetObjectListDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x140A61F24 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140A62150 (_PnpDeleteObjectDispatch.c)
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
