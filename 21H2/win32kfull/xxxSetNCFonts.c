/*
 * XREFs of xxxSetNCFonts @ 0x1C00E2C88
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00E262C (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreSelectFont @ 0x1C0045F20 (GreSelectFont.c)
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C00BA190 (GreCreateFontIndirectW.c)
 *     GetDPIMetrics @ 0x1C00E0DEC (GetDPIMetrics.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00E21C0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00E2998 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetFont @ 0x1C00E2ABC (UserSetFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00E3174 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GetCharDimensions @ 0x1C00E33C8 (GetCharDimensions.c)
 *     GreMarkDeletableFont @ 0x1C00E43C4 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1C00E4424 (UserSetAltScaleFont.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
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
  __int64 v15; // rcx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // r8d
  __int64 i; // rcx
  struct HLFONT__ *v25; // rcx
  int v26; // eax
  struct HLFONT__ *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v31; // edx
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int128 v34; // xmm5
  __int128 v35; // xmm6
  __int64 v36; // xmm0_8
  __int64 v38; // [rsp+28h] [rbp-E0h]
  __int64 v39; // [rsp+28h] [rbp-E0h]
  struct tagLOGFONTW v41; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v42[24]; // [rsp+A8h] [rbp-60h] BYREF

  memset(&v41.lfEscapement, 0, 60);
  memset(v42, 0, 0x5CuLL);
  v3 = *(HDC *)(gpDispInfo + 64LL);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v8 = Get96DpiServerInfo(v6, v5, v7);
  SessionDpiMetrics = GetSessionDpiMetrics();
  v10 = Get96DpiMetrics();
  v11 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(a1, v11, 139LL, (struct HLFONT__ **)(SessionDpiServerInfo + 8))
    || !(unsigned int)UserSetAltScaleFont(*(HSURF *)(SessionDpiServerInfo + 8)) )
  {
    return 0LL;
  }
  GreSelectFont(v3);
  *(_DWORD *)(SessionDpiServerInfo + 16) = GetCharDimensions(v3);
  GreSelectFont(v3);
  CharDimensions = GetCharDimensions(v3);
  v13 = a2 + 124;
  *(_DWORD *)(v8 + 16) = CharDimensions;
  if ( !a2 )
    v13 = v11;
  v38 = v13;
  if ( !(unsigned int)UserSetFont(a1, v13, 142LL, (struct HLFONT__ **)(SessionDpiMetrics + 32))
    || !(unsigned int)UserSetAltScaleFont(*(HSURF *)(SessionDpiMetrics + 32)) )
  {
    return 0LL;
  }
  GreSelectFont(v3);
  *(_DWORD *)(SessionDpiMetrics + 40) = GetCharDimensions(v3);
  GreSelectFont(v3);
  *(_DWORD *)(v10 + 40) = GetCharDimensions(v3);
  v14 = a2 + 224;
  if ( !a2 )
    v14 = v38;
  v39 = v14;
  if ( !(unsigned int)UserSetFont(a1, v14, 145LL, (struct HLFONT__ **)SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(HSURF *)SessionDpiMetrics) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    GetDPIMetrics(v15);
    GreSelectFont(gMenuState[17]);
  }
  GreSelectFont(v3);
  v16 = GetCharDimensions(v3);
  v17 = *(_DWORD *)&v41.lfOutPrecision;
  v18 = *(_DWORD *)(SessionDpiMetrics + 12);
  *(_DWORD *)(SessionDpiMetrics + 8) = v16;
  *(_DWORD *)(SessionDpiMetrics + 16) = *(_DWORD *)&v41.lfFaceName[6];
  *(_DWORD *)(SessionDpiMetrics + 20) = v17;
  v19 = ((_WORD)v18 + (_WORD)v17 + 1) & 0xFFFE;
  *(_DWORD *)(SessionDpiMetrics + 28) = v18 + v17 + 2;
  *(_DWORD *)(SessionDpiMetrics + 24) = v41.lfOrientation;
  SetDpiDepSysMet(27LL, (unsigned int)(v19 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v19 - 1));
  GreSelectFont(v3);
  v20 = GetCharDimensions(v3);
  v21 = *(_DWORD *)&v41.lfOutPrecision;
  v22 = *(_DWORD *)(v10 + 12);
  *(_DWORD *)(v10 + 8) = v20;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)&v41.lfFaceName[6];
  *(_DWORD *)(v10 + 20) = v21;
  *(_DWORD *)(v10 + 28) = v22 + v21 + 2;
  v23 = (((_WORD)v22 + (_WORD)v21 + 1) & 0xFFFE) - 1;
  *(_DWORD *)(v10 + 24) = v41.lfOrientation;
  for ( i = 2512LL; i < 2520; i += 4LL )
    *(_DWORD *)(i + gpsi) = v23;
  GreSelectFont(v3);
  ++*(_DWORD *)(SessionDpiMetrics + 24);
  ++*(_DWORD *)(v10 + 24);
  v25 = *(struct HLFONT__ **)(SessionDpiMetrics + 48);
  if ( v25 && v25 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v25);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 48));
    *(_QWORD *)(SessionDpiMetrics + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HSURF *)SessionDpiMetrics, 92LL, (char *)v42) )
    return 0LL;
  v26 = v42[4];
  if ( v42[4] <= 700 )
    v26 = 700;
  v42[4] = v26;
  *(_QWORD *)(SessionDpiMetrics + 48) = GreCreateFontIndirectW((__int64)v42, 0x88u);
  v27 = *(struct HLFONT__ **)(v10 + 48);
  if ( v27 && v27 != *(struct HLFONT__ **)(v8 + 24) )
  {
    GreMarkDeletableFont(v27);
    GreDeleteObject(*(_QWORD *)(v10 + 48));
    *(_QWORD *)(v10 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HSURF *)v10, 92LL, (char *)v42) )
    return 0LL;
  v28 = v42[4];
  if ( v42[4] <= 700 )
    v28 = 700;
  v42[4] = v28;
  *(_QWORD *)(v10 + 48) = GreCreateFontIndirectW((__int64)v42, 0x88u);
  v29 = a2 + 316;
  if ( !a2 )
    v29 = v39;
  if ( !(unsigned int)UserSetFont(a1, v29, 156LL, (struct HLFONT__ **)(SessionDpiMetrics + 56))
    || !(unsigned int)UserSetAltScaleFont(*(HSURF *)(SessionDpiMetrics + 56)) )
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
    LogFontFromUserProfile = GetLogFontFromUserProfile((struct tagLOGFONTW *)&v41.lfEscapement, a1, 0x9Du);
    v31 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v32 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v33 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v34 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v35 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v36 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5020LL) = v32;
    *(_OWORD *)(gpsi + 5036LL) = v33;
    *(_OWORD *)(gpsi + 5052LL) = v34;
    *(_OWORD *)(gpsi + 5068LL) = v35;
    *(_QWORD *)(gpsi + 5084LL) = v36;
    *(_DWORD *)(gpsi + 5092LL) = v31;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
