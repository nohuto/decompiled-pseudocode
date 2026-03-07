__int64 __fastcall BcpGetMaxResourceProfile(__int64 a1, _OWORD *a2)
{
  int CharacterMaxResourceProfile; // r8d
  __int64 *v3; // rbx
  unsigned int v4; // edi
  __int64 *v7; // r9
  unsigned int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned __int16 *i; // r14

  CharacterMaxResourceProfile = 0;
  v3 = &qword_140008AB8;
  v4 = 0;
  *a2 = 0LL;
  do
  {
    v7 = (__int64 *)*(v3 - 1);
    if ( v7 != &qword_140006070 || (dword_140C0E3B0 & 0x20000) == 0 )
    {
      CharacterMaxResourceProfile = 0;
      v8 = *(unsigned __int16 *)v7 >> 1;
      v9 = 0;
      v10 = *(_DWORD *)v3;
      for ( i = (unsigned __int16 *)v7[1]; v9 < v8; ++i )
      {
        CharacterMaxResourceProfile = BcpGetCharacterMaxResourceProfile(*i, v10, a1, a2);
        if ( CharacterMaxResourceProfile < 0 )
          break;
        ++v9;
      }
      if ( CharacterMaxResourceProfile < 0 )
        break;
    }
    ++v4;
    v3 += 2;
  }
  while ( v4 < 0x1A );
  return (unsigned int)CharacterMaxResourceProfile;
}
