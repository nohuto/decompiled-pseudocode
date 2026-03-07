bool __fastcall DxgkIsGpuParavirtualizationSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(int *)(a1 + 2552) >= 9216 && (*(_DWORD *)(a1 + 2284) & 0x400) != 0 )
    return **(_BYTE **)(a1 + 2824) >= 0;
  return v1;
}
