__int64 __fastcall DT_InitDrawTextInfo(
        HDC a1,
        struct tagRECT *a2,
        __int16 a3,
        struct DRAWTEXTDATA *a4,
        struct tagDRAWTEXTPARAMS *a5)
{
  int v9; // r15d
  int v10; // r12d
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  int TextMetricsW; // ebx
  bool v16; // zf
  int v17; // ebx
  int v18; // esi
  int v19; // r14d
  _DWORD *DPIServerInfo; // rax
  int v21; // ebx
  __int64 CurrentProcessWin32Process; // rax
  int v23; // eax
  int v24; // ecx
  __int64 v25; // [rsp+28h] [rbp-A1h] BYREF
  __int64 v26; // [rsp+30h] [rbp-99h] BYREF
  __int128 v27; // [rsp+38h] [rbp-91h]
  __int128 v28; // [rsp+48h] [rbp-81h]
  __int128 v29; // [rsp+58h] [rbp-71h]
  _OWORD v30[5]; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v31[48]; // [rsp+C8h] [rbp-1h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  if ( a5 )
  {
    v9 = *((_DWORD *)a5 + 2);
    v10 = *((_DWORD *)a5 + 3);
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  result = GreGetDCPoint(a1, 1LL, &v26);
  if ( (_DWORD)result )
  {
    GreGetDCPoint(a1, 2LL, &v25);
    *((_DWORD *)a4 + 5) = (((int)(v26 ^ v25) >> 31) & 0xFFFFFFFE) + 1;
    *((_DWORD *)a4 + 6) = (((HIDWORD(v26) ^ HIDWORD(v25)) >> 31) & 0xFFFFFFFE) + 1;
    if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
    {
      DPIServerInfo = (_DWORD *)GetDPIServerInfo(v12);
      v17 = DPIServerInfo[9];
      v19 = DPIServerInfo[15];
      v18 = DPIServerInfo[18];
      GreGetTextCharsetInfo(*(_QWORD *)(gpDispInfo + 56LL));
    }
    else
    {
      memset_0(v30, 0, 0x44uLL);
      v14 = SGDGetSessionState(v13);
      EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v31, *(struct Gre::Full::SESSION_GLOBALS **)(v14 + 32));
      TextMetricsW = GrepGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v30, 1027);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v31);
      v16 = TextMetricsW == 0;
      v27 = v30[0];
      v17 = v30[0];
      v29 = v30[2];
      v28 = v30[1];
      if ( v16 )
        v18 = 0;
      else
        v18 = v29;
      v19 = DWORD1(v28);
    }
    v21 = *((_DWORD *)a4 + 6) * v17;
    *((_DWORD *)a4 + 4) = 8 * v19;
    *((_DWORD *)a4 + 14) = v18;
    *((_DWORD *)a4 + 7) = v21;
    if ( gptiCurrent == gptiRit )
    {
      v23 = 0;
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gptiRit);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v23 = *(_DWORD *)(CurrentProcessWin32Process + 752) & 4;
    }
    *((_DWORD *)a4 + 15) = v23;
    if ( !v23 )
      *((_QWORD *)a4 + 6) = UserTextOutWInternal;
    *(struct tagRECT *)a4 = *a2;
    if ( v9 | v10 )
    {
      v24 = v10 * *((_DWORD *)a4 + 5);
      *(_DWORD *)a4 += v9 * *((_DWORD *)a4 + 5);
      *((_DWORD *)a4 + 10) = v24;
      *((_DWORD *)a4 + 2) -= v24;
    }
    else
    {
      *((_DWORD *)a4 + 10) = 0;
    }
    result = 1LL;
    *((_QWORD *)a4 + 4) = (unsigned int)(*((_DWORD *)a4 + 5) * (*((_DWORD *)a4 + 2) - *(_DWORD *)a4));
  }
  return result;
}
