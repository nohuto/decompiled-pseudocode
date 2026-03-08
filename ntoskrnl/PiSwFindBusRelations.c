/*
 * XREFs of PiSwFindBusRelations @ 0x140688540
 * Callers:
 *     PiSwFindChildren @ 0x140688518 (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x1408672DC (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140245A20 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int64 a1)
{
  bool v1; // zf
  _OWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8) == 0LL;
  memset(v3, 0, sizeof(v3));
  if ( v1 )
    return 0LL;
  v3[0] = *(_OWORD *)a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, v3);
}
