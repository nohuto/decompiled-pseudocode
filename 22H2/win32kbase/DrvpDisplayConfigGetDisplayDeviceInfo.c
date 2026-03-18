/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0034688
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0015D50 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001CAB4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     DCompositionIsShellProcess @ 0x1C00252E4 (DCompositionIsShellProcess.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00AAD9C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1, __int64 a2)
{
  int v2; // edi
  int v3; // r12d
  __int64 DxgkWin32kInterface; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // r13
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // r11
  __int64 *i; // r14
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  struct _ERESOURCE *v24; // rcx
  _WORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int16 v28; // ax
  _WORD *v29; // rax
  int IsWddmConnectedSession; // eax
  struct tagSIZE v32; // rax
  int v33; // r9d
  struct tagSIZE v34; // rax
  int v35; // r10d
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // [rsp+70h] [rbp+40h]
  __int64 *v46; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v3 = *a1;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    v8 = -1073741789;
    if ( v3 == -21 )
    {
      v2 = 1144084225;
      WdLogSingleEntry3(2LL, (unsigned int)a1[1], 2056LL, 1144084225LL);
      goto LABEL_78;
    }
    return v8;
  }
  a1[513] = 0;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(DxgkWin32kInterface + 256))(
         *((_QWORD *)a1 + 1),
         (unsigned int)a1[4],
         0LL,
         a1);
  v8 = v6;
  if ( v6 < 0 && v3 == -21 )
  {
    WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4], v6);
    v2 = a1[506];
    goto LABEL_78;
  }
  if ( a1[4] == -1 )
    goto LABEL_44;
  v9 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
  v10 = *(_QWORD *)(v9 + 1264);
  if ( !v10 )
    goto LABEL_85;
  v11 = a1[2];
  while ( _bittest((const signed __int32 *)(v10 + 160), 0x17u) )
  {
    if ( v11 == *(_DWORD *)(v10 + 240) )
    {
      v12 = *(_DWORD *)(v10 + 244);
      goto LABEL_9;
    }
LABEL_25:
    v10 = *(_QWORD *)(v10 + 128);
    if ( !v10 )
      goto LABEL_11;
  }
  if ( v11 != *(_DWORD *)(v10 + 288) )
    goto LABEL_25;
  v12 = *(_DWORD *)(v10 + 292);
LABEL_9:
  if ( a1[3] != v12 || *(_DWORD *)(v10 + 248) != a1[4] )
    goto LABEL_25;
