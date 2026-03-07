char __fastcall RtlSetProcessPlaceholderCompatibilityMode(unsigned __int8 a1)
{
  unsigned __int64 v1; // r8
  char result; // al

  if ( a1 > 3u )
    return -1;
  v1 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
  if ( !v1 )
    return -3;
  result = *(_BYTE *)(v1 + 1968);
  *(_BYTE *)(v1 + 1968) = a1;
  return result;
}
