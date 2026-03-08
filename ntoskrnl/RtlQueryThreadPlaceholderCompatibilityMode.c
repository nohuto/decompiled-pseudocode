/*
 * XREFs of RtlQueryThreadPlaceholderCompatibilityMode @ 0x1409BD400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlQueryThreadPlaceholderCompatibilityMode()
{
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    return -2;
  if ( CurrentThread->ApcStateIndex == 1 )
    return -2;
  Teb = CurrentThread->Teb;
  if ( !Teb )
    return -2;
  else
    return Teb[640];
}
