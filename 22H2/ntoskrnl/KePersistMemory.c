/*
 * XREFs of KePersistMemory @ 0x140423FF0
 * Callers:
 *     MiPersistMdl @ 0x14063E684 (MiPersistMdl.c)
 *     MiPersistPage @ 0x14063EA6C (MiPersistPage.c)
 *     MiTransferFileExtent @ 0x14063F8DC (MiTransferFileExtent.c)
 * Callees:
 *     <none>
 */

int __fastcall KePersistMemory(__int64 _RCX, __int64 a2)
{
  __int64 v2; // rax

  LODWORD(v2) = KeGetPcr()->Prcb.CFlushSize;
  do
  {
    __asm { clwb    byte ptr [rcx] }
    _RCX += v2;
    a2 -= v2;
  }
  while ( a2 );
  _mm_sfence();
  return v2;
}
