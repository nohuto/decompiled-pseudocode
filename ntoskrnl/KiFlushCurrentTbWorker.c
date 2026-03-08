/*
 * XREFs of KiFlushCurrentTbWorker @ 0x1402D0000
 * Callers:
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x140417710 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbWorker(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v6; // rcx

  if ( KiFlushPcid )
  {
    v3 = __readcr3();
    __writecr3(v3);
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( !Process->AddressPolicy )
      return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, a2, a3);
  }
  else
  {
    v6 = __readcr4();
    if ( (v6 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v6 ^ 0x80);
      __writecr4(v6 ^ 0x80);
      __writecr4(v6);
    }
    else
    {
      result = (struct _KTHREAD *)__readcr3();
      __writecr3((unsigned __int64)result);
    }
  }
  return result;
}
