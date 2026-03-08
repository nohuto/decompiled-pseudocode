/*
 * XREFs of FsRtlCurrentBatchOplock @ 0x140768A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlCurrentBatchOplock(POPLOCK Oplock)
{
  BOOLEAN v1; // dl

  v1 = 0;
  if ( *Oplock )
    return (*((_BYTE *)*Oplock + 144) & 0xC) != 0;
  return v1;
}
