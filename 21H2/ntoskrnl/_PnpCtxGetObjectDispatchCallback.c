/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x14062CD78
 * Callers:
 *     _PnpValidateObjectNameDispatch @ 0x140607DC8 (_PnpValidateObjectNameDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x14062C768 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x14062CCAC (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x14062D578 (_PnpGetObjectListDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x1407325AC (_PnpCreateObjectDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140746138 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x14097689C (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140976970 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140976A40 (_PnpGetMappedPropertyLocalesDispatch.c)
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
