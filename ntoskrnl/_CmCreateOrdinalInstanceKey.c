/*
 * XREFs of _CmCreateOrdinalInstanceKey @ 0x14087B610
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406C8A54 (_CmGetDeviceSoftwareKey.c)
 * Callees:
 *     wcstoul @ 0x1403D6370 (wcstoul.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     _ultow_s @ 0x1403D8C70 (_ultow_s.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _PnpCtxRegCreateKey @ 0x140687FD0 (_PnpCtxRegCreateKey.c)
 */

__int64 __fastcall CmCreateOrdinalInstanceKey(__int64 a1, __int64 a2, wchar_t *a3)
{
  unsigned int v6; // ebp
  unsigned int v7; // r15d
  unsigned int i; // edi
  wchar_t v9; // ax
  int v10; // esi
  wchar_t *v11; // rdx
  bool v12; // zf
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int Key; // eax
  __int64 v21; // rdx
  int v22; // eax

  v6 = wcstoul(L"999A", 0LL, 36);
  v7 = wcstoul(L"ZZZZ", 0LL, 36);
  if ( v6 - 1 > 0xFFFFFFFD || v7 - 1 > 0xFFFFFFFD )
  {
    return (unsigned int)-1073741595;
  }
  else
  {
    for ( i = 0; ; i = v6 )
    {
LABEL_4:
      if ( i <= 0x270F )
      {
        if ( swprintf_s(a3, 5uLL, L"%04u", i) < 0 )
          return (unsigned int)-1073741595;
        goto LABEL_6;
      }
      if ( i >= v6 )
        break;
    }
    if ( i > v7 )
      return (unsigned int)-2147483622;
    if ( ultow_s(i, a3, 5uLL, 36) )
      return (unsigned int)-1073741595;
LABEL_6:
    v9 = *a3;
    v10 = 1;
    v11 = a3;
    while ( v9 )
    {
      if ( v9 > 0x61u )
      {
        v13 = v9 - 101;
        v12 = v9 == 101;
      }
      else
      {
        if ( v9 == 97 || v9 == 65 )
        {
LABEL_32:
          v21 = v11 - a3;
          v22 = 3 - v21;
          if ( (_DWORD)v21 != 3 )
          {
            do
            {
              v10 *= 36;
              --v22;
            }
            while ( v22 );
          }
          goto LABEL_22;
        }
        v13 = v9 - 69;
        v12 = v9 == 69;
      }
      if ( v12 )
        goto LABEL_32;
      v14 = v13 - 4;
      if ( !v14 )
        goto LABEL_32;
      v15 = v14 - 6;
      if ( !v15 )
        goto LABEL_32;
      v16 = v15 - 6;
      if ( !v16 )
        goto LABEL_32;
      v17 = v16 - 1;
      if ( !v17 || v17 == 3 )
        goto LABEL_32;
      v9 = *++v11;
    }
    Key = PnpCtxRegCreateKey(a1, a2);
    if ( Key == -1073741444 )
      return (unsigned int)-1073741595;
    if ( Key >= 0 )
    {
      ZwClose(0LL);
LABEL_22:
      i += v10;
      goto LABEL_4;
    }
    return (unsigned int)Key;
  }
}
