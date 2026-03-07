struct PFE *__fastcall RFONTOBJ::GetEUDCDefaultFontPFE(RFONTOBJ *this, BOOL a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_BYTE *)(v4 + 44);
  v6 = *(unsigned __int8 *)(v4 + 45) >> 4;
  v7 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
  if ( v5 && v5 != 2 && v5 != -1 || (*(_BYTE *)(v7 + 18736) & (unsigned __int8)(v5 + 2) & 0xF) == 0 )
    return 0LL;
  if ( v6 >= 7 || !*(_DWORD *)(664LL * v6 + v7 + 14088) )
    v6 = 6;
  if ( a2 )
  {
    v8 = 664LL * v6;
    if ( !*(_QWORD *)(v8 + v7 + 14744) )
      a2 = *(_QWORD *)(v8 + v7 + 14736) == 0LL;
  }
  return *(struct PFE **)(v7 + 8 * (a2 + 83LL * v6) + 14736);
}
