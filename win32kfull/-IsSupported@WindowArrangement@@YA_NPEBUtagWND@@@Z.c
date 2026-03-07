char __fastcall WindowArrangement::IsSupported(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 1;
  if ( (dword_1C035C1FC & 1) == 0
    || !IsNonImmersiveBand((__int64)this)
    || _bittest64((const signed __int64 *)PtiCurrentShared(v3) + 81, 0x20u) )
  {
    return 0;
  }
  return v2;
}
