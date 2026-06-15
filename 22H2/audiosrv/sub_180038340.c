/*
 * XREFs of sub_180038340 @ 0x180038340
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038398 @ 0x180038398 (sub_180038398.c)
 */

void __fastcall sub_180038340(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 1;
    AcquireSRWLockExclusive(Context + 1);
    sub_180038398(Context);
    LOBYTE(Context[3].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
