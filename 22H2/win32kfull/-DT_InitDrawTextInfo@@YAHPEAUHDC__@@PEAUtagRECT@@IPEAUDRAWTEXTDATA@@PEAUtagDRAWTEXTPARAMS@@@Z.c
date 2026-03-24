/*
 * XREFs of ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025E2C4
 * Callers:
 *     DrawTextExWorker @ 0x1C025E630 (DrawTextExWorker.c)
 * Callees:
 *     GreGetTextCharsetInfo @ 0x1C009B5B4 (GreGetTextCharsetInfo.c)
 *     GetDPIServerInfo @ 0x1C00E0AC8 (GetDPIServerInfo.c)
 *     GreGetTextMetricsW @ 0x1C00E3244 (GreGetTextMetricsW.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     IsSysFontAndDefaultMode @ 0x1C025E988 (IsSysFontAndDefaultMode.c)
 */

__int64 __fastcall DT_InitDrawTextInfo(
        HDC a1,
        struct tagRECT *a2,
        __int16 a3,
        struct DRAWTEXTDATA *a4,
        struct tagDRAWTEXTPARAMS *a5)
{
  int v9; // esi
  int v10; // edi
  __int64 result; // rax
  __int64 v12; // rcx
  int TextMetricsW; // eax
  int v14; // r15d
  int v15; // r14d
  int v16; // r12d
  _DWORD *DPIServerInfo; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // eax
  __int64 v22; // [rsp+28h] [rbp-71h] BYREF
  __int64 v23; // [rsp+30h] [rbp-69h] BYREF
  __int128 v24; // [rsp+38h] [rbp-61h]
  __int128 v25; // [rsp+48h] [rbp-51h]
  __int128 v26; // [rsp+58h] [rbp-41h]
  _OWORD v27[5]; // [rsp+78h] [rbp-21h] BYREF

  v23 = 0LL;
  v22 = 0LL;
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
  result = GreGetDCPoint(a1, 1LL, &v23);
  if ( (_DWORD)result )
  {
    GreGetDCPoint(a1, 2LL, &v22);
    *((_DWORD *)a4 + 5) = (((int)(v23 ^ v22) >> 31) & 0xFFFFFFFE) + 1;
    *((_DWORD *)a4 + 6) = (((HIDWORD(v23) ^ HIDWORD(v22)) >> 31) & 0xFFFFFFFE) + 1;
    if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
    {
      DPIServerInfo = (_DWORD *)GetDPIServerInfo(v12);
      v16 = DPIServerInfo[9];
      v14 = DPIServerInfo[15];
      v15 = DPIServerInfo[18];
      GreGetTextCharsetInfo(*(HDC *)(gpDispInfo + 56LL), 0LL);
    }
    else
    {
      memset(v27, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v27);
      v24 = v27[0];
      v25 = v27[1];
      v14 = DWORD1(v27[1]);
      v26 = v27[2];
      if ( TextMetricsW )
        v15 = v26;
      else
        v15 = 0;
      v16 = v24;
    }
    v18 = v16 * *((_DWORD *)a4 + 6);
    *((_DWORD *)a4 + 14) = v15;
    *((_DWORD *)a4 + 7) = v18;
    *((_DWORD *)a4 + 4) = 8 * v14;
    if ( gptiCurrent == gptiRit )
      v19 = 0;
    else
      v19 = *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiRit) + 760) & 4;
    *((_DWORD *)a4 + 15) = v19;
    if ( !v19 )
      *((_QWORD *)a4 + 6) = UserTextOutWInternal;
    *(struct tagRECT *)a4 = *a2;
    if ( v9 | v10 )
    {
      *(_DWORD *)a4 += *((_DWORD *)a4 + 5) * v9;
      v20 = *((_DWORD *)a4 + 5) * v10;
      *((_DWORD *)a4 + 10) = v20;
      *((_DWORD *)a4 + 2) -= v20;
    }
    else
    {
      *((_DWORD *)a4 + 10) = 0;
    }
    v21 = *((_DWORD *)a4 + 5) * (*((_DWORD *)a4 + 2) - *(_DWORD *)a4);
    *((_DWORD *)a4 + 9) = 0;
    *((_DWORD *)a4 + 8) = v21;
    return 1LL;
  }
  return result;
}
