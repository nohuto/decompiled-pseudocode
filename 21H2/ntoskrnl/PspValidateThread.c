/*
 * XREFs of PspValidateThread @ 0x140210380
 * Callers:
 *     PsSetThreadProperty @ 0x140210340 (PsSetThreadProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspValidateThread(struct _KTHREAD *a1)
{
  if ( a1 != KeGetCurrentPrcb()->IdleThread )
  {
    if ( KeGetCurrentIrql() < 2u
      && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(a1[-1].EndPadding[1]) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)] != PsThreadType )
    {
      return 3221225485LL;
    }
    if ( a1 != KeGetCurrentThread() || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      return 0LL;
  }
  return 3221225659LL;
}
