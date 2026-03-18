/*
 * XREFs of ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00A3D44
 * Callers:
 *     CitProcessCallout @ 0x1C00362EC (CitProcessCallout.c)
 *     CitDisplayPowerChange @ 0x1C00A3914 (CitDisplayPowerChange.c)
 *     CitSessionConnectChange @ 0x1C00A39D0 (CitSessionConnectChange.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00A3B84 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00A3C38 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0233B0C (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0010FFC (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0033220 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003330C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C007A2C0 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00A419C (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEBA?AU1@AEBU1@@Z @ 0x1C00A4234 (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEBA-AU1@AEBU1@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A4294 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C00A42B0 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C00A4378 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0233ED0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C02343D0 (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 */

__int64 __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a5)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // r15
  char *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // r8
  struct tagPROCESSINFO **v14; // rcx
  unsigned int v15; // r13d
  struct _CIT_INTERACTION_SUMMARY *v16; // rax
  struct _CIT_INTERACTION_SUMMARY *v17; // r9
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // r13d
  int v23; // edx
  struct _CIT_INTERACTION_SUMMARY *v24; // r8
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  bool v29; // cf
  int v30; // eax
  int v31; // edx
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // ecx
  int v37; // eax
  struct tagPROCESSINFO *v38; // rdx
  struct _CIT_INTERACTION_SUMMARY *v39; // r9
  int v40; // eax
  const char *v41; // rdx
  int v42; // ecx
  struct _CIT_PROG_DATA *v44; // rax
  struct _CIT_PROG_DATA *v45; // r9
  unsigned int v46; // ecx
  int v47; // r8d
  struct _CIT_PROG_DATA *v48; // rdx
  int v49; // r8d
  unsigned int v50; // eax
  struct tagPROCESSINFO **v51; // [rsp+38h] [rbp-39h] BYREF
  __int64 v52; // [rsp+40h] [rbp-31h] BYREF
  struct _CIT_INTERACTION_SUMMARY *v53; // [rsp+48h] [rbp-29h]
  __int64 v54; // [rsp+50h] [rbp-21h] BYREF
  struct tagWND *v55; // [rsp+58h] [rbp-19h]
  __int64 v56; // [rsp+60h] [rbp-11h] BYREF
  int v57; // [rsp+68h] [rbp-9h]

  v5 = 0;
  v6 = (unsigned __int64)a3;
  v55 = a4;
  if ( *((struct tagPROCESSINFO **)a1 + 15) == a3 )
    return 0LL;
  v9 = (char *)a1 + 204;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 204), a2);
  v10 = *((_QWORD *)v9 + 2);
  v52 = v10;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 228), a2);
  v11 = *((_QWORD *)a1 + 15);
  v12 = *(_QWORD *)((char *)a1 + 244);
  v54 = v12;
  if ( v11 && dword_1C02883D8 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x800000000800LL) )
  {
    v14 = *(struct tagPROCESSINFO ***)(v13 + 936);
    v15 = a2 - *((_DWORD *)a1 + 34);
    v51 = v14;
    if ( *((_BYTE *)&qword_1C0293D24 + 5) )
    {
      v44 = CitpProcessEnsureProgData(v14[1]);
      v45 = v44;
      if ( v44 )
      {
        v46 = *((_DWORD *)v44 + 20);
        v47 = -1;
        if ( v46 + 1 >= v46 )
          v47 = v46 + 1;
        v48 = v44;
        *((_DWORD *)v44 + 20) = v47;
        v49 = -1;
        v50 = *((_DWORD *)v44 + 21);
        if ( v50 + v15 >= v50 )
          v49 = v50 + v15;
        *((_DWORD *)v45 + 21) = v49;
        CitpProgDataNotifyUseUpdate(xmmword_1C0293D30, v48);
      }
      v14 = v51;
    }
    if ( (*(&xmmword_1C0293D14 + 8) & 1) != 0 )
    {
      v16 = CitpInteractionSummaryEnsure(a1, v14, 2);
      v53 = v16;
      v17 = v16;
      if ( v16 )
      {
        v18 = *((_DWORD *)v16 + 33);
        v19 = -1;
        if ( v18 + 1 >= v18 )
          v19 = v18 + 1;
        *((_DWORD *)v16 + 33) = v19;
        v20 = *((_DWORD *)v16 + 34);
        v21 = v20 + v15;
        v22 = -1;
        v23 = -1;
        if ( v21 >= v20 )
          v23 = v21;
        *((_DWORD *)v17 + 34) = v23;
        CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v52, &v51, (char *)a1 + 184);
        CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v54, &v52, (char *)a1 + 192);
        v24 = v53;
        v25 = -1;
        v26 = *((_DWORD *)v53 + 35);
        if ( v26 + (HIDWORD(v51) & 0x7FFFFFFF) >= v26 )
          v25 = v26 + (HIDWORD(v51) & 0x7FFFFFFF);
        v27 = *((_DWORD *)v53 + 36);
        v28 = v27 + (_DWORD)v51;
        *((_DWORD *)v53 + 35) = v25;
        v29 = v28 < v27;
        v30 = -1;
        v31 = HIDWORD(v52);
        if ( !v29 )
          v30 = v28;
        *((_DWORD *)v24 + 36) = v30;
        v32 = -1;
        v33 = *((_DWORD *)v24 + 37);
        v34 = v33 + (v31 & 0x7FFFFFFF);
        if ( v34 >= v33 )
          v32 = v34;
        v35 = *((_DWORD *)v24 + 38);
        v36 = v35 + v52;
        *((_DWORD *)v24 + 37) = v32;
        if ( v36 >= v35 )
          v22 = v36;
        *((_DWORD *)v24 + 38) = v22;
        CitpInputTimesAddTo(
          (struct _CIT_INTERACTION_SUMMARY *)((char *)v24 + 32),
          (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
        v37 = *(_DWORD *)((char *)a1 + 178);
        v38 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
        v56 = *(_QWORD *)((char *)a1 + 170);
        v57 = v37;
        CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v56, v38, 0LL);
        v39 = v53;
        v40 = v57;
        *(_QWORD *)((char *)v53 + 62) = v56;
        *(_DWORD *)((char *)v39 + 70) = v40;
        CitpBitmapUpdateForTimeRange(
          (struct _CIT_INTERACTION_SUMMARY *)((char *)v39 + 160),
          *((_DWORD *)a1 + 34),
          a2,
          *((_DWORD *)a1 + 72),
          qword_1C0293D24);
      }
      if ( (*(&xmmword_1C0293D14 + 8) & 1) != 0 && a2 - *((_DWORD *)a1 + 72) > *(&xmmword_1C0293D14 + 3) )
        CitpInteractionSummariesFlush(a1, 0);
    }
    v5 = 0;
  }
  if ( a5 )
  {
    v5 = 1;
    *((_WORD *)a5 + 4) = *((_WORD *)a1 + 71);
    *((_WORD *)a5 + 6) = *((_WORD *)a1 + 72);
    *((_WORD *)a5 + 5) = *((_WORD *)a1 + 73);
    *((_WORD *)a5 + 7) = *((_WORD *)a1 + 74);
    *((_WORD *)a5 + 8) = *((_WORD *)a1 + 75);
    *((_WORD *)a5 + 9) = *((_WORD *)a1 + 76);
    *((_WORD *)a5 + 10) = *((_WORD *)a1 + 77);
    *((_WORD *)a5 + 11) = *((_WORD *)a1 + 78);
    *((_WORD *)a5 + 12) = *((_WORD *)a1 + 79);
    *((_WORD *)a5 + 13) = *((_WORD *)a1 + 80);
    *((_WORD *)a5 + 14) = *((_WORD *)a1 + 81);
    *((_WORD *)a5 + 15) = *((_WORD *)a1 + 83);
    *((_WORD *)a5 + 16) = *((_WORD *)a1 + 84);
  }
  if ( v6 )
  {
    if ( (unsigned int)CitpAllowForegroundProcess(a1) )
      v6 &= -(__int64)(CitpProcessEnsureContext((struct tagPROCESSINFO *)v6, v41) != 0LL);
    else
      v6 = 0LL;
  }
  *((_QWORD *)a1 + 15) = v6;
  *((_DWORD *)a1 + 34) = a2;
  *((_QWORD *)a1 + 23) = v10;
  *((_QWORD *)a1 + 24) = v12;
  *(_OWORD *)((char *)a1 + 140) = 0LL;
  *(_QWORD *)((char *)a1 + 156) = 0LL;
  *((_DWORD *)a1 + 41) = 0;
  *((_WORD *)a1 + 84) = 0;
  *(_QWORD *)((char *)a1 + 170) = 0LL;
  *(_DWORD *)((char *)a1 + 178) = 0;
  if ( v6 && dword_1C02883D8 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x800000000800LL) )
  {
    if ( (*(&xmmword_1C0293D14 + 8) & 1) != 0
      && *((struct _CIT_IMPACT_CONTEXT **)a1 + 33) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 264) )
    {
      *((_DWORD *)a1 + 72) = a2;
      *((_QWORD *)a1 + 35) = MEMORY[0xFFFFF78000000014];
    }
    v56 = 0LL;
    v57 = 0;
    CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v56, (struct tagPROCESSINFO *)v6, v55);
    v42 = v57;
    *(_QWORD *)((char *)a1 + 170) = v56;
    *(_DWORD *)((char *)a1 + 178) = v42;
  }
  return v5;
}
