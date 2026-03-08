/*
 * XREFs of KiDumpParameterImages @ 0x1405680C8
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x140567D34 (KiDisplayBlueScreen.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     RtlStringCbPrintfA @ 0x140380B18 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1405676A8 (KiBugCheckUnicodeToAnsi.c)
 *     KiPcToFileHeader @ 0x140568594 (KiPcToFileHeader.c)
 *     MmLocateUnloadedDriver @ 0x14062A668 (MmLocateUnloadedDriver.c)
 */

void __fastcall KiDumpParameterImages(NTSTRSAFE_PSTR pszDest, const void **a2, unsigned int a3, char a4)
{
  __int64 v7; // rbp
  const void *v8; // rbx
  int v9; // r12d
  const void *v10; // rsi
  __int64 UnloadedDriver; // rax
  __int64 v12; // rdi
  int v13; // ebx
  unsigned __int16 *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  const char *v17; // r9
  char v18; // [rsp+40h] [rbp-D8h]
  _BYTE v19[7]; // [rsp+41h] [rbp-D7h] BYREF
  __int64 v20; // [rsp+48h] [rbp-D0h] BYREF
  char v21[128]; // [rsp+50h] [rbp-C8h] BYREF

  v20 = 0LL;
  v18 = 1;
  v19[0] = 0;
  if ( pszDest )
    *pszDest = 0;
  if ( a3 )
  {
    v7 = a3;
    while ( 1 )
    {
      v8 = *a2;
      v9 = 0;
      v10 = (const void *)KiPcToFileHeader(*a2, &v20, 1LL, v19);
      if ( v10 )
        break;
      UnloadedDriver = MmLocateUnloadedDriver(v8);
      v12 = UnloadedDriver;
      if ( UnloadedDriver )
      {
        v10 = *(const void **)(UnloadedDriver + 16);
        v13 = (_DWORD)v8 - (_DWORD)v10;
        if ( a4 )
        {
          v14 = (unsigned __int16 *)UnloadedDriver;
          goto LABEL_14;
        }
        goto LABEL_15;
      }
LABEL_20:
      ++a2;
      if ( !--v7 )
        return;
    }
    v15 = v20;
    if ( MmIsAddressValidEx(*(_QWORD *)(v20 + 48)) )
    {
      v16 = RtlImageNtHeader(*(_QWORD *)(v15 + 48));
      if ( v16 )
        v9 = *(_DWORD *)(v16 + 8);
    }
    v12 = v15 + 88;
    v13 = (_DWORD)v8 - (_DWORD)v10;
    if ( a4 )
    {
      v14 = (unsigned __int16 *)v12;
LABEL_14:
      KiBugCheckUnicodeToAnsi(v14, v21);
    }
LABEL_15:
    if ( pszDest )
    {
      v17 = "\r\n*";
      if ( !v18 )
        v17 = "*";
      RtlStringCbPrintfA(
        pszDest,
        0x80uLL,
        "%s**  %12s - Address %p base at %p, DateStamp %08lx\r\n",
        v17,
        v21,
        *a2,
        v10,
        v9);
    }
    KiBugCheckDriver = v12;
    KiBugCheckDriverOffset = v13;
    v18 = 0;
    goto LABEL_20;
  }
}
