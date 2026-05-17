/*
 * XREFs of RtlpWaitCouldDeadlock @ 0x180064DB0
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 * Callees:
 *     <none>
 */

bool RtlpWaitCouldDeadlock()
{
  struct _TEB *v1; // rcx
  __int64 WowTebOffset; // rax
  __int64 v3; // rcx

  if ( byte_18016C508 )
    return 1;
  if ( !UseWOW64 )
    return 0;
  v1 = NtCurrentTeb();
  WowTebOffset = v1->WowTebOffset;
  if ( (_DWORD)WowTebOffset )
  {
    if ( (int)WowTebOffset >= 0 )
      v1 = (struct _TEB *)((char *)v1 + WowTebOffset);
  }
  else
  {
    v1 = 0LL;
  }
  v3 = *(unsigned int *)(LODWORD(v1->NtTib.Self) + 0xCLL);
  return v3 && *(_BYTE *)(v3 + 40);
}
