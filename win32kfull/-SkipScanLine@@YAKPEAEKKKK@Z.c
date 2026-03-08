/*
 * XREFs of ?SkipScanLine@@YAKPEAEKKKK@Z @ 0x1C029877C
 * Callers:
 *     ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x1C029A048 (-vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?StartPixel@@YAPEAEPEAEKK@Z @ 0x1C029885C (-StartPixel@@YAPEAEPEAEKK@Z.c)
 */

__int64 __fastcall SkipScanLine(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int8 *started; // rdx
  unsigned int v8; // r10d
  int v9; // r11d
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx

  started = StartPixel(a1, a2, a4);
  if ( v8 < a3 )
  {
    v10 = (unsigned int)(v9 + 1);
    do
    {
      if ( v9 )
        return v8;
      if ( a4 == (_DWORD)v10 )
      {
        v17 = *started;
        *started = (unsigned __int8)v17 >> 1;
        v15 = v10 & v17;
        if ( (v8 & 7) == 7 )
          goto LABEL_18;
      }
      else
      {
        v11 = a4 - v10 - v10;
        if ( v11 )
        {
          v12 = v11 - v10;
          if ( !v12 )
          {
            v15 = *started;
LABEL_18:
            started += v10;
            goto LABEL_19;
          }
          v13 = v12 - v10;
          if ( v13 )
          {
            v14 = v13 - v10;
            if ( v14 )
            {
              if ( v14 != (_DWORD)v10 )
                return 0LL;
              v15 = *(_DWORD *)started;
              started += 4;
            }
            else
            {
              v15 = *started | (*(unsigned __int16 *)(started + 1) << 8);
              started += 3;
            }
          }
          else
          {
            v15 = *(unsigned __int16 *)started;
            started += 2;
          }
        }
        else
        {
          v16 = *started;
          if ( ((unsigned __int8)v8 & (unsigned __int8)v10) != 0 )
          {
            v15 = v16 & 0xF;
            goto LABEL_18;
          }
          v15 = v16 >> 4;
        }
      }
LABEL_19:
      if ( v15 != a5 )
        v9 = v10;
      v8 += v10;
    }
    while ( v8 < a3 );
  }
  return v8;
}
