/*
 * XREFs of xxxSetNCFonts @ 0x1C00C3874
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00C7060 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C00131E4 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GetCharDimensions @ 0x1C00C40F8 (GetCharDimensions.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00C49DC (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     UserSetFont @ 0x1C00C5854 (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1C00C5A20 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1C00C5A80 (UserSetAltScaleFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00C6CC4 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00C7450 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2)
{
  HDC v3; // r15
  __int64 SessionDpiServerInfo; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r13
  __int64 SessionDpiMetrics; // r14
  __int64 v10; // rsi
  __int64 v11; // rbx
  int CharDimensions; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *DPIMetrics; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // r8d
  __int64 i; // rcx
  struct HLFONT__ *v27; // rcx
  int v28; // eax
  struct HLFONT__ *v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v33; // edx
  __int128 v34; // xmm3
  __int128 v35; // xmm4
  __int128 v36; // xmm5
  __int128 v37; // xmm6
  __int64 v38; // xmm0_8
  __int64 v40; // [rsp+28h] [rbp-E0h]
  __int64 v41; // [rsp+28h] [rbp-E0h]
  struct tagLOGFONTW v43; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v44[24]; // [rsp+A8h] [rbp-60h] BYREF

  memset(&v43.lfEscapement, 0, 60);
  memset(v44, 0, 0x5CuLL);
  v3 = *(HDC *)(gpDispInfo + 64LL);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v8 = Get96DpiServerInfo(v6, v5, v7);
  SessionDpiMetrics = GetSessionDpiMetrics();
  v10 = Get96DpiMetrics();
  v11 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(a1, v11, 139LL, SessionDpiServerInfo + 8)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiServerInfo + 8)) )
  {
    return 0LL;
  }
  *(_QWORD *)&v43.lfHeight = GreSelectFontInternal(v3, *(_QWORD *)(SessionDpiServerInfo + 8), 1);
  *(_DWORD *)(SessionDpiServerInfo + 16) = GetCharDimensions(v3);
  GreSelectFontInternal(v3, *(_QWORD *)(v8 + 8), 1);
  CharDimensions = GetCharDimensions(v3);
  v13 = a2 + 124;
  *(_DWORD *)(v8 + 16) = CharDimensions;
  if ( !a2 )
    v13 = v11;
  v40 = v13;
  if ( !(unsigned int)UserSetFont(a1, v13, 142LL, SessionDpiMetrics + 32)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 32)) )
  {
    return 0LL;
  }
  GreSelectFontInternal(v3, *(_QWORD *)(SessionDpiMetrics + 32), 1);
  *(_DWORD *)(SessionDpiMetrics + 40) = GetCharDimensions(v3);
  GreSelectFontInternal(v3, *(_QWORD *)(v10 + 32), 1);
  *(_DWORD *)(v10 + 40) = GetCharDimensions(v3);
  v14 = a2 + 224;
  if ( !a2 )
    v14 = v40;
  v41 = v14;
  if ( !(unsigned int)UserSetFont(a1, v14, 145LL, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)SessionDpiMetrics) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    DPIMetrics = (__int64 *)GetDPIMetrics(v16, v15);
    GreSelectFontInternal(gMenuState[17], *DPIMetrics, 1);
  }
  GreSelectFontInternal(v3, *(_QWORD *)SessionDpiMetrics, 1);
  v18 = GetCharDimensions(v3);
  v19 = *(_DWORD *)&v43.lfOutPrecision;
  v20 = *(_DWORD *)(SessionDpiMetrics + 12);
  *(_DWORD *)(SessionDpiMetrics + 8) = v18;
  *(_DWORD *)(SessionDpiMetrics + 16) = *(_DWORD *)&v43.lfFaceName[6];
  *(_DWORD *)(SessionDpiMetrics + 20) = v19;
  v21 = ((_WORD)v20 + (_WORD)v19 + 1) & 0xFFFE;
  *(_DWORD *)(SessionDpiMetrics + 28) = v20 + v19 + 2;
  *(_DWORD *)(SessionDpiMetrics + 24) = v43.lfOrientation;
  SetDpiDepSysMet(27LL, (unsigned int)(v21 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v21 - 1));
  GreSelectFontInternal(v3, *(_QWORD *)v10, 1);
  v22 = GetCharDimensions(v3);
  v23 = *(_DWORD *)&v43.lfOutPrecision;
  v24 = *(_DWORD *)(v10 + 12);
  *(_DWORD *)(v10 + 8) = v22;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)&v43.lfFaceName[6];
  *(_DWORD *)(v10 + 20) = v23;
  *(_DWORD *)(v10 + 28) = v24 + v23 + 2;
  v25 = (((_WORD)v24 + (_WORD)v23 + 1) & 0xFFFE) - 1;
  *(_DWORD *)(v10 + 24) = v43.lfOrientation;
  for ( i = 2512LL; i < 2520; i += 4LL )
    *(_DWORD *)(i + gpsi) = v25;
  GreSelectFontInternal(v3, *(__int64 *)&v43.lfHeight, 1);
  ++*(_DWORD *)(SessionDpiMetrics + 24);
  ++*(_DWORD *)(v10 + 24);
  v27 = *(struct HLFONT__ **)(SessionDpiMetrics + 48);
  if ( v27 && v27 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v27);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 48));
    *(_QWORD *)(SessionDpiMetrics + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)SessionDpiMetrics, 92LL, (char *)v44) )
    return 0LL;
  v28 = v44[4];
  if ( v44[4] <= 700 )
    v28 = 700;
  v44[4] = v28;
  *(_QWORD *)(SessionDpiMetrics + 48) = GreCreateFontIndirectW((__int64)v44, 0x88u);
  v29 = *(struct HLFONT__ **)(v10 + 48);
  if ( v29 && v29 != *(struct HLFONT__ **)(v8 + 24) )
  {
    GreMarkDeletableFont(v29);
    GreDeleteObject(*(_QWORD *)(v10 + 48));
    *(_QWORD *)(v10 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)v10, 92LL, (char *)v44) )
    return 0LL;
  v30 = v44[4];
  if ( v44[4] <= 700 )
    v30 = 700;
  v44[4] = v30;
  *(_QWORD *)(v10 + 48) = GreCreateFontIndirectW((__int64)v44, 0x88u);
  v31 = a2 + 316;
  if ( !a2 )
    v31 = v41;
  if ( !(unsigned int)UserSetFont(a1, v31, 156LL, SessionDpiMetrics + 56)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 56)) )
  {
    return 0LL;
  }
  if ( a2 )
  {
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)(a2 + 408);
    *(_OWORD *)(gpsi + 5020LL) = *(_OWORD *)(a2 + 424);
    *(_OWORD *)(gpsi + 5036LL) = *(_OWORD *)(a2 + 440);
    *(_OWORD *)(gpsi + 5052LL) = *(_OWORD *)(a2 + 456);
    *(_OWORD *)(gpsi + 5068LL) = *(_OWORD *)(a2 + 472);
    *(_QWORD *)(gpsi + 5084LL) = *(_QWORD *)(a2 + 488);
    *(_DWORD *)(gpsi + 5092LL) = *(_DWORD *)(a2 + 496);
  }
  else
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile((struct tagLOGFONTW *)&v43.lfEscapement, a1, 0x9Du);
    v33 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v34 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v35 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v36 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v37 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v38 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5020LL) = v34;
    *(_OWORD *)(gpsi + 5036LL) = v35;
    *(_OWORD *)(gpsi + 5052LL) = v36;
    *(_OWORD *)(gpsi + 5068LL) = v37;
    *(_QWORD *)(gpsi + 5084LL) = v38;
    *(_DWORD *)(gpsi + 5092LL) = v33;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
