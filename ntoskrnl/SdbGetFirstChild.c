__int64 __fastcall SdbGetFirstChild(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int NextTagId; // eax
  unsigned int v6; // ecx

  v3 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v6 = 12;
    return v6 < NextTagId ? v6 : 0;
  }
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v3);
    v6 = v3 + 6;
    return v6 < NextTagId ? v6 : 0;
  }
  return 0LL;
}
