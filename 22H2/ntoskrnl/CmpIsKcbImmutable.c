/*
 * XREFs of CmpIsKcbImmutable @ 0x1406DEBC0
 * Callers:
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbImmutable(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 160LL) & 0x100000) != 0;
}
