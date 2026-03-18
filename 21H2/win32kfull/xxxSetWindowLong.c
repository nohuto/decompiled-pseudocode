/*
 * XREFs of xxxSetWindowLong @ 0x1C00E4444
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetWindowLong @ 0x1C00E4340 (NtUserSetWindowLong.c)
 * Callees:
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     FCallerOk @ 0x1C00E464C (FCallerOk.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C014DE84 (safe_cast_wf_to_PDIALOG.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  char v9; // bl
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // rdx
  unsigned int *v19; // rax
  unsigned int v20; // edi
  int v22; // ecx
  unsigned int *v23; // rax
  __int64 v24; // rcx
  int v25; // r8d
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // r8d
  __int64 v32; // rcx
  _DWORD *v33; // r10
  __int64 v34; // rcx

  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_57;
  if ( (int)v7 >= 0 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
    v10 = v7 + 4;
    if ( v7 + 4 > v11 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v12 != PsGetCurrentProcessWin32Process(v11) )
      {
        v26 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
        if ( (v26 & 0x10) == 0 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
          if ( (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v12 + 880)
            || *(int *)(PsGetCurrentProcessWin32Process(v28) + 12) < 0 )
          {
            KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
            v9 = 1;
            goto LABEL_5;
          }
LABEL_57:
          UserSetLastError(5LL, v10);
          return 0LL;
        }
      }
    }
  }
LABEL_5:
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_6;
  v23 = (unsigned int *)safe_cast_wf_to_PDIALOG(a1);
  v10 = (__int64)v23;
  if ( v23 )
  {
    if ( !(_DWORD)v7 )
    {
      v20 = *v23;
      *(_QWORD *)v23 = (int)v6;
      goto LABEL_14;
    }
    if ( (_DWORD)v7 == 16 )
    {
      v24 = *((_QWORD *)a1 + 5);
      v25 = *(_DWORD *)(v24 + 248);
      if ( v25 || *(int *)(v24 + 200) < 30 )
      {
        v20 = 0;
        if ( v25 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
          v24 = *((_QWORD *)a1 + 5);
        }
        if ( *(int *)(v24 + 200) < 30 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
      }
      else
      {
        v20 = v23[4];
        *((_QWORD *)v23 + 2) = (int)v6;
      }
      goto LABEL_14;
    }
    if ( (unsigned int)v7 <= 0x1D )
    {
      v29 = 1415LL;
      goto LABEL_54;
    }
    goto LABEL_6;
  }
  if ( (int)v7 < 0 )
    goto LABEL_19;
  v30 = *((_QWORD *)a1 + 5);
  v31 = *(_WORD *)(v30 + 42) & 0x2FFF;
  v10 = (unsigned int)(v31 - 666);
  if ( (int)v7 >= *(unsigned __int16 *)(gpsi + 2 * v10 + 328) - 328 )
  {
LABEL_6:
    if ( (int)v7 >= 0 )
      goto LABEL_7;
LABEL_19:
    if ( (unsigned int)(v7 + 21) <= 9 )
    {
      v22 = 547;
      if ( _bittest(&v22, v7 + 21) )
      {
        v20 = xxxSetWindowData(a1, v7, v6, a4);
        goto LABEL_14;
      }
    }
LABEL_45:
    v29 = 1413LL;
    goto LABEL_54;
  }
  if ( v31 != 679
    || (_DWORD)v7 && ((_DWORD)v7 != 8 || **(_DWORD **)(v30 + 296) && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0) )
  {
    goto LABEL_45;
  }
LABEL_7:
  v13 = *((_QWORD *)a1 + 5);
  v14 = *(unsigned int *)(v13 + 248);
  if ( (unsigned __int64)(unsigned int)v7 + 4 > (unsigned int)(v14 + *(_DWORD *)(v13 + 200)) )
    goto LABEL_45;
  if ( a5 )
  {
    v15 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
    if ( _bittest16((const signed __int16 *)(v15 + 6), 8u) )
    {
      v32 = 0LL;
      v33 = &gDefaultServerClasses;
      while ( *(_WORD *)v15 != *(_WORD *)(gpsi + 2LL * ((*v33 >> 3) & 0x1F) + 868) )
      {
        v32 = (unsigned int)(v32 + 1);
        v33 += 12;
        if ( (unsigned int)v32 >= 8 )
          goto LABEL_10;
      }
      if ( (int)v7 < *((_DWORD *)&gDefaultServerClasses + 12 * v32 + 6) )
      {
        v10 = *v33 & 0xF8;
        if ( (*(_BYTE *)v33 & 0xF8) != 0xB0 || (unsigned __int64)((int)v7 + 4LL) > 0xFFFFFFFFFFFFFEE8uLL )
        {
          v29 = 5LL;
LABEL_54:
          UserSetLastError(v29, v10);
          if ( v9 )
            KeDetachProcess();
          return 0LL;
        }
      }
    }
  }
LABEL_10:
  v16 = (int)v7;
  if ( (int)v7 + 4LL <= v14 )
  {
    v34 = *((_QWORD *)a1 + 35);
    v20 = *(_DWORD *)((int)v7 + v34);
    *(_DWORD *)(v16 + v34) = v6;
  }
  else
  {
    v17 = v7 - v14;
    v18 = *(_QWORD *)(v13 + 296);
    if ( (*(_DWORD *)(v13 + 232) & 0x10) != 0 )
      v19 = (unsigned int *)(v18 + v17 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v19 = (unsigned int *)(v17 + v18);
    v20 = *v19;
    *v19 = v6;
  }
LABEL_14:
  if ( v9 )
    KeDetachProcess();
  return v20;
}
