/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0070D14
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0071D24 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DCompositionIsShellProcess @ 0x1C0071E50 (DCompositionIsShellProcess.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1)
{
  int v1; // r15d
  int v3; // esi
  __int64 v4; // rdx
  int v5; // r14d
  int v6; // ecx
  wchar_t *v7; // rdi
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  char v15; // r11
  struct PDEV *i; // rsi
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  HSEMAPHORE v23; // rcx
  _WORD *v24; // rcx
  __int64 v25; // rdx
  char *v26; // rdi
  __int16 v27; // ax
  _WORD *v28; // rax
  int IsWddmConnectedSession; // eax
  struct tagSIZE v31; // rax
  int v32; // r9d
  struct tagSIZE v33; // rax
  int v34; // r10d
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  struct PDEV *v44; // [rsp+70h] [rbp+40h] BYREF

  v1 = *a1;
  v3 = 0;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    v5 = -1073741789;
    if ( v1 == -21 )
    {
      v3 = 1144084225;
      WdLogSingleEntry3(2LL, (unsigned int)a1[1], 2056LL, 1144084225LL);
      goto LABEL_78;
    }
    return (unsigned int)v5;
  }
  v4 = (unsigned int)a1[4];
  a1[513] = 0;
  v5 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, int *))qword_1C0296760)(*((_QWORD *)a1 + 1), v4, 0LL, a1);
  if ( v5 < 0 && v1 == -21 )
  {
    WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2]);
    v3 = a1[506];
    goto LABEL_78;
  }
  v6 = a1[4];
  if ( v6 == -1 )
    goto LABEL_42;
  v7 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_85;
  v8 = a1[2];
  while ( _bittest((const signed __int32 *)v7 + 40, 0x17u) )
  {
    if ( v8 == *((_DWORD *)v7 + 62) )
    {
      v9 = *((_DWORD *)v7 + 63);
      goto LABEL_9;
    }
LABEL_44:
    v7 = (wchar_t *)*((_QWORD *)v7 + 16);
    if ( !v7 )
      goto LABEL_11;
  }
  if ( v8 != *((_DWORD *)v7 + 74) )
    goto LABEL_44;
  v9 = *((_DWORD *)v7 + 75);
LABEL_9:
  if ( a1[3] != v9 || *((_DWORD *)v7 + 64) != v6 )
    goto LABEL_44;
