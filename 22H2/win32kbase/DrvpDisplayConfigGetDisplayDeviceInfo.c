/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0021BE8
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CAF28 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0012124 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C002193C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x1C0048F20 (UserIsCurrentProcessDwm.c)
 *     DCompositionIsShellProcess @ 0x1C005B9C8 (DCompositionIsShellProcess.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1, __int64 a2)
{
  int v2; // r12d
  int v4; // r15d
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rcx
  wchar_t *v12; // rdi
  int v13; // eax
  char v14; // r11
  struct PDEV *i; // rsi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _WORD *v22; // rcx
  __int64 v23; // rdx
  char *v24; // rdi
  __int16 v25; // ax
  _WORD *v26; // rax
  int IsWddmConnectedSession; // eax
  struct tagSIZE v29; // rax
  int v30; // r9d
  struct tagSIZE v31; // rax
  int v32; // r10d
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  struct PDEV *v48; // [rsp+70h] [rbp+40h] BYREF
  __int64 v49; // [rsp+78h] [rbp+48h] BYREF
  __int64 v50; // [rsp+80h] [rbp+50h] BYREF

  v2 = *a1;
  v4 = 0;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    LODWORD(v10) = -1073741789;
    if ( v2 == -21 )
    {
      v4 = 1144084225;
      v42 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
      v42[3] = (unsigned int)a1[1];
      v42[4] = 2056LL;
      v42[5] = 1144084225LL;
      goto LABEL_77;
    }
    return (unsigned int)v10;
  }
  v5 = (unsigned int)a1[4];
  a1[513] = 0;
  v6 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, int *))qword_1C0250990)(*((_QWORD *)a1 + 1), v5, 0LL, a1);
  v10 = v6;
  if ( v6 < 0 && v2 == -21 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v43[3] = a1[3];
    v43[4] = (unsigned int)a1[2];
    v43[5] = (unsigned int)a1[4];
    v43[6] = v10;
    WdLogEvent5_WdError(v43);
    v4 = a1[506];
    goto LABEL_42;
  }
  v11 = (unsigned int)a1[4];
  if ( (_DWORD)v11 == -1 )
    goto LABEL_42;
  v12 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_87;
  v7 = (unsigned int)a1[2];
  v9 = 0x800000LL;
  while ( (*((_DWORD *)v12 + 40) & 0x800000) != 0 )
  {
    if ( (_DWORD)v7 == *((_DWORD *)v12 + 62) )
    {
      v13 = *((_DWORD *)v12 + 63);
      goto LABEL_9;
    }
LABEL_44:
    v12 = (wchar_t *)*((_QWORD *)v12 + 16);
    if ( !v12 )
      goto LABEL_11;
  }
  if ( (_DWORD)v7 != *((_DWORD *)v12 + 74) )
    goto LABEL_44;
  v13 = *((_DWORD *)v12 + 75);
LABEL_9:
  if ( a1[3] != v13 || *((_DWORD *)v12 + 64) != (_DWORD)v11 )
    goto LABEL_44;
