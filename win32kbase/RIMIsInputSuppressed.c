__int64 __fastcall RIMIsInputSuppressed(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = *(_DWORD *)(a1 + 1320);
  v2 = 0;
  if ( v1 == 1 || v1 == 2 && !(unsigned int)RIMIsWakeCapableDevice() )
    return 1;
  return v2;
}
