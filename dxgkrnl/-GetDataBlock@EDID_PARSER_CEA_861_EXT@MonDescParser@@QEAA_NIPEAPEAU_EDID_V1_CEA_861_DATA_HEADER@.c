char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        int a2,
        struct _EDID_V1_CEA_861_DATA_HEADER **a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r9d
  unsigned int v6; // r10d
  struct _EDID_V1_CEA_861_DATA_HEADER *v7; // rdx

  v3 = *((_DWORD *)this + 2);
  v4 = 0;
  *a3 = 0LL;
  v6 = 4;
  if ( v3 )
  {
    while ( v6 < 0x7F )
    {
      v7 = (struct _EDID_V1_CEA_861_DATA_HEADER *)(*(_QWORD *)this + v6);
      if ( v4 == a2 )
      {
        *a3 = v7;
        return 1;
      }
      ++v4;
      v6 += (*(_BYTE *)v7 & 0x1F) + 1;
      if ( v4 >= v3 )
        return 0;
    }
  }
  return 0;
}
