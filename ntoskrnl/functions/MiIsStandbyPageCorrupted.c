__int64 __fastcall MiIsStandbyPageCorrupted(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  char v5; // al
  unsigned __int64 v6; // rcx

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(v3 + 4) & 0x80u) != 0 )
    v3 = **(_QWORD **)(v3 + 16944);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = (unsigned __int8)v4 >> 2;
  v6 = v4 >> 12;
  if ( (v5 & 1) != 0 && (v6 & 0xF) == *(_DWORD *)(v3 + 1188)
    || !*(_QWORD *)(*(_QWORD *)(v3 + 8 * (v6 & 0xF) + 17056) + 216LL) )
  {
    return 0LL;
  }
  else
  {
    return MiArePagefileContentsCorrupted(a1, 0LL);
  }
}
