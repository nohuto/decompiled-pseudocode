/*
 * XREFs of ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00BA144
 * Callers:
 *     FinishStockFontInit @ 0x1C00B9D70 (FinishStockFontInit.c)
 * Callees:
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C00BA3C4 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00BA474 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00BA544 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     bDeleteFont @ 0x1C00BA960 (bDeleteFont.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     bInitOneStockFontInternal @ 0x1C03B6790 (bInitOneStockFontInternal.c)
 */

void __fastcall FinishStockFontInitInternal(const unsigned __int16 *a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned __int16 *v5; // rsi
  unsigned __int16 *v6; // rdi
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  unsigned __int64 v9; // rdx
  char *v10; // r8
  unsigned int v11; // r9d
  __int64 v12; // rbx
  int *v13; // r14
  unsigned int i; // r12d
  unsigned int v15; // r13d
  HANDLE *v16; // r15
  unsigned __int16 *v17; // rcx
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rbp
  unsigned int v22; // edi
  HANDLE *v23; // rbx
  __int64 v24; // [rsp+28h] [rbp-70h]
  __int128 v25; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+40h] [rbp-58h]
  PCWSTR SourceString[3]; // [rsp+48h] [rbp-50h]

  SourceString[0] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  SourceString[1] = a1;
  SourceString[2] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize";
  v25 = 0LL;
  v3 = 0;
  v26 = 0LL;
  v4 = 0LL;
  do
  {
    if ( !(unsigned int)bOpenKey(SourceString[v4], (PHANDLE)&v25 + (int)v3) )
      *(_QWORD *)((char *)&v25 + v4 * 8) = 0LL;
    ++v3;
    ++v4;
  }
  while ( v3 < 3 );
  v5 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v6 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v8 = Gre::Base::Globals(v7);
  if ( a2 )
    v12 = *((_QWORD *)v8 + 397);
  else
    v12 = *((_QWORD *)v8 + 396);
  v24 = v12;
  v13 = (int *)&unk_1C030B3DC;
  for ( i = 0; i < 3; ++i )
  {
    v15 = 0;
    v16 = (HANDLE *)&v25;
    while ( 1 )
    {
      if ( *v16 && v5 && v6 && bGetRegString(*v16, *(const unsigned __int16 **)(v13 - 3), v5, v11) )
      {
        v9 = 260LL;
        v10 = (char *)((char *)L"\\SystemRoot\\Fonts\\" - (char *)v6);
        v17 = v6;
        do
        {
          if ( v9 == -2147483386LL )
            break;
          v18 = *(unsigned __int16 *)((char *)v17 + (_QWORD)v10);
          if ( !v18 )
            break;
          *v17++ = v18;
          --v9;
        }
        while ( v9 );
        v19 = v17 - 1;
        if ( v9 )
          v19 = v17;
        *v19 = 0;
        if ( v9 )
        {
          if ( StringCchCatW(v6, v9, v5) >= 0 )
          {
            LOBYTE(v9) = 10;
            v20 = *(_QWORD *)(v12 + 8LL * *v13);
            v21 = v20 & -(__int64)((unsigned int)HmgValidHandle(v20, v9) != 0);
            if ( (unsigned int)bInitOneStockFontInternal(v6) )
              break;
          }
        }
      }
      ++v15;
      ++v16;
      if ( v15 >= 3 )
        goto LABEL_24;
      v12 = v24;
    }
    if ( v21 )
      bDeleteFont(v21, 1LL);
LABEL_24:
    v12 = v24;
    v13 += 4;
  }
  if ( v5 )
    FreeTmpBuffer(v5, v9, v10);
  if ( v6 )
    FreeTmpBuffer(v6, v9, v10);
  v22 = 0;
  v23 = (HANDLE *)&v25;
  do
  {
    if ( *v23 )
      ZwClose(*v23);
    ++v22;
    ++v23;
  }
  while ( v22 < 3 );
}
