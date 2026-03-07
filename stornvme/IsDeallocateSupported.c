char __fastcall IsDeallocateSupported(__int64 a1)
{
  char v1; // r8

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 520LL) & 4) == 0 && !*(_BYTE *)(a1 + 4347) )
  {
    return 0;
  }
  return v1;
}
