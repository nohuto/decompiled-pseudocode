char RtlQueryProcessPlaceholderCompatibilityMode()
{
  unsigned __int64 v0; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
  if ( v0 )
    return *(_BYTE *)(v0 + 1968);
  else
    return -3;
}
