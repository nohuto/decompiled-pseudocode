/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x14079F6F0
 * Callers:
 *     RtlUnicodeToOemN @ 0x14079F690 (RtlUnicodeToOemN.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1407A3750 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  NTSTATUS v6; // ebx
  ULONG v7; // r11d
  PCH v8; // r10
  ULONG v9; // edx
  ULONG v10; // eax
  _BYTE *v11; // rdi
  PWCH v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _WORD *WideCharTable; // r14
  int v17; // edi
  PWCH v18; // r8
  __int64 v19; // rax
  __int16 v20; // si
  unsigned int v21; // eax
  ULONG *v22; // r8
  NTSTATUS v23; // eax
  char v24; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = MaxBytesInCustomCPString;
  v8 = CustomCPString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    v22 = (ULONG *)&v24;
    if ( BytesInCustomCPString )
      v22 = BytesInCustomCPString;
    if ( BytesInUnicodeString )
    {
      v23 = RtlUnicodeToUTF8N(CustomCPString, v7, v22, UnicodeString, BytesInUnicodeString);
    }
    else
    {
      *v22 = 0;
      v23 = 0;
    }
    if ( v23 == -1073741789 )
      return -2147483643;
    return v6;
  }
  else
  {
    v9 = BytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      WideCharTable = CustomCP->WideCharTable;
      v17 = (int)v8;
      if ( v9 )
      {
        v18 = UnicodeString;
        do
        {
          if ( !v7 )
            break;
          v19 = *v18++;
          v20 = WideCharTable[v19];
          if ( HIBYTE(v20) )
          {
            v21 = v7--;
            if ( v21 < 2 )
              break;
            *v8++ = HIBYTE(v20);
          }
          *v8 = v20;
          --v7;
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = (_DWORD)v8 - v17;
    }
    else
    {
      v10 = MaxBytesInCustomCPString;
      if ( v9 < MaxBytesInCustomCPString )
        v10 = BytesInUnicodeString >> 1;
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = v10;
      v11 = CustomCP->WideCharTable;
      if ( v10 )
      {
        v12 = UnicodeString;
        v13 = v10;
        do
        {
          v14 = *v12++;
          *v8++ = v11[v14];
          --v13;
        }
        while ( v13 );
      }
    }
    return v7 < v9 ? 0x80000005 : 0;
  }
}
