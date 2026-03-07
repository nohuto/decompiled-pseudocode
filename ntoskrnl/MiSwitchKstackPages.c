signed __int64 __fastcall MiSwitchKstackPages(__int64 a1, __int128 *a2)
{
  MiCopyPfnEntryEx(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  return MiSetPfnIdentity(a1, 2);
}
