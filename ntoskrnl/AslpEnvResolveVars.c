/*
 * XREFs of AslpEnvResolveVars @ 0x140A54B80
 * Callers:
 *     AslEnvExpandStrings2 @ 0x140A54280 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCatW @ 0x140246580 (RtlStringCchCatW.c)
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        NTSTRSAFE_PCWSTR pszSrc,
        unsigned int a2,
        wchar_t *a3,
        unsigned int a4,
        __int16 a5,
        __int16 a6,
        unsigned int *a7)
{
  size_t v7; // r13
  int v9; // ebx
  int v10; // esi
  unsigned int v11; // ebp
  __int64 v12; // r12
  const wchar_t *v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int16 v17; // cx
  unsigned __int64 i; // rdi
  size_t v19; // rdx
  wchar_t *v20; // rcx
  wchar_t v21; // ax
  wchar_t *v22; // rax
  signed int v23; // eax
  NTSTATUS v24; // ebx

  v7 = a4;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  v14 = pszSrc;
  while ( !v9 )
  {
    v15 = dword_140C095B0[6 * v12];
    if ( a2 > v15 )
    {
      if ( !wcsnicmp(v14, off_140C095A0[3 * v12], v15) )
      {
        v16 = 3 * v12;
        v11 = a2 + dword_140C095B4[6 * v12] - dword_140C095B0[6 * v12];
        if ( v11 > (unsigned int)v7 )
        {
          v24 = -1073741789;
          goto LABEL_44;
        }
        if ( !v12 )
        {
          v17 = a5;
          for ( i = 0LL; i < 16; i += 2LL )
          {
            if ( *(_WORD *)((char *)&unk_140C09520 + i * 8) == v17 && *(_WORD *)((char *)&unk_140C09522 + i * 8) == a6 )
            {
              if ( v7 - 1 > 0x7FFFFFFE )
              {
                v23 = -1073741811;
                if ( (_DWORD)v7 )
                {
                  *a3 = 0;
                  v24 = -1073741811;
                  goto LABEL_38;
                }
              }
              else
              {
                v19 = v7;
                v20 = a3;
                do
                {
                  if ( !(2147483646 - v7 + v19) )
                    break;
                  v21 = *(wchar_t *)((char *)v20 + (char *)L"%systemroot%" - (char *)a3);
                  if ( !v21 )
                    break;
                  *v20++ = v21;
                  --v19;
                }
                while ( v19 );
                v22 = v20 - 1;
                if ( v19 )
                  v22 = v20;
                *v22 = 0;
                v23 = v19 != 0 ? 0 : 0x80000005;
              }
              v24 = v23;
              if ( v23 < 0 )
                goto LABEL_38;
              v24 = RtlStringCchCatW(a3, v7, (&off_140C09528)[i]);
              if ( v24 < 0 )
                goto LABEL_38;
              v24 = RtlStringCchCatW(a3, v7, &pszSrc[dword_140C095B0[0]]);
              if ( v24 < 0 )
                goto LABEL_38;
              v17 = a5;
              v10 = 1;
            }
          }
          if ( v10 )
            goto LABEL_29;
          AslLogCallPrintf(1LL);
          v16 = 0LL;
          goto LABEL_27;
        }
        if ( !v10 )
        {
LABEL_27:
          v24 = RtlStringCchCopyW(a3, v7, (&off_140C095A8)[v16]);
          if ( v24 < 0 )
            goto LABEL_38;
          v24 = RtlStringCchCatW(a3, v7, &pszSrc[dword_140C095B0[6 * v12]]);
          if ( v24 < 0 )
            goto LABEL_38;
        }
LABEL_29:
        v9 = 1;
      }
      v14 = pszSrc;
    }
    if ( (unsigned __int64)++v12 >= 4 )
    {
      if ( !v9 )
      {
        v11 = a2;
        if ( a2 > (unsigned int)v7 )
        {
          v24 = -1073741789;
          *a7 = a2;
          return (unsigned int)v24;
        }
        v24 = RtlStringCchCopyW(a3, v7, v14);
        if ( v24 < 0 )
        {
LABEL_38:
          AslLogCallPrintf(1LL);
          return (unsigned int)v24;
        }
      }
      break;
    }
  }
  v24 = 0;
LABEL_44:
  *a7 = v11;
  return (unsigned int)v24;
}
