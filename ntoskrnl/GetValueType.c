/*
 * XREFs of GetValueType @ 0x1409D18F8
 * Callers:
 *     LocalGetRelativeAttributeForString @ 0x1409D2214 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 */

__int64 __fastcall GetValueType(wchar_t *Str1, _QWORD *a2, __int16 *a3)
{
  unsigned int v3; // ebx
  __int16 v7; // ax

  v3 = 0;
  if ( !*Str1 || !Str1[1] )
    return 1336;
  if ( !wcsnicmp(Str1, L"TI", 2uLL) )
  {
    v7 = 1;
LABEL_15:
    *a3 = v7;
    goto LABEL_16;
  }
  if ( wcsnicmp(Str1, L"TU", 2uLL) )
  {
    if ( !wcsnicmp(Str1, L"TD", 2uLL) )
    {
      v7 = 5;
      goto LABEL_15;
    }
    if ( !wcsnicmp(Str1, L"TS", 2uLL) )
    {
      v7 = 3;
      goto LABEL_15;
    }
    if ( !wcsnicmp(Str1, L"TX", 2uLL) )
    {
      v7 = 16;
      goto LABEL_15;
    }
    if ( !wcsnicmp(Str1, L"TB", 2uLL) )
    {
      v7 = 6;
      goto LABEL_15;
    }
    return 1336;
  }
  *a3 = 2;
LABEL_16:
  *a2 = Str1 + 2;
  return v3;
}
