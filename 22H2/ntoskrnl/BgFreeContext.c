/*
 * XREFs of BgFreeContext @ 0x140AF2228
 * Callers:
 *     BgkResumeFinished @ 0x140A99AF8 (BgkResumeFinished.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x140AF2ED4 (ResFwFreeContext.c)
 */

char BgFreeContext()
{
  PVOID v0; // rbx
  char result; // al

  v0 = qword_140D18490;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 2u && qword_140D18490 )
  {
    BgpFwAcquireLock();
    if ( (dword_140C0E4B0 & 1) != 0 )
      ResFwFreeContext(v0);
    return BgpFwReleaseLock();
  }
  return result;
}
