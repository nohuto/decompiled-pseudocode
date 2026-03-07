__int64 __fastcall RFONTOBJ::bCheckEudcFontCaps(RFONTOBJ *this, struct IFIOBJ *a2)
{
  int v4; // r9d
  unsigned int v5; // r8d
  __int64 v6; // rcx
  int v8; // r10d

  v4 = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 13308LL);
  v5 = 0;
  if ( (v4 & 0xF0) != 0 )
  {
    v6 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 92LL) )
    {
      if ( (v4 & 0x80u) != 0 )
        return 0LL;
    }
    else if ( (v4 & 0x40) != 0 && (*(_DWORD *)(v6 + 716) & 1) != 0
           || (v4 & 0x20) != 0 && (*(_DWORD *)(v6 + 716) & 4) != 0
           || (v4 & 0x10) != 0 && (*(_DWORD *)(v6 + 716) & 2) != 0 )
    {
      return 0LL;
    }
  }
  v8 = *(_DWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (v8 & 0x10) != 0 )
    return 1LL;
  if ( (v8 & 0x200000) == 0 )
    return 0LL;
  LOBYTE(v5) = *(_DWORD *)(*(_QWORD *)this + 392LL) % 0x384u == 0;
  return v5;
}
