bool __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetMsftDisplayVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // esi
  int v3; // ebx
  struct _EDID_V1_CEA_861_DATA_HEADER *v6; // rdx
  bool result; // al
  int v8; // ecx
  struct _EDID_V1_CEA_861_DATA_HEADER *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v9 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v3, &v9) )
    {
      v6 = v9;
      if ( (*(_BYTE *)v9 & 0xE0) == 0x60
        && (*(_BYTE *)v9 & 0x1F) == 0x15
        && (*(_DWORD *)((_BYTE *)v9 + 1) & 0xFFFFFF) == 0xCA125C )
      {
        break;
      }
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  v8 = *(_DWORD *)((char *)v9 + 17);
  result = 1;
  *(_OWORD *)a2 = *(_OWORD *)((char *)v9 + 1);
  *((_DWORD *)a2 + 4) = v8;
  *((_BYTE *)a2 + 20) = *((_BYTE *)v6 + 21);
  return result;
}
