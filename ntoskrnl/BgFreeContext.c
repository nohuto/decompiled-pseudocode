/*
 * XREFs of BgFreeContext @ 0x140AEE228
 * Callers:
 *     BgkResumeFinished @ 0x140A969B8 (BgkResumeFinished.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x140AEEED4 (ResFwFreeContext.c)
 */

char BgFreeContext()
{
  PVOID v0; // rbx
  char result; // al

  v0 = qword_140D18150;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 2u && qword_140D18150 )
  {
    BgpFwAcquireLock();
    if ( (dword_140C0E3B0 & 1) != 0 )
      ResFwFreeContext(v0);
    return BgpFwReleaseLock();
  }
  return result;
}
