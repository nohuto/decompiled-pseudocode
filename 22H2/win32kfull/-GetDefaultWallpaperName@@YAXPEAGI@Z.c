/*
 * XREFs of ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C0222B28
 * Callers:
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012EB48 (LoadWallpaperFilenameFromRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall GetDefaultWallpaperName(char *a1, unsigned int a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  char *v6; // rcx
  __int16 v7; // ax
  __int16 v8; // ax
  char *v9; // rax
  signed int v10; // ecx
  __int64 v11; // r9
  char *v12; // rax
  __int64 v13; // rdx
  unsigned __int16 *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  char *v17; // rdx
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // rax
  int v20; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v20 = 0;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)&v20);
  v4 = v3 - 1;
  if ( v20 == 1 )
  {
    if ( v4 <= 0x7FFFFFFE )
    {
      v5 = (unsigned int)v3;
      v6 = a1;
      do
      {
        if ( !(2147483646 - v3 + v5) )
          break;
        v7 = *(_WORD *)&v6[(char *)L"winnt" - a1];
        if ( !v7 )
          break;
        *(_WORD *)v6 = v7;
        v6 += 2;
        --v5;
      }
      while ( v5 );
LABEL_13:
      v9 = v6 - 2;
      if ( v5 )
        v9 = v6;
      *(_WORD *)v9 = 0;
      goto LABEL_18;
    }
  }
  else if ( v4 <= 0x7FFFFFFE )
  {
    v5 = v3;
    v6 = a1;
    do
    {
      if ( !(2147483646 - v3 + v5) )
        break;
      v8 = *(_WORD *)&v6[(char *)L"lanmannt" - a1];
      if ( !v8 )
        break;
      *(_WORD *)v6 = v8;
      v6 += 2;
      --v5;
    }
    while ( v5 );
    goto LABEL_13;
  }
  if ( (_DWORD)v3 )
    *(_WORD *)a1 = 0;
LABEL_18:
  if ( *(unsigned __int8 *)(gpsi + 7002LL) * (unsigned int)*(unsigned __int8 *)(gpsi + 7003LL) > 4 )
  {
    v10 = 0;
    if ( (unsigned __int64)(v3 - 1) > 0x7FFFFFFE )
      v10 = -1073741811;
    if ( v10 < 0 )
      goto LABEL_27;
    v11 = v3;
    v12 = a1;
    if ( (_DWORD)v3 )
    {
      do
      {
        if ( !*(_WORD *)v12 )
          break;
        v12 += 2;
        --v11;
      }
      while ( v11 );
    }
    v10 = v11 == 0 ? 0xC000000D : 0;
    if ( v11 )
      v13 = v3 - v11;
    else
LABEL_27:
      v13 = 0LL;
    if ( v10 >= 0 )
    {
      v14 = (unsigned __int16 *)&a1[2 * v13];
      v15 = v3 - v13;
      if ( v3 != v13 )
      {
        v16 = 2147483646LL;
        v17 = (char *)((char *)L"256" - (char *)v14);
        do
        {
          if ( !v16 )
            break;
          v18 = *(unsigned __int16 *)((char *)v14 + (_QWORD)v17);
          if ( !v18 )
            break;
          *v14 = v18;
          --v16;
          ++v14;
          --v15;
        }
        while ( v15 );
      }
      v19 = v14 - 1;
      if ( v15 )
        v19 = v14;
      *v19 = 0;
    }
  }
}
