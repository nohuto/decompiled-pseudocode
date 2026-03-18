/*
 * XREFs of ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025B488
 * Callers:
 *     DrawTextExWorker @ 0x1C025B810 (DrawTextExWorker.c)
 * Callees:
 *     GreGetTextCharsetInfo @ 0x1C001C364 (GreGetTextCharsetInfo.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GreGetTextMetricsW @ 0x1C00C42C4 (GreGetTextMetricsW.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     IsSysFontAndDefaultMode @ 0x1C025BB6C (IsSysFontAndDefaultMode.c)
 */

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
  __int64 v12; // rdx
  __int64 v13; // rcx
  int TextMetricsW; // eax
  int v15; // esi
  int v16; // edi
  int v17; // r14d
  _DWORD *DPIServerInfo; // rax
  int v19; // eax
  __int64 CurrentProcessWin32Process; // rax
  bool v21; // zf
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  __int64 v25; // [rsp+28h] [rbp-71h] BYREF
  __int64 v26; // [rsp+30h] [rbp-69h] BYREF
  __int128 v27; // [rsp+38h] [rbp-61h]
  __int128 v28; // [rsp+48h] [rbp-51h]
  __int128 v29; // [rsp+58h] [rbp-41h]
  __int64 v30; // [rsp+68h] [rbp-31h]
  int v31; // [rsp+70h] [rbp-29h]
  _OWORD v32[5]; // [rsp+78h] [rbp-21h] BYREF

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
  if ( !(_DWORD)result )
    return result;
  GreGetDCPoint(a1, 2LL, &v25);
  *((_DWORD *)a4 + 5) = (((int)(v26 ^ v25) >> 31) & 0xFFFFFFFE) + 1;
  *((_DWORD *)a4 + 6) = (((HIDWORD(v26) ^ HIDWORD(v25)) >> 31) & 0xFFFFFFFE) + 1;
  if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
  {
    DPIServerInfo = (_DWORD *)GetDPIServerInfo(v13, v12);
    v17 = DPIServerInfo[9];
    v15 = DPIServerInfo[15];
    v16 = DPIServerInfo[18];
    GreGetTextCharsetInfo(*(HDC *)(gpDispInfo + 56LL), 0LL);
  }
  else
  {
    memset(v32, 0, 0x44uLL);
    TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v32);
    v31 = DWORD2(v32[3]);
    v28 = v32[1];
    v15 = DWORD1(v32[1]);
    v30 = *(_QWORD *)&v32[3];
    v27 = v32[0];
    v29 = v32[2];
    if ( TextMetricsW )
      v16 = v29;
    else
      v16 = 0;
    v17 = v27;
  }
  v19 = v17 * *((_DWORD *)a4 + 6);
  *((_DWORD *)a4 + 14) = v16;
  *((_DWORD *)a4 + 7) = v19;
  *((_DWORD *)a4 + 4) = 8 * v15;
  if ( gptiCurrent == gptiRit )
  {
    *((_DWORD *)a4 + 15) = 0;
LABEL_16:
    *((_QWORD *)a4 + 6) = UserTextOutWInternal;
    goto LABEL_17;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gptiRit);
  v21 = (*(_DWORD *)(CurrentProcessWin32Process + 760) & 4) == 0;
  *((_DWORD *)a4 + 15) = *(_DWORD *)(CurrentProcessWin32Process + 760) & 4;
  if ( v21 )
    goto LABEL_16;
LABEL_17:
  *(struct tagRECT *)a4 = *a2;
  v22 = *((_DWORD *)a4 + 5);
  if ( v9 | v10 )
  {
    *(_DWORD *)a4 += v9 * v22;
    v23 = *(_DWORD *)a4;
    *((_DWORD *)a4 + 10) = v10 * v22;
    *((_DWORD *)a4 + 2) -= v10 * v22;
  }
  else
  {
    *((_DWORD *)a4 + 10) = 0;
    v23 = *(_DWORD *)a4;
  }
  v24 = v22 * (*((_DWORD *)a4 + 2) - v23);
  *((_DWORD *)a4 + 9) = 0;
  *((_DWORD *)a4 + 8) = v24;
  return 1LL;
}
