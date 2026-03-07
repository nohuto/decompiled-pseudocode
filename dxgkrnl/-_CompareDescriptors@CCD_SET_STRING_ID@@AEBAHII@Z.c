int __fastcall CCD_SET_STRING_ID::_CompareDescriptors(CCD_SET_STRING_ID *this, unsigned int a2)
{
  __int64 v2; // rbx
  CCD_SET_STRING_ID *v3; // r9
  unsigned int v4; // r11d
  unsigned __int16 DescriptorLength; // ax
  __int64 v6; // r9
  size_t v7; // r10
  __int64 v8; // r11

  v2 = a2;
  CCD_SET_STRING_ID::_GetDescriptorLength(this, a2);
  DescriptorLength = CCD_SET_STRING_ID::_GetDescriptorLength(v3, v4);
  if ( (unsigned __int16)v7 < DescriptorLength )
    return -1;
  if ( (unsigned __int16)v7 <= DescriptorLength )
    return memcmp(
             (const void *)(*(_QWORD *)(v6 + 16) + *(unsigned __int16 *)(*(_QWORD *)(v6 + 24) + 8 * v2)),
             (const void *)(*(_QWORD *)(v6 + 16) + *(unsigned __int16 *)(*(_QWORD *)(v6 + 24) + 8 * v8)),
             v7);
  return 1;
}
