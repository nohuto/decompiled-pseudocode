bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1536) & 0x40000000) != 0 )
    return !PsIsServerSilo(a1);
  return v1;
}
