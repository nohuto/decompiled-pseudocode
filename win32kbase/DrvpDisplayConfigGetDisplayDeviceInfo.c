__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1, __int64 a2)
{
  int v2; // edi
  int v3; // r12d
  __int64 DxgkWin32kInterface; // rax
  __int64 v6; // rcx
  int v7; // r15d
  __int64 v8; // r13
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r11
  __int64 *i; // r14
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  struct _ERESOURCE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _WORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int16 v30; // ax
  _WORD *v31; // rax
  int IsWddmConnectedSession; // eax
  struct tagSIZE v34; // rax
  int v35; // r9d
  struct tagSIZE v36; // rax
  int v37; // r10d
  unsigned int v38; // ecx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // [rsp+70h] [rbp+40h]
  __int64 *v48; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v3 = *a1;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    v7 = -1073741789;
    if ( v3 == -21 )
    {
      v2 = 1144084225;
      WdLogSingleEntry3(2LL, (unsigned int)a1[1], 2056LL, 1144084225LL);
      goto LABEL_78;
    }
    return (unsigned int)v7;
  }
  a1[513] = 0;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(DxgkWin32kInterface + 256))(
         *((_QWORD *)a1 + 1),
         (unsigned int)a1[4],
         0LL,
         a1);
  if ( v7 < 0 && v3 == -21 )
  {
    WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4]);
    v2 = a1[506];
    goto LABEL_78;
  }
  if ( a1[4] == -1 )
    goto LABEL_44;
  v8 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
  v9 = *(_QWORD *)(v8 + 1264);
  if ( !v9 )
    goto LABEL_85;
  v10 = a1[2];
  while ( _bittest((const signed __int32 *)(v9 + 160), 0x17u) )
  {
    if ( v10 == *(_DWORD *)(v9 + 240) )
    {
      v11 = *(_DWORD *)(v9 + 244);
      goto LABEL_9;
    }
LABEL_25:
    v9 = *(_QWORD *)(v9 + 128);
    if ( !v9 )
      goto LABEL_11;
  }
  if ( v10 != *(_DWORD *)(v9 + 288) )
    goto LABEL_25;
  v11 = *(_DWORD *)(v9 + 292);
LABEL_9:
  if ( a1[3] != v11 || *(_DWORD *)(v9 + 248) != a1[4] )
    goto LABEL_25;
