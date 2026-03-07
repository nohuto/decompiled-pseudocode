__int64 __fastcall PspValidateThread(_KTHREAD *a1)
{
  if ( a1 == KeGetCurrentPrcb()->IdleThread )
    return 3221225659LL;
  if ( KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(a1[-1].EndPadding[0]) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)] != PsThreadType )
  {
    return 3221225485LL;
  }
  if ( a1 == KeGetCurrentThread() )
    return (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 ? 0xC00000BB : 0;
  return 0LL;
}
