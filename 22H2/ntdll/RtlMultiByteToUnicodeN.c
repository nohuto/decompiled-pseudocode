/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x18004BE50
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18004B220 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x1800905C0 (mbstowcs.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800E4FA0 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005A9B0 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeN(_WORD *a1, unsigned int a2, char *a3, unsigned __int8 *a4, unsigned int a5)
{
  _WORD *v5; // r10
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned int v15; // r11d
  __int64 v16; // rax
  __int64 v17; // rdi
  __int16 v18; // ax
  char v19; // [rsp+30h] [rbp-18h] BYREF

  v5 = a1;
  if ( NlsActiveCodePageIsUTF8 )
  {
    v12 = &v19;
    if ( a3 )
      v12 = a3;
    if ( a5 )
      RtlUTF8ToUnicodeN((_DWORD)a1, a2, (_DWORD)v12, (_DWORD)a4, a5);
    else
      *(_DWORD *)v12 = 0;
  }
  else
  {
    v6 = a2 >> 1;
    if ( NlsMbCodePageTag )
    {
      v13 = NlsMbAnsiCodePageTables;
      if ( v6 )
      {
        v14 = NlsAnsiToUnicodeData;
        v15 = a5;
        while ( v15 )
        {
          v16 = *a4;
          --v6;
          --v15;
          v17 = (unsigned __int16)NlsLeadByteInfoTable[v16];
          if ( (_WORD)v17 )
          {
            if ( !v15 )
            {
              *v5 = 0;
              LODWORD(v5) = (_DWORD)v5 + 2;
              break;
            }
            ++a4;
            --v15;
            v18 = *(_WORD *)(v13 + 2 * (v17 + *a4));
          }
          else
          {
            v18 = *(_WORD *)(v14 + 2 * v16);
          }
          *v5 = v18;
          ++a4;
          ++v5;
          if ( !v6 )
            break;
        }
      }
      if ( a3 )
        *(_DWORD *)a3 = (_DWORD)v5 - (_DWORD)a1;
    }
    else
    {
      v7 = a5;
      if ( v6 < a5 )
        v7 = v6;
      if ( a3 )
        *(_DWORD *)a3 = 2 * v7;
      v8 = NlsAnsiToUnicodeData;
      if ( v7 )
      {
        v9 = v7;
        do
        {
          v10 = *a4++;
          *v5++ = *(_WORD *)(v8 + 2 * v10);
          --v9;
        }
        while ( v9 );
      }
    }
  }
  return 0LL;
}
