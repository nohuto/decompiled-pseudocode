/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x140759E60
 * Callers:
 *     RtlUnicodeToOemN @ 0x1407592A0 (RtlUnicodeToOemN.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x140759F40 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG *v6; // r11
  ULONG v7; // esi
  PCH v8; // r10
  ULONG v9; // edi
  ULONG v10; // edx
  _BYTE *v11; // r9
  PWCH v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  NTSTATUS result; // eax
  NTSTATUS v16; // ebx
  _WORD *WideCharTable; // rbx
  int v18; // r9d
  PWCH v19; // rdx
  __int64 v20; // rax
  __int16 v21; // r8
  unsigned int v22; // eax
  char v23; // [rsp+40h] [rbp+8h] BYREF

  v6 = BytesInCustomCPString;
  v7 = MaxBytesInCustomCPString;
  v8 = CustomCPString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    if ( !BytesInCustomCPString )
      v6 = (ULONG *)&v23;
    v16 = 0;
    if ( BytesInUnicodeString )
    {
      if ( RtlUnicodeToUTF8N(CustomCPString, MaxBytesInCustomCPString, v6, UnicodeString, BytesInUnicodeString) == -1073741789 )
        return -2147483643;
    }
    else
    {
      *v6 = 0;
    }
    return v16;
  }
  else
  {
    v9 = BytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      WideCharTable = CustomCP->WideCharTable;
      v18 = (int)CustomCPString;
      if ( v9 )
      {
        v19 = UnicodeString;
        do
        {
          if ( !v7 )
            break;
          v20 = *v19++;
          v21 = WideCharTable[v20];
          if ( HIBYTE(v21) )
          {
            v22 = v7--;
            if ( v22 < 2 )
              break;
            *v8++ = HIBYTE(v21);
          }
          *v8 = v21;
          --v7;
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      if ( v6 )
        *v6 = (_DWORD)v8 - v18;
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
          v14 = *v12;
          ++v8;
          ++v12;
          *(v8 - 1) = v11[v14];
          --v13;
        }
        while ( v13 );
      }
    }
    result = -2147483643;
    if ( v9 <= v7 )
      return 0;
  }
  return result;
}
