__int16 __fastcall HalpIommuConvertPciBusMasterDescriptorToDeviceId(__int64 a1, char a2, __int64 a3)
{
  __int16 result; // ax
  __int16 v4; // ax

  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)a3 = 1;
  result = *(_WORD *)(a1 + 4);
  *(_WORD *)(a3 + 8) = result;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v4 = *(_WORD *)(a3 + 10);
      *(_WORD *)(a3 + 12) = *(_BYTE *)(a1 + 10) & 7 | (8
                                                     * ((32 * *(unsigned __int8 *)(a1 + 8)) | *(_BYTE *)(a1 + 9) & 0x1F));
      result = v4 & 0xFFFC;
      *(_WORD *)(a3 + 10) = result | a2 & 3;
      return result;
    }
    if ( *(_DWORD *)a1 == 2 )
    {
      result = *(_BYTE *)(a1 + 10) & 7;
      *(_WORD *)(a3 + 12) = result | (8 * ((32 * *(unsigned __int8 *)(a1 + 8)) | *(_BYTE *)(a1 + 9) & 0x1F));
      return result;
    }
  }
  *(_DWORD *)a3 = 0;
  return result;
}