LABEL_11:
  if ( v9 && (*(_QWORD *)(v9 + 144) || *(_QWORD *)(v9 + 296)) )
  {
    if ( !_bittest((const signed __int32 *)(v9 + 160), 0x17u) && !*(_DWORD *)(v9 + 288) && !*(_DWORD *)(v9 + 292) )
      WdLogSingleEntry0(1LL);
    if ( (*(_DWORD *)(v9 + 164) & 1) != 0 )
    {
      v7 = -1073741130;
      if ( v3 == -21 )
      {
        v2 = 1144084228;
        WdLogSingleEntry5(
          2LL,
          a1[3],
          (unsigned int)a1[2],
          (unsigned int)a1[4],
          *(unsigned int *)(v9 + 160),
          1144084228LL);
      }
      else
      {
        WdLogSingleEntry1(4LL, -1073741130LL);
      }
      goto LABEL_77;
    }
    EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v8 + 8), 16);
    if ( !UserIsCurrentProcessDwm(v13, v12, v14, v15) && !DCompositionIsShellProcess()
      || (IsWddmConnectedSession = UserIsWddmConnectedSession(), v16 = 1, !IsWddmConnectedSession) )
    {
      v16 = 0;
    }
    for ( i = *(__int64 **)(v8 + 6080); i; i = (__int64 *)*i )
    {
      v18 = *((_DWORD *)i + 10);
      v48 = i;
      if ( (v18 & 0x401) == 1 )
      {
        if ( v16 )
        {
          if ( (v18 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v48) )
            {
              if ( a1[411] == *((_DWORD *)i + 640) && a1[412] == *((_DWORD *)i + 641) )
              {
                v34 = PDEVOBJ::sizl((PDEVOBJ *)&v48);
                if ( a1[413] == v35 + *(_DWORD *)v34.cx )
                {
                  v36 = PDEVOBJ::sizl((PDEVOBJ *)&v48);
                  if ( a1[414] == v37 + *(_DWORD *)(*(_QWORD *)&v36 + 4LL) )
                  {
                    v38 = a1[513] & 0xFFFFFFFE;
                    a1[513] = v38;
                    if ( *((_DWORD *)i + 640) || (v39 = 2, *((_DWORD *)i + 641)) )
                      v39 = 0;
                    v40 = v39 | v38 & 0xFFFFFFFD;
                    v41 = 0;
                    a1[513] = v40;
                    if ( i[319] == v9 )
                      v41 = 4;
                    v23 = v40 & 0xFFFFFFFB | v41;
                    goto LABEL_31;
                  }
                }
              }
            }
          }
        }
        else if ( i[319] == v9 )
        {
          v47 = *((_DWORD *)i + 640);
          v19 = UserIsWddmConnectedSession();
          a1[411] = v47;
          a1[412] = *((_DWORD *)i + 641);
          if ( v19 )
          {
            a1[413] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48).cx + *((_DWORD *)i + 640);
            v20 = *((_DWORD *)i + 641) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48) + 4LL);
            v21 = a1[513] & 0xFFFFFFFE;
            a1[414] = v20;
            a1[513] = v21;
            if ( *((_DWORD *)i + 640) || (v22 = 2, *((_DWORD *)i + 641)) )
              v22 = 0;
            v23 = v22 | v21 & 0xFFFFFFFD | 4;
          }
          else
          {
            a1[413] = *((_DWORD *)i + 640) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48).cx;
            v42 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48) + 4LL);
            v43 = a1[4];
            a1[414] = *((_DWORD *)i + 641) + v42;
            a1[479] = v43;
            a1[480] = 0;
            a1[481] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48).cx;
            a1[482] = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48) + 4LL);
            *((_QWORD *)a1 + 244) = 0LL;
            a1[490] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48).cx;
            v44 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48) + 4LL);
            v45 = a1[513] | 1;
            a1[491] = v44;
            a1[513] = v45;
            a1[483] = 4;
            a1[484] = 60000;
            a1[485] = 1000;
            *((_QWORD *)a1 + 243) = 1LL;
            if ( *((_DWORD *)i + 640) || (v46 = 2, *((_DWORD *)i + 641)) )
              v46 = 0;
            v23 = v46 | v45 & 0xFFFFFFFD | 4;
          }
LABEL_31:
          a1[513] = v23;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v8 + 8));
    v24 = *(struct _ERESOURCE **)(v8 + 8);
    if ( v24 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v24);
      PsLeavePriorityRegion(v26, v25);
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
    v27 = a1 + 415;
    v28 = 128LL;
    v29 = v9 - (_QWORD)(a1 + 415);
    do
    {
      if ( v28 == 96 )
        break;
      v30 = *(_WORD *)((char *)v27 + v29 + 64);
      if ( !v30 )
        break;
      *v27++ = v30;
      --v28;
    }
    while ( v28 );
    v31 = v27 - 1;
    if ( v28 )
      v31 = v27;
    *v31 = 0;
LABEL_44:
    if ( v7 >= 0 )
      return 0LL;
LABEL_77:
    if ( v3 == -21 )
      goto LABEL_78;
    return (unsigned int)v7;
  }
LABEL_85:
  v7 = -1073741275;
  if ( v3 == -21 )
  {
    if ( v9 )
    {
      v2 = 1144084227;
      WdLogSingleEntry5(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4], *(unsigned int *)(v9 + 160), 1144084227LL);
    }
    else
    {
      v2 = 1144084226;
      WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4]);
    }
LABEL_78:
    a1[506] = v2;
  }
  else
  {
    WdLogSingleEntry0(3LL);
  }
  return (unsigned int)v7;
}
