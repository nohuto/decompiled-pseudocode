/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x1407A3C10
 * Callers:
 *     RtlOemToUnicodeN @ 0x1407A3940 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeN @ 0x1407A3B40 (RtlMultiByteToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x14075A870 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlCustomCPToUnicodeN(
        PCPTABLEINFO CustomCP,
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCH CustomCPString,
        ULONG BytesInCustomCPString)
{
  NTSTATUS v6; // ebx
  PWCH v8; // r10
  ULONG v10; // edx
  ULONG v11; // r11d
  ULONG v12; // ecx
  unsigned __int16 *MultiByteTable; // rdi
  PCH v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  ULONG *v18; // r8
  NTSTATUS v19; // eax
  unsigned __int16 *DBCSOffsets; // r14
  int v21; // esi
  PCH v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v8 = UnicodeString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    v18 = (ULONG *)&v25;
    if ( BytesInUnicodeString )
      v18 = BytesInUnicodeString;
    if ( BytesInCustomCPString )
    {
      v19 = RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v18, CustomCPString, BytesInCustomCPString);
    }
    else
    {
      *v18 = 0;
      v19 = 0;
    }
    if ( v19 == -1073741789 )
      return -2147483643;
    return v6;
  }
  else
  {
    v10 = BytesInCustomCPString;
    v11 = MaxBytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      DBCSOffsets = CustomCP->DBCSOffsets;
      v21 = (int)v8;
      if ( v11 )
      {
        v22 = CustomCPString;
        while ( v10 )
        {
          v23 = (unsigned __int8)*v22;
          --v11;
          --v10;
          v24 = DBCSOffsets[v23];
          if ( (_WORD)v24 )
          {
            if ( !v10 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++v22;
            --v10;
            *v8 = DBCSOffsets[v24 + (unsigned __int8)*v22];
          }
          else
          {
            *v8 = CustomCP->MultiByteTable[v23];
          }
          ++v8;
          ++v22;
          if ( !v11 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v8 - v21;
    }
    else
    {
      v12 = BytesInCustomCPString;
      if ( v11 < BytesInCustomCPString )
        v12 = v11;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v12;
      MultiByteTable = CustomCP->MultiByteTable;
      if ( v12 )
      {
        v14 = CustomCPString;
        v15 = v12;
        do
        {
          v16 = (unsigned __int8)*v14++;
          *v8++ = MultiByteTable[v16];
          --v15;
        }
        while ( v15 );
      }
    }
    return v11 < v10 ? 0x80000005 : 0;
  }
}
