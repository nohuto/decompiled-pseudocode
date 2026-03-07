char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiForumVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  struct _EDID_V1_CEA_861_DATA_HEADER *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v7 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v3, &v7) )
    {
      if ( (*(_BYTE *)v7 & 0xE0) == 0x60
        && (*(_BYTE *)v7 & 0x1Fu) >= 7
        && (*(_QWORD *)((_BYTE *)v7 + 1) & 0xFFFFFFLL) == 0xC45DD8 )
      {
        break;
      }
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  *(_QWORD *)a2 = *(_QWORD *)((char *)v7 + 1);
  return 1;
}