LABEL_11:
  if ( v10 && (*(_QWORD *)(v10 + 144) || *(_QWORD *)(v10 + 296)) )
  {
    if ( !_bittest((const signed __int32 *)(v10 + 160), 0x17u) && !*(_DWORD *)(v10 + 288) && !*(_DWORD *)(v10 + 292) )
      WdLogSingleEntry0(1LL);
    if ( (*(_DWORD *)(v10 + 164) & 1) != 0 )
    {
      v8 = -1073741130;
      if ( v3 == -21 )
      {
        v2 = 1144084228;
        WdLogSingleEntry5(
          2LL,
          a1[3],
          (unsigned int)a1[2],
          (unsigned int)a1[4],
          *(unsigned int *)(v10 + 160),
          1144084228LL);
      }
      else
      {
        WdLogSingleEntry1(4LL, -1073741130LL);
      }
      goto LABEL_77;
    }
    EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v9 + 8), 16LL);
    if ( !UserIsCurrentProcessDwm(v14, v13, v15) && !DCompositionIsShellProcess()
      || (IsWddmConnectedSession = UserIsWddmConnectedSession(), v16 = 1, !IsWddmConnectedSession) )
    {
      v16 = 0;
    }
    for ( i = *(__int64 **)(v9 + 6080); i; i = (__int64 *)*i )
    {
      v18 = *((_DWORD *)i + 10);
      v46 = i;
      if ( (v18 & 0x401) == 1 )
      {
        if ( v16 )
        {
          if ( (v18 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v46) )
            {
              if ( a1[411] == *((_DWORD *)i + 640) && a1[412] == *((_DWORD *)i + 641) )
              {
                v32 = PDEVOBJ::sizl((PDEVOBJ *)&v46);
                if ( a1[413] == v33 + *(_DWORD *)v32.cx )
                {
                  v34 = PDEVOBJ::sizl((PDEVOBJ *)&v46);
                  if ( a1[414] == v35 + *(_DWORD *)(*(_QWORD *)&v34 + 4LL) )
                  {
                    v36 = a1[513] & 0xFFFFFFFE;
                    a1[513] = v36;
                    if ( *((_DWORD *)i + 640) || (v37 = 2, *((_DWORD *)i + 641)) )
                      v37 = 0;
                    v38 = v37 | v36 & 0xFFFFFFFD;
                    v39 = 0;
                    a1[513] = v38;
                    if ( i[319] == v10 )
                      v39 = 4;
                    v23 = v38 & 0xFFFFFFFB | v39;
                    goto LABEL_31;
                  }
                }
              }
            }
          }
        }
        else if ( i[319] == v10 )
        {
          v45 = *((_DWORD *)i + 640);
          v19 = UserIsWddmConnectedSession();
          a1[411] = v45;
          a1[412] = *((_DWORD *)i + 641);
          if ( v19 )
          {
            a1[413] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v46).cx + *((_DWORD *)i + 640);
            v20 = *((_DWORD *)i + 641) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v46) + 4LL);
            v21 = a1[513] & 0xFFFFFFFE;
            a1[414] = v20;
            a1[513] = v21;
            if ( *((_DWORD *)i + 640) || (v22 = 2, *((_DWORD *)i + 641)) )
              v22 = 0;
            v23 = v22 | v21 & 0xFFFFFFFD | 4;
          }
          else
          {
            a1[413] = *((_DWORD *)i + 640) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v46).cx;
            v40 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v46) + 4LL);
            v41 = a1[4];
            a1[414] = *((_DWORD *)i + 641) + v40;
            a1[479] = v41;
            a1[480] = 0;
            a1[481] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v46).cx;
            a1[482] = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v46) + 4LL);
            *((_QWORD *)a1 + 244) = 0LL;
            a1[490] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v46).cx;
            v42 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v46) + 4LL);
            v43 = a1[513] | 1;
            a1[491] = v42;
            a1[513] = v43;
            a1[483] = 4;
            a1[484] = 60000;
            a1[485] = 1000;
            *((_QWORD *)a1 + 243) = 1LL;
            if ( *((_DWORD *)i + 640) || (v44 = 2, *((_DWORD *)i + 641)) )
              v44 = 0;
            v23 = v44 | v43 & 0xFFFFFFFD | 4;
          }
LABEL_31:
          a1[513] = v23;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v9 + 8));
    v24 = *(struct _ERESOURCE **)(v9 + 8);
    if ( v24 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v24);
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
    v25 = a1 + 415;
    v26 = 128LL;
    v27 = v10 - (_QWORD)(a1 + 415);
    do
    {
      if ( v26 == 96 )
        break;
      v28 = *(_WORD *)((char *)v25 + v27 + 64);
      if ( !v28 )
        break;
      *v25++ = v28;
      --v26;
    }
    while ( v26 );
    v29 = v25 - 1;
    if ( v26 )
      v29 = v25;
    *v29 = 0;
LABEL_44:
    if ( (v8 & 0x80000000) == 0 )
      return 0LL;
LABEL_77:
    if ( v3 == -21 )
      goto LABEL_78;
    return v8;
  }
LABEL_85:
  v8 = -1073741275;
  if ( v3 == -21 )
  {
    if ( v10 )
    {
      v2 = 1144084227;
      WdLogSingleEntry5(
        2LL,
        a1[3],
        (unsigned int)a1[2],
        (unsigned int)a1[4],
        *(unsigned int *)(v10 + 160),
        1144084227LL);
    }
    else
    {
      v2 = 1144084226;
      WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4], 1144084226LL);
    }
LABEL_78:
    a1[506] = v2;
  }
  else
  {
    WdLogSingleEntry0(3LL);
  }
  return v8;
}
