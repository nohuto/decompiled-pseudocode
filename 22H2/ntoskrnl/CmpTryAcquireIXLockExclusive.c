/*
 * XREFs of CmpTryAcquireIXLockExclusive @ 0x1406DDEE8
 * Callers:
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockExclusive(_DWORD *a1)
{
  return *a1 == 0;
}
