/*
 * XREFs of NtGdiGetDCDword @ 0x1C00C5BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0290B74 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetDCDword(HDC a1, int a2, _DWORD *a3)
{
  unsigned int v5; // edi
  int FontLanguageInfo; // ebx
  int v8; // eax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 1;
  FontLanguageInfo = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    if ( a2 == 7 )
    {
      LOBYTE(FontLanguageInfo) = *(_DWORD *)(v9[0] + 32LL) == 1;
    }
    else
    {
      switch ( a2 )
      {
        case 0:
          FontLanguageInfo = ((*(_DWORD *)(v9[0] + 72LL) >> 13) & 1) == 0;
          break;
        case 1:
          FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 352LL);
          break;
        case 2:
          FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 284LL);
          break;
        case 3:
          FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 288LL);
          break;
        case 4:
          v8 = *(_DWORD *)(v9[0] + 248LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 108LL) & 1) != 0 )
          {
            FontLanguageInfo = 2 - ((v8 & 4) != 0);
          }
          else
          {
            LOBYTE(FontLanguageInfo) = (v8 & 4) != 0;
            ++FontLanguageInfo;
          }
          break;
        case 5:
          FontLanguageInfo = *(_DWORD *)(v9[0] + 104LL);
          break;
        case 6:
          FontLanguageInfo = dwGetFontLanguageInfo((struct XDCOBJ *)v9);
          break;
        case 8:
          FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 104LL);
          break;
        default:
          v5 = 0;
          break;
      }
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
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v5;
}
