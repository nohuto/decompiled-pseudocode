/*
 * XREFs of CcNotifyWriteBehindEx @ 0x140382808
 * Callers:
 *     MiFlushAllPagesWorker @ 0x14038282C (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x14053B4C4 (MiObtainFreePages.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x14031B410 (CcNotifyWriteBehindInternal.c)
 */

LONG __fastcall CcNotifyWriteBehindEx(LONG a1, __int64 a2)
{
  LONG result; // eax
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return CcNotifyWriteBehindInternal(v3, result);
  return result;
}
