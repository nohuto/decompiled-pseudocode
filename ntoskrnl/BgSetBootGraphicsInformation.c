/*
 * XREFs of BgSetBootGraphicsInformation @ 0x140AEE394
 * Callers:
 *     BgkSetBootGraphicsInformation @ 0x140AEE0F4 (BgkSetBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     BgpFwSetBootGraphicsInformation @ 0x14066F7B0 (BgpFwSetBootGraphicsInformation.c)
 */

__int64 __fastcall BgSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 1) != 0 )
    v5 = BgpFwSetBootGraphicsInformation(v4, a2);
  else
    v5 = -1073741823;
  BgpFwReleaseLock();
  return v5;
}
