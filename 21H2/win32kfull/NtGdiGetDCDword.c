/*
 * XREFs of NtGdiGetDCDword @ 0x1C00FA870
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C028B274 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetDCDword(HDC a1, int a2, _DWORD *a3)
{
  unsigned int v5; // esi
  int FontLanguageInfo; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  char v14; // al
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 1;
  FontLanguageInfo = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  v13 = v12 - 1;
                  if ( v13 )
                  {
                    if ( v13 == 1 )
                      FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 104LL);
                    else
                      v5 = 0;
                  }
                  else
                  {
                    LOBYTE(FontLanguageInfo) = *(_DWORD *)(v16[0] + 32LL) == 1;
                  }
                }
                else
                {
                  FontLanguageInfo = dwGetFontLanguageInfo((struct XDCOBJ *)v16);
                }
              }
              else
              {
                FontLanguageInfo = *(_DWORD *)(v16[0] + 104LL);
              }
            }
            else
            {
              v14 = *(_DWORD *)(v16[0] + 248LL) & 4;
              if ( (*(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 108LL) & 1) != 0 )
                FontLanguageInfo = 2 - (v14 != 0);
              else
                FontLanguageInfo = (v14 != 0) + 1;
            }
          }
          else
          {
            FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 288LL);
          }
        }
        else
        {
          FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 284LL);
        }
      }
      else
      {
        FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 352LL);
      }
    }
    else
    {
      FontLanguageInfo = ((*(_DWORD *)(v16[0] + 72LL) >> 13) & 1) == 0;
    }
    if ( v5 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = FontLanguageInfo;
    }
  }
  else
  {
    v5 = 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v5;
}
