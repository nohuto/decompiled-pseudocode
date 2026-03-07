char __fastcall RtlpFcIsUpdateModifyingOrAddingFeature(__int64 a1)
{
  int v1; // edx
  char result; // al

  v1 = *(_DWORD *)(a1 + 28);
  result = 1;
  if ( ((v1 & 1) == 0 || !*(_DWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 12))
    && ((v1 & 2) == 0 || !*(_BYTE *)(a1 + 16) && !*(_DWORD *)(a1 + 20)) )
  {
    return 0;
  }
  return result;
}