LABEL_11:
  if ( v7 && (*((_QWORD *)v7 + 18) || *((_QWORD *)v7 + 38)) )
  {
    if ( !_bittest((const signed __int32 *)v7 + 40, 0x17u) && !*((_DWORD *)v7 + 74) && !*((_DWORD *)v7 + 75) )
      WdLogSingleEntry0(1LL);
    if ( (*((_DWORD *)v7 + 41) & 1) != 0 )
    {
      v5 = -1073741130;
      if ( v1 == -21 )
      {
        v3 = 1144084228;
        WdLogSingleEntry5(
          2LL,
          a1[3],
          (unsigned int)a1[2],
          (unsigned int)a1[4],
          *((unsigned int *)v7 + 40),
          1144084228LL);
      }
      else
      {
        WdLogSingleEntry1(4LL, -1073741130LL);
      }
      goto LABEL_77;
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    if ( !UserIsCurrentProcessDwm(v11, v10, v12, v13) && !(unsigned __int8)DCompositionIsShellProcess()
      || (IsWddmConnectedSession = UserIsWddmConnectedSession(v14), v15 = 1, !IsWddmConnectedSession) )
    {
      v15 = 0;
    }
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      v17 = *((_DWORD *)i + 10);
      v44 = i;
      if ( (v17 & 1) != 0 && (v17 & 0x400) == 0 )
      {
        if ( v15 )
        {
          if ( (v17 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v44) )
            {
              if ( a1[411] == *((_DWORD *)i + 640) && a1[412] == *((_DWORD *)i + 641) )
              {
                v31 = PDEVOBJ::sizl((PDEVOBJ *)&v44);
                if ( a1[413] == v32 + *(_DWORD *)v31.cx )
                {
                  v33 = PDEVOBJ::sizl((PDEVOBJ *)&v44);
                  if ( a1[414] == v34 + *(_DWORD *)(*(_QWORD *)&v33 + 4LL) )
                  {
                    v35 = a1[513] & 0xFFFFFFFE;
                    a1[513] = v35;
                    if ( *((_DWORD *)i + 640) || (v36 = 2, *((_DWORD *)i + 641)) )
                      v36 = 0;
                    v37 = v36 | v35 & 0xFFFFFFFD;
                    v38 = 0;
                    a1[513] = v37;
                    if ( *((wchar_t **)i + 319) == v7 )
                      v38 = 4;
                    v22 = v37 & 0xFFFFFFFB | v38;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
        }
        else if ( *((wchar_t **)i + 319) == v7 )
        {
          v18 = UserIsWddmConnectedSession(v14);
          a1[411] = *((_DWORD *)i + 640);
          a1[412] = *((_DWORD *)i + 641);
          if ( v18 )
          {
            a1[413] = *((_DWORD *)i + 640) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v44).cx;
            v19 = *((_DWORD *)i + 641) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v44) + 4LL);
            v20 = a1[513] & 0xFFFFFFFE;
            a1[414] = v19;
            a1[513] = v20;
            if ( *((_DWORD *)i + 640) || (v21 = 2, *((_DWORD *)i + 641)) )
              v21 = 0;
            v22 = v21 | v20 & 0xFFFFFFFD | 4;
          }
          else
          {
            a1[413] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v44).cx + *((_DWORD *)i + 640);
            v39 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v44) + 4LL);
            v40 = a1[4];
            a1[414] = *((_DWORD *)i + 641) + v39;
            a1[479] = v40;
            a1[480] = 0;
            a1[481] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v44).cx;
            a1[482] = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v44) + 4LL);
            *((_QWORD *)a1 + 244) = 0LL;
            a1[490] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v44).cx;
            v41 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v44) + 4LL);
            v42 = a1[513] | 1;
            a1[491] = v41;
            a1[513] = v42;
            a1[483] = 4;
            a1[484] = 60000;
            a1[485] = 1000;
            *((_QWORD *)a1 + 243) = 1LL;
            if ( *((_DWORD *)i + 640) || (v43 = 2, *((_DWORD *)i + 641)) )
              v43 = 0;
            v22 = v43 | v42 & 0xFFFFFFFD | 4;
          }
LABEL_29:
          a1[513] = v22;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    v23 = ghsemDriverMgmt;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    if ( !i && (!a1[507] || !(unsigned int)UserIsWddmConnectedSession(v23)) )
    {
      *(_QWORD *)(a1 + 481) = 0LL;
      *(_QWORD *)(a1 + 483) = 5LL;
      a1[485] = 1;
      *((_QWORD *)a1 + 243) = 1LL;
      *(_OWORD *)(a1 + 411) = 0LL;
      *((_OWORD *)a1 + 122) = 0LL;
      a1[513] = (gProtocolType != 0) | a1[513] & 0xFFFFFFF8;
    }
    v24 = a1 + 415;
    v25 = 128LL;
    v26 = (char *)((char *)v7 - (char *)(a1 + 415));
    do
    {
      if ( v25 == 96 )
        break;
      v27 = *(_WORD *)((char *)v24 + (_QWORD)v26 + 64);
      if ( !v27 )
        break;
      *v24++ = v27;
      --v25;
    }
    while ( v25 );
    v28 = v24 - 1;
    if ( v25 )
      v28 = v24;
    *v28 = 0;
LABEL_42:
    v3 = 0;
    if ( v5 >= 0 )
      return 0LL;
LABEL_77:
    if ( v1 == -21 )
      goto LABEL_78;
    return (unsigned int)v5;
  }
LABEL_85:
  v5 = -1073741275;
  if ( v1 == -21 )
  {
    if ( v7 )
    {
      v3 = 1144084227;
      WdLogSingleEntry5(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4], *((unsigned int *)v7 + 40), 1144084227LL);
    }
    else
    {
      v3 = 1144084226;
      WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2]);
    }
LABEL_78:
    a1[506] = v3;
  }
  else
  {
    WdLogSingleEntry0(3LL);
  }
  return (unsigned int)v5;
}
