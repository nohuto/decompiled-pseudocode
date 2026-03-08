/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x1408A16A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlSetThreadPlaceholderCompatibilityMode(unsigned __int8 a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  _BYTE *Teb; // r8
  char result; // al

  if ( a1 > 3u )
    return -1;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    return -2;
  if ( CurrentThread->ApcStateIndex == 1 )
    return -2;
  Teb = CurrentThread->Teb;
  if ( !Teb )
    return -2;
  result = Teb[640];
  Teb[640] = a1;
  return result;
}
