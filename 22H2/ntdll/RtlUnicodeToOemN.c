/*
 * XREFs of RtlUnicodeToOemN @ 0x180062530
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180062170 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB240 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18005BF00 (RtlUnicodeToUTF8N.c)
 *     RtlpIsUtf8Process @ 0x18006277C (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlUnicodeToOemN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // edx
  unsigned int *v6; // r8
  unsigned int *v7; // r9
  _BYTE *v8; // r10
  unsigned int v9; // r11d
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int *v17; // rax
  int v18; // eax
  int v19; // edi
  __int64 v20; // r14
  __int64 v21; // rax
  __int16 v22; // si
  unsigned int v23; // eax
  char v24; // [rsp+30h] [rbp-18h] BYREF

  LOBYTE(a1) = 1;
  v10 = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(a1, a2, a3) )
  {
    v17 = (unsigned int *)&v24;
    if ( v6 )
      v17 = v6;
    if ( a5 )
    {
      v18 = RtlUnicodeToUTF8N(v8, v5, v17, v7, a5);
    }
    else
    {
      *v17 = 0;
      v18 = 0;
    }
    if ( v18 == -1073741789 )
      return (unsigned int)-2147483643;
    return v10;
  }
  else
  {
    v11 = a5 >> 1;
    if ( NlsMbOemCodePageTag )
    {
      v19 = (int)v8;
      if ( v11 )
      {
        v20 = NlsUnicodeToMbOemData;
        do
        {
          if ( !v9 )
            break;
          v21 = *(unsigned __int16 *)v7;
          v7 = (unsigned int *)((char *)v7 + 2);
          v22 = *(_WORD *)(v20 + 2 * v21);
          if ( HIBYTE(v22) )
          {
            v23 = v9--;
            if ( v23 < 2 )
              break;
            *v8++ = HIBYTE(v22);
          }
          *v8 = v22;
          --v9;
          ++v8;
          --v11;
        }
        while ( v11 );
      }
      if ( v6 )
        *v6 = (_DWORD)v8 - v19;
    }
    else
    {
      v12 = v9;
      if ( v11 < v9 )
        v12 = a5 >> 1;
      if ( v6 )
        *v6 = v12;
      v13 = NlsUnicodeToOemData;
      if ( v12 )
      {
        v14 = v12;
        do
        {
          v15 = *(unsigned __int16 *)v7;
          v7 = (unsigned int *)((char *)v7 + 2);
          *v8++ = *(_BYTE *)(v15 + v13);
          --v14;
        }
        while ( v14 );
      }
    }
    return v9 < v11 ? 0x80000005 : 0;
  }
}
