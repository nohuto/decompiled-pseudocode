/*
 * XREFs of xxxPSMTextOut @ 0x1C0244494
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00F268C (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0236C78 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetTextColor @ 0x1C0013F70 (GreGetTextColor.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetTextExtentW @ 0x1C010FBEC (GreGetTextExtentW.c)
 *     ?GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0112400 (-GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     GreExtTextOutW @ 0x1C0113604 (GreExtTextOutW.c)
 *     GreSetBkColor @ 0x1C0113964 (GreSetBkColor.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     xxxClientPSMTextOut @ 0x1C0215E88 (xxxClientPSMTextOut.c)
 *     CALL_LPK @ 0x1C0228CCC (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C0250138 (GetPrefixCount.c)
 */

void __fastcall xxxPSMTextOut(
        Gre::Base *a1,
        unsigned int a2,
        unsigned int a3,
        const WCHAR *a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int16 *v6; // rsi
  int v7; // r12d
  struct tagTHREADINFO *v12; // rax
  int PrefixCount; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  int TextMetricsW; // ebx
  int v17; // ebx
  unsigned int v18; // edi
  int TextColor; // eax
  int v20; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-90h]
  _OWORD v24[5]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v25[4]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = (unsigned __int16 *)&unk_1C0362A00;
  v7 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  if ( (unsigned int)CALL_LPK((__int64)v12) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a4);
    xxxClientPSMTextOut(a1, a2, a3, (char **)&DestinationString, a5, a6);
  }
  else if ( a5 < 0xFF || (v6 = (unsigned __int16 *)Win32AllocPoolZInit(2LL * (int)(a5 + 1), 1953657685LL)) != 0LL )
  {
    PrefixCount = GetPrefixCount(a4, a5, v6, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutW((__int64)a1, a2, a3, 0, 0LL, (__int64)v6, a5 - HIWORD(PrefixCount));
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      memset_0(v24, 0, 0x44uLL);
      v15 = SGDGetSessionState(v14);
      EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v22, *(struct Gre::Full::SESSION_GLOBALS **)(v15 + 32));
      TextMetricsW = GrepGetTextMetricsW((HDC)a1, (struct _TMW_INTERNAL *)v24, 1027);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v22);
      v22[0] = v24[0];
      v23 = v24[2];
      if ( TextMetricsW )
      {
        v17 = v23;
        v7 = DWORD1(v22[0]);
      }
      else
      {
        v17 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW((HDC)a1, v6, (unsigned __int16)PrefixCount, (struct tagSIZE *)&DestinationString);
        a2 += *(_DWORD *)&DestinationString.Length - v17;
      }
      GreGetTextExtentW((HDC)a1, &v6[(unsigned __int16)PrefixCount], 1u, (struct tagSIZE *)&DestinationString);
      v18 = v7 + a3 + 1;
      v25[0] = a2;
      v25[1] = v18;
      v25[3] = v18 + 1;
      v25[2] = a2 + DestinationString.Length - v17 / 2;
      TextColor = GreGetTextColor((HDC)a1);
      v20 = GreSetBkColor((HDC)a1, TextColor);
      GreExtTextOutW((__int64)a1, a2, v18, 2u, (__int64)v25, (__int64)&word_1C03142AC, 0);
      GreSetBkColor((HDC)a1, v20);
    }
    if ( v6 != (unsigned __int16 *)&unk_1C0362A00 )
      Win32FreePool(v6);
  }
}
