/*
 * XREFs of EtwpCreateEventKey @ 0x1402DFEF0
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpCreateEventKey(unsigned __int64 *a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = _InterlockedIncrement64((volatile signed __int64 *)CurrentPrcb->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)CurrentPrcb->Number << 48);
  *a1 = result;
  return result;
}
