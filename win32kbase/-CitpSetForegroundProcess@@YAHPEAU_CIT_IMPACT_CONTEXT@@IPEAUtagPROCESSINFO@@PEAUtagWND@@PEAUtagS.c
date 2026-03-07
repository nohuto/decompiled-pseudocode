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
  __int64 v14; // r9
  struct tagPROCESSINFO **v15; // rcx
  unsigned int v16; // r13d
  struct _CIT_INTERACTION_SUMMARY *v17; // rax
  struct _CIT_INTERACTION_SUMMARY *v18; // r9
  unsigned int v19; // ecx
  int v20; // r8d
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // r13d
  int v24; // edx
  struct _CIT_INTERACTION_SUMMARY *v25; // r8
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  bool v30; // cf
  int v31; // eax
  int v32; // edx
  int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // ecx
  int v38; // eax
  struct tagPROCESSINFO *v39; // rdx
  struct _CIT_INTERACTION_SUMMARY *v40; // r9
  int v41; // eax
  const char *v42; // rdx
  int v43; // ecx
  struct _CIT_PROG_DATA *v45; // rax
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
  if ( v11 && dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x800000000800LL) )
  {
    v15 = *(struct tagPROCESSINFO ***)(v13 + 912);
    v16 = a2 - *((_DWORD *)a1 + 34);
    v51 = v15;
    if ( *((_BYTE *)&qword_1C02D4D94 + 5) )
    {
      v45 = CitpProcessEnsureProgData(v15[1]);
      v14 = (__int64)v45;
      if ( v45 )
      {
        v46 = *((_DWORD *)v45 + 20);
        v47 = -1;
        if ( v46 + 1 >= v46 )
          v47 = v46 + 1;
        v48 = v45;
        *((_DWORD *)v45 + 20) = v47;
        v49 = -1;
        v50 = *((_DWORD *)v45 + 21);
        if ( v50 + v16 >= v50 )
          v49 = v50 + v16;
        *(_DWORD *)(v14 + 84) = v49;
        CitpProgDataNotifyUseUpdate(xmmword_1C02D4DA0, v48);
      }
      v15 = v51;
    }
    if ( (*(&xmmword_1C02D4D84 + 8) & 1) != 0 )
    {
      v17 = CitpInteractionSummaryEnsure(a1, v15, 2LL, v14);
      v53 = v17;
      v18 = v17;
      if ( v17 )
      {
        v19 = *((_DWORD *)v17 + 33);
        v20 = -1;
        if ( v19 + 1 >= v19 )
          v20 = v19 + 1;
        *((_DWORD *)v17 + 33) = v20;
        v21 = *((_DWORD *)v17 + 34);
        v22 = v21 + v16;
        v23 = -1;
        v24 = -1;
        if ( v22 >= v21 )
          v24 = v22;
        *((_DWORD *)v18 + 34) = v24;
        CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v52, &v51, (char *)a1 + 184);
        CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v54, &v52, (char *)a1 + 192);
        v25 = v53;
        v26 = -1;
        v27 = *((_DWORD *)v53 + 35);
        if ( v27 + (HIDWORD(v51) & 0x7FFFFFFF) >= v27 )
          v26 = v27 + (HIDWORD(v51) & 0x7FFFFFFF);
        v28 = *((_DWORD *)v53 + 36);
        v29 = v28 + (_DWORD)v51;
        *((_DWORD *)v53 + 35) = v26;
        v30 = v29 < v28;
        v31 = -1;
        v32 = HIDWORD(v52);
        if ( !v30 )
          v31 = v29;
        *((_DWORD *)v25 + 36) = v31;
        v33 = -1;
        v34 = *((_DWORD *)v25 + 37);
        v35 = v34 + (v32 & 0x7FFFFFFF);
        if ( v35 >= v34 )
          v33 = v35;
        v36 = *((_DWORD *)v25 + 38);
        v37 = v36 + v52;
        *((_DWORD *)v25 + 37) = v33;
        if ( v37 >= v36 )
          v23 = v37;
        *((_DWORD *)v25 + 38) = v23;
        CitpInputTimesAddTo(
          (struct _CIT_INTERACTION_SUMMARY *)((char *)v25 + 32),
          (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
        v38 = *(_DWORD *)((char *)a1 + 178);
        v39 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
        v56 = *(_QWORD *)((char *)a1 + 170);
        v57 = v38;
        CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v56, v39, 0LL);
        v40 = v53;
        v41 = v57;
        *(_QWORD *)((char *)v53 + 62) = v56;
        *(_DWORD *)((char *)v40 + 70) = v41;
        CitpBitmapUpdateForTimeRange(
          (struct _CIT_INTERACTION_SUMMARY *)((char *)v40 + 160),
          *((_DWORD *)a1 + 34),
          a2,
          *((_DWORD *)a1 + 72),
          qword_1C02D4D94);
      }
      if ( (*(&xmmword_1C02D4D84 + 8) & 1) != 0 && a2 - *((_DWORD *)a1 + 72) > *(&xmmword_1C02D4D84 + 3) )
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
      v6 &= -(__int64)(CitpProcessEnsureContext((struct tagPROCESSINFO *)v6, v42) != 0LL);
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
  if ( v6 && dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x800000000800LL) )
  {
    if ( (*(&xmmword_1C02D4D84 + 8) & 1) != 0
      && *((struct _CIT_IMPACT_CONTEXT **)a1 + 33) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 264) )
    {
      *((_DWORD *)a1 + 72) = a2;
      *((_QWORD *)a1 + 35) = MEMORY[0xFFFFF78000000014];
    }
    v56 = 0LL;
    v57 = 0;
    CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v56, (struct tagPROCESSINFO *)v6, v55);
    v43 = v57;
    *(_QWORD *)((char *)a1 + 170) = v56;
    *(_DWORD *)((char *)a1 + 178) = v43;
  }
  return v5;
}
