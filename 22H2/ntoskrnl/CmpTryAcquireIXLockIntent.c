/*
 * XREFs of CmpTryAcquireIXLockIntent @ 0x1406DDEF8
 * Callers:
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockIntent(_DWORD *a1)
{
  return *a1 >= 0;
}