LABEL_11:
  if ( v12 && (*((_QWORD *)v12 + 18) || *((_QWORD *)v12 + 38)) )
  {
    if ( (*((_DWORD *)v12 + 40) & 0x800000) == 0 && !*((_DWORD *)v12 + 74) && !*((_DWORD *)v12 + 75) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v11, v7);
      WdLogEvent5_WdAssertion(v44);
    }
    if ( (*((_DWORD *)v12 + 41) & 1) != 0 )
    {
      LODWORD(v10) = -1073741130;
      if ( v2 == -21 )
      {
        v4 = 1144084228;
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v11, v7);
        v45[3] = a1[3];
        v45[4] = (unsigned int)a1[2];
        v45[5] = (unsigned int)a1[4];
        v45[6] = *((unsigned int *)v12 + 40);
        v45[7] = 1144084228LL;
        WdLogEvent5_WdError(v45);
      }
      else
      {
        v46 = WdLogNewEntry5_WdEvent(v11);
        *(_QWORD *)(v46 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v46);
      }
      goto LABEL_70;
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    if ( !(unsigned int)UserIsCurrentProcessDwm() && !(unsigned __int8)DCompositionIsShellProcess()
      || (IsWddmConnectedSession = UserIsWddmConnectedSession(), v14 = 1, !IsWddmConnectedSession) )
    {
      v14 = 0;
    }
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      v48 = i;
      v16 = *((_DWORD *)i + 10);
      if ( (v16 & 1) != 0 && (v16 & 0x400) == 0 )
      {
        if ( v14 )
        {
          if ( (v16 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v48) )
            {
              if ( a1[411] == *((_DWORD *)i + 646) && a1[412] == *((_DWORD *)i + 647) )
              {
                v29 = PDEVOBJ::sizl((PDEVOBJ *)&v48, &v49);
                if ( a1[413] == v30 + *(_DWORD *)v29.cx )
                {
                  v31 = PDEVOBJ::sizl((PDEVOBJ *)&v48, &v50);
                  if ( a1[414] == v32 + *(_DWORD *)(*(_QWORD *)&v31 + 4LL) )
                  {
                    v33 = a1[513] & 0xFFFFFFFE;
                    a1[513] = v33;
                    if ( *((_DWORD *)i + 646) || (v34 = 2, *((_DWORD *)i + 647)) )
                      v34 = 0;
                    v35 = v34 | v33 & 0xFFFFFFFD;
                    v36 = 0;
                    a1[513] = v35;
                    if ( *((wchar_t **)i + 322) == v12 )
                      v36 = 4;
                    v21 = v35 & 0xFFFFFFFB | v36;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
        }
        else if ( *((wchar_t **)i + 322) == v12 )
        {
          v17 = UserIsWddmConnectedSession();
          a1[411] = *((_DWORD *)i + 646);
          a1[412] = *((_DWORD *)i + 647);
          if ( v17 )
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48, &v49).cx;
            v18 = *((_DWORD *)i + 647) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48, &v49) + 4LL);
            v19 = a1[513] & 0xFFFFFFFE;
            a1[414] = v18;
            a1[513] = v19;
            if ( *((_DWORD *)i + 646) || (v20 = 2, *((_DWORD *)i + 647)) )
              v20 = 0;
            v21 = v20 | v19 & 0xFFFFFFFD | 4;
          }
          else
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48, &v49).cx;
            v37 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48, &v49) + 4LL);
            v38 = a1[4];
            a1[414] = *((_DWORD *)i + 647) + v37;
            a1[479] = v38;
            a1[480] = 0;
            a1[481] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48, &v49).cx;
            a1[482] = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48, &v49) + 4LL);
            *((_QWORD *)a1 + 244) = 0LL;
            a1[490] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48, &v49).cx;
            v39 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48, &v49) + 4LL);
            v40 = a1[513] | 1;
            a1[491] = v39;
            a1[513] = v40;
            a1[483] = 4;
            a1[484] = 60000;
            a1[485] = 1000;
            *((_QWORD *)a1 + 243) = 1LL;
            if ( *((_DWORD *)i + 646) || (v41 = 2, *((_DWORD *)i + 647)) )
              v41 = 0;
            v21 = v41 | v40 & 0xFFFFFFFD | 4;
          }
LABEL_29:
          a1[513] = v21;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    if ( !i && (!a1[507] || !(unsigned int)UserIsWddmConnectedSession()) )
    {
      *(_QWORD *)(a1 + 481) = 0LL;
      *(_QWORD *)(a1 + 483) = 5LL;
      a1[485] = 1;
      *((_QWORD *)a1 + 243) = 1LL;
      *(_OWORD *)(a1 + 411) = 0LL;
      *((_OWORD *)a1 + 122) = 0LL;
      a1[513] = (gProtocolType != 0) | a1[513] & 0xFFFFFFF8;
    }
    v22 = a1 + 415;
    v23 = 128LL;
    v24 = (char *)((char *)v12 - (char *)(a1 + 415));
    do
    {
      if ( v23 == 96 )
        break;
      v25 = *(_WORD *)((char *)v22 + (_QWORD)v24 + 64);
      if ( !v25 )
        break;
      *v22++ = v25;
      --v23;
    }
    while ( v23 );
    v26 = v22 - 1;
    if ( v23 )
      v26 = v22;
    *v26 = 0;
LABEL_42:
    if ( (int)v10 >= 0 )
      return 0LL;
LABEL_70:
    if ( v2 == -21 )
      goto LABEL_73;
    return (unsigned int)v10;
  }
LABEL_87:
  LODWORD(v10) = -1073741275;
  if ( v2 != -21 )
  {
    v47 = WdLogNewEntry5_WdWarning(v11, v7, v9);
    WdLogEvent5_WdWarning(v47);
    goto LABEL_42;
  }
  if ( v12 )
  {
    v4 = 1144084227;
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v11, v7);
    v42[3] = a1[3];
    v42[4] = (unsigned int)a1[2];
    v42[5] = (unsigned int)a1[4];
    v42[6] = *((unsigned int *)v12 + 40);
    v42[7] = 1144084227LL;
  }
  else
  {
    v4 = 1144084226;
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v11, v7);
    v42[3] = a1[3];
    v42[4] = (unsigned int)a1[2];
    v42[5] = (unsigned int)a1[4];
    v42[6] = 1144084226LL;
  }
LABEL_77:
  WdLogEvent5_WdError(v42);
LABEL_73:
  a1[506] = v4;
  return (unsigned int)v10;
}
