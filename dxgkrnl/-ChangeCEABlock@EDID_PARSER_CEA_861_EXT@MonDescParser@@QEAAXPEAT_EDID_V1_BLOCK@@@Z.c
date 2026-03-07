void __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        union _EDID_V1_BLOCK *a2)
{
  int v2; // r9d
  unsigned int v3; // r11d
  unsigned int i; // r8d
  unsigned int v5; // r8d

  v2 = 0;
  *(_QWORD *)this = a2;
  v3 = *((unsigned __int8 *)a2 + 2);
  for ( i = 4; !(_BYTE)v3 || i < v3; i = v5 + 1 )
  {
    if ( i >= 0x7F )
      break;
    v5 = (*((_BYTE *)a2 + i) & 0x1F) + i;
    if ( v5 >= 0x7F )
      break;
    ++v2;
  }
  *((_DWORD *)this + 2) = v2;
}
