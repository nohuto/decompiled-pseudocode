/*
 * XREFs of DrvDbSplitDeviceIdDriverInfMatch @ 0x140878AAC
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x14087867C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A69D68 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140245AC0 (RtlStringCchCopyNExW.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     wcstol @ 0x1403D630C (wcstol.c)
 */

__int64 __fastcall DrvDbSplitDeviceIdDriverInfMatch(STRSAFE_PCNZWCH pszSrc, wchar_t *a2, unsigned int a3, __int64 a4)
{
  NTSTATUS v4; // r12d
  unsigned int v6; // ebp
  char v8; // r13
  wchar_t *v9; // rax
  __int64 v10; // rsi
  const wchar_t *v11; // rdi
  wchar_t *v12; // rax
  wchar_t *v13; // r14
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v17; // eax
  __int64 v18; // rax

  v4 = 0;
  v6 = a3;
  v8 = -1;
  v9 = wcschr(pszSrc, 0x5Cu);
  if ( v9 )
  {
    v10 = v9 - pszSrc;
    if ( !a4 )
      goto LABEL_10;
    v11 = v9 + 1;
    v12 = wcschr(v9 + 1, 0x5Cu);
    v13 = v12;
    if ( v12 )
    {
      *v12 = 0;
      v17 = wcstol(v12 + 1, 0LL, 16);
      if ( v17 > 0xFF )
        LOBYTE(v17) = -1;
      v8 = v17;
    }
    if ( *v11 == 42 )
    {
      *(_BYTE *)a4 = 3;
      if ( v11[1] )
      {
        LOWORD(v15) = wcstol(v11 + 1, 0LL, 16);
LABEL_8:
        *(_WORD *)(a4 + 2) = v15;
        v6 = a3;
        if ( v13 )
          *v13 = 92;
        goto LABEL_10;
      }
    }
    else
    {
      v14 = wcstol(v11, 0LL, 16);
      if ( v14 )
      {
        v15 = v14 - 1;
        *(_BYTE *)a4 = 2;
        if ( v15 > 0xFFFF )
          LOWORD(v15) = -1;
        goto LABEL_8;
      }
      *(_BYTE *)a4 = 1;
    }
    LOWORD(v15) = 0;
    goto LABEL_8;
  }
  v18 = -1LL;
  do
    ++v18;
  while ( pszSrc[v18] );
  LODWORD(v10) = v18;
  if ( a4 )
  {
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
LABEL_10:
  if ( !a2 || (v4 = RtlStringCchCopyNExW(a2, v6, pszSrc, (unsigned int)v10, 0LL, 0LL, 0x900u), v4 >= 0) )
  {
    if ( a4 )
      *(_BYTE *)(a4 + 1) = v8;
  }
  return (unsigned int)v4;
}
