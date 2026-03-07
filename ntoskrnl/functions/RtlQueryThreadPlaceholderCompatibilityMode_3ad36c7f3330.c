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
