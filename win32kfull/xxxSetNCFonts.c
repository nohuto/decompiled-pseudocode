__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 SessionDpiServerInfo; // r12
  __int64 v5; // r13
  __int64 v6; // rcx
  struct HLFONT__ **SessionDpiMetrics; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  int CharDimensions; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *DPIMetrics; // rax
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // ebx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // r8d
  __int64 i; // rcx
  struct HLFONT__ *v24; // rcx
  int v25; // eax
  struct HLFONT__ *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v30; // edx
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int128 v33; // xmm5
  __int128 v34; // xmm6
  __int64 v35; // xmm0_8
  __int64 v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+28h] [rbp-E0h]
  struct tagLOGFONTW v40; // [rsp+40h] [rbp-C8h] BYREF
  _WORD v41[8]; // [rsp+A8h] [rbp-60h] BYREF
  int v42; // [rsp+B8h] [rbp-50h]

  memset(&v40.lfEscapement, 0, 60);
  memset_0(v41, 0, 0x5CuLL);
  v3 = *(_QWORD *)(gpDispInfo + 64LL);
  SessionDpiServerInfo = GetSessionDpiServerInfo(gpDispInfo);
  v5 = Get96DpiServerInfo();
  SessionDpiMetrics = (struct HLFONT__ **)GetSessionDpiMetrics(v6);
  v8 = (_QWORD *)Get96DpiMetrics();
  v9 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(a1, v9, 139LL, (struct HLFONT__ **)(SessionDpiServerInfo + 8))
    || !(unsigned int)UserSetAltScaleFont(*(HBRUSH *)(SessionDpiServerInfo + 8), (__int64 *)(v5 + 8)) )
  {
    return 0LL;
  }
  *(_QWORD *)&v40.lfHeight = GreSelectFontInternal(v3, *(_QWORD *)(SessionDpiServerInfo + 8), 1LL);
  *(_DWORD *)(SessionDpiServerInfo + 16) = GetCharDimensions(v3, 0LL, SessionDpiServerInfo + 20);
  GreSelectFontInternal(v3, *(_QWORD *)(v5 + 8), 1LL);
  CharDimensions = GetCharDimensions(v3, 0LL, v5 + 20);
  v11 = a2 + 124;
  *(_DWORD *)(v5 + 16) = CharDimensions;
  if ( !a2 )
    v11 = v9;
  v37 = v11;
  if ( !(unsigned int)UserSetFont(a1, v11, 142LL, SessionDpiMetrics + 4)
    || !(unsigned int)UserSetAltScaleFont((HBRUSH)SessionDpiMetrics[4], v8 + 4) )
  {
    return 0LL;
  }
  GreSelectFontInternal(v3, SessionDpiMetrics[4], 1LL);
  *((_DWORD *)SessionDpiMetrics + 10) = GetCharDimensions(v3, 0LL, (char *)SessionDpiMetrics + 44);
  GreSelectFontInternal(v3, v8[4], 1LL);
  *((_DWORD *)v8 + 10) = GetCharDimensions(v3, 0LL, (char *)v8 + 44);
  v12 = a2 + 224;
  if ( !a2 )
    v12 = v37;
  v38 = v12;
  if ( !(unsigned int)UserSetFont(a1, v12, 145LL, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont((HBRUSH)*SessionDpiMetrics, v8) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    DPIMetrics = (_QWORD *)GetDPIMetrics(v13);
    GreSelectFontInternal(gMenuState[17], *DPIMetrics, 1LL);
  }
  GreSelectFontInternal(v3, *SessionDpiMetrics, 1LL);
  v15 = GetCharDimensions(v3, &v40.lfEscapement, (char *)SessionDpiMetrics + 12);
  v16 = *(_DWORD *)&v40.lfOutPrecision;
  v17 = *((_DWORD *)SessionDpiMetrics + 3);
  *((_DWORD *)SessionDpiMetrics + 2) = v15;
  *((_DWORD *)SessionDpiMetrics + 4) = *(_DWORD *)&v40.lfFaceName[6];
  *((_DWORD *)SessionDpiMetrics + 5) = v16;
  v18 = ((_WORD)v17 + (_WORD)v16 + 1) & 0xFFFE;
  *((_DWORD *)SessionDpiMetrics + 7) = v17 + v16 + 2;
  *((_DWORD *)SessionDpiMetrics + 6) = v40.lfOrientation;
  SetDpiDepSysMet(27LL, (unsigned int)(v18 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v18 - 1));
  GreSelectFontInternal(v3, *v8, 1LL);
  v19 = GetCharDimensions(v3, &v40.lfEscapement, (char *)v8 + 12);
  v20 = *(_DWORD *)&v40.lfOutPrecision;
  v21 = *((_DWORD *)v8 + 3);
  *((_DWORD *)v8 + 2) = v19;
  *((_DWORD *)v8 + 4) = *(_DWORD *)&v40.lfFaceName[6];
  *((_DWORD *)v8 + 5) = v20;
  *((_DWORD *)v8 + 7) = v21 + v20 + 2;
  v22 = (((_WORD)v21 + (_WORD)v20 + 1) & 0xFFFE) - 1;
  *((_DWORD *)v8 + 6) = v40.lfOrientation;
  for ( i = 2512LL; i < 2520; i += 4LL )
    *(_DWORD *)(i + gpsi) = v22;
  GreSelectFontInternal(v3, *(_QWORD *)&v40.lfHeight, 1LL);
  ++*((_DWORD *)SessionDpiMetrics + 6);
  ++*((_DWORD *)v8 + 6);
  v24 = SessionDpiMetrics[6];
  if ( v24 && v24 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v24);
    GreDeleteObject(SessionDpiMetrics[6]);
    SessionDpiMetrics[6] = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW((HBRUSH)*SessionDpiMetrics, 92LL, v41) )
    return 0LL;
  v25 = v42;
  if ( v42 <= 700 )
    v25 = 700;
  v42 = v25;
  SessionDpiMetrics[6] = (struct HLFONT__ *)GreCreateFontIndirectW((__int64)v41, 0x88u);
  v26 = (struct HLFONT__ *)v8[6];
  if ( v26 && v26 != *(struct HLFONT__ **)(v5 + 24) )
  {
    GreMarkDeletableFont(v26);
    GreDeleteObject(v8[6]);
    v8[6] = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW((HBRUSH)*v8, 92LL, v41) )
    return 0LL;
  v27 = v42;
  if ( v42 <= 700 )
    v27 = 700;
  v42 = v27;
  v8[6] = GreCreateFontIndirectW((__int64)v41, 0x88u);
  v28 = a2 + 316;
  if ( !a2 )
    v28 = v38;
  if ( !(unsigned int)UserSetFont(a1, v28, 156LL, SessionDpiMetrics + 7)
    || !(unsigned int)UserSetAltScaleFont((HBRUSH)SessionDpiMetrics[7], v8 + 7) )
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
    LogFontFromUserProfile = GetLogFontFromUserProfile((struct tagLOGFONTW *)&v40.lfEscapement, a1, 0x9Du);
    v30 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v31 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v32 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v33 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v34 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v35 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5020LL) = v31;
    *(_OWORD *)(gpsi + 5036LL) = v32;
    *(_OWORD *)(gpsi + 5052LL) = v33;
    *(_OWORD *)(gpsi + 5068LL) = v34;
    *(_QWORD *)(gpsi + 5084LL) = v35;
    *(_DWORD *)(gpsi + 5092LL) = v30;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
