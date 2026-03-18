/*
 * XREFs of CcNotifyWriteBehindEx @ 0x140536AF0
 * Callers:
 *     MiObtainFreePages @ 0x140634F9C (MiObtainFreePages.c)
 *     MiFlushAllPagesWorker @ 0x140639D54 (MiFlushAllPagesWorker.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x140536B4C (CcNotifyWriteBehindInternal.c)
 */

__int64 __fastcall CcNotifyWriteBehindEx(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return CcNotifyWriteBehindInternal(v3, (unsigned int)result);
  return result;
}
