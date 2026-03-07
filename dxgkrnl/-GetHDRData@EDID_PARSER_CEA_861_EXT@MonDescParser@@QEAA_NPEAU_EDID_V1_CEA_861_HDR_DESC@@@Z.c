char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetHDRData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_HDR_DESC *a2)
{
  unsigned int v2; // esi
  int v3; // edi
  struct _EDID_V1_CEA_861_DATA_HEADER *v5; // rdx
  unsigned __int8 v6; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v8 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v3, &v8) )
    {
      v5 = v8;
      if ( (*(_BYTE *)v8 & 0xE0) == 0xE0 && *((_BYTE *)v8 + 1) == 6 )
      {
        v6 = *(_BYTE *)v8 & 0x1F;
        if ( v6 >= 3u )
          break;
      }
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  *(_BYTE *)a2 = *((_BYTE *)v8 + 2);
  *((_BYTE *)a2 + 1) = *((_BYTE *)v5 + 3);
  if ( v6 >= 4u )
    *((_BYTE *)a2 + 2) = *((_BYTE *)v5 + 4);
  if ( v6 >= 5u )
    *((_BYTE *)a2 + 3) = *((_BYTE *)v5 + 5);
  if ( v6 >= 6u )
    *((_BYTE *)a2 + 4) = *((_BYTE *)v5 + 6);
  return 1;
}
