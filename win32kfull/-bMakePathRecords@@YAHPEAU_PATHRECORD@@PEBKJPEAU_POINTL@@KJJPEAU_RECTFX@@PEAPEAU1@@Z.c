/*
 * XREFs of ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C000C4D8
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1C000BDA0 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     LongLongToLong @ 0x1C0013C0C (LongLongToLong.c)
 */

__int64 __fastcall bMakePathRecords(
        struct _PATHRECORD *a1,
        const unsigned int *a2,
        int a3,
        struct _POINTL *a4,
        unsigned int a5,
        int a6,
        int a7,
        LONG *plResult,
        struct _PATHRECORD **a9)
{
  int v10; // r9d
  __int64 v11; // r8
  const unsigned int *v12; // rdx
  __int64 v13; // rdi
  int v14; // ebx
  struct _PATHRECORD *v15; // r10
  __int64 v16; // rbp
  __int64 v17; // r14
  struct _POINTL *v19; // r11
  struct _PATHRECORD *v20; // rsi
  int x; // ecx
  LONG v22; // eax
  LONG v23; // eax
  int y; // ecx
  int v25; // eax
  LONG v26; // eax
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  unsigned int v30; // r11d

  *((_QWORD *)a1 + 1) = 0LL;
  v10 = *a2;
  LODWORD(v11) = 0x7FFFFFFF;
  v12 = a2 + 1;
  LODWORD(v13) = 0x80000000;
  v14 = a3 - v10;
  v15 = a1;
  LODWORD(v16) = 0x7FFFFFFF;
  LODWORD(v17) = 0x80000000;
  if ( v14 >= 0 )
  {
    while ( v10 >= 2 )
    {
      v19 = a4;
      v20 = v15;
      *((_DWORD *)v15 + 5) = v10;
      *((_DWORD *)v15 + 4) = 3;
      do
      {
        x = v19->x;
        v22 = v19->x;
        if ( v19->x >= (int)v11 )
          v22 = v11;
        v11 = v22;
        v23 = v19->x;
        if ( x <= (int)v13 )
          v23 = v13;
        v13 = v23;
        *((_DWORD *)v15 + 6) = x + a6;
        y = v19->y;
        v25 = y;
        if ( y >= (int)v16 )
          v25 = v16;
        v16 = v25;
        v26 = v19->y;
        if ( y <= (int)v17 )
          v26 = v17;
        ++v19;
        v17 = v26;
        *((_DWORD *)v15 + 7) = y + a7;
        v15 = (struct _PATHRECORD *)((char *)v15 + 8);
        --v10;
      }
      while ( v10 );
      a4 = v19;
      if ( !--a5 )
      {
        *(_QWORD *)v20 = 0LL;
        *a9 = v20;
        if ( LongLongToLong(v11 + a6, plResult) < 0
          || LongLongToLong(v13 + a6, (LONG *)(v27 + 8)) < 0
          || LongLongToLong(a7 + v16, (LONG *)(v28 + 4)) < 0
          || LongLongToLong(a7 + v17, (LONG *)(v29 + 12)) < 0 )
        {
          v30 = 0;
        }
        if ( v14 )
          return 0;
        return v30;
      }
      v15 = (struct _PATHRECORD *)((char *)v15 + 24);
      *((_QWORD *)v15 + 1) = v20;
      *(_QWORD *)v20 = v15;
      v10 = *v12++;
      v14 -= v10;
      if ( v14 < 0 )
        return 0;
    }
  }
  return 0;
}
