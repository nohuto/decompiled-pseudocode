/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C002F618
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C002F510 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C00E472C (xxxCsDdeInitialize.c)
 * Callees:
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C0031B08 (safe_cast_wf_to_PDIALOG.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  char v8; // bl
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  char *v16; // r15
  __int64 v17; // rsi
  unsigned __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // r10
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // esi
  __int64 v33; // rdx
  __int64 *v34; // rax
  __int64 *v35; // rax
  int v36; // edx
  __int64 v37; // rcx
  unsigned int v38; // r8d
  __int64 CurrentProcess; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  HANDLE v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // ecx
  _DWORD *v50; // r9

  v6 = a2;
  v8 = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    goto LABEL_52;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
  v11 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v42 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v11 = gpidLogon;
    if ( v42 != (HANDLE)gpidLogon )
      goto LABEL_52;
  }
  if ( (unsigned __int8)Enforced(v11)
    || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14), (unsigned int)IsProcessDwm(CurrentProcess)) )
  {
    v15 = 1;
    goto LABEL_5;
  }
  v40 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  v41 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(v41 + 772) != *(_DWORD *)(v40 + 772) || (v15 = 1, *(_DWORD *)(v41 + 776) != *(_DWORD *)(v40 + 776)) )
LABEL_52:
    v15 = 0;
LABEL_5:
  if ( !v15 )
    goto LABEL_88;
  if ( (int)v6 >= 0 )
  {
    v19 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
    if ( v6 + 8 > v19 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
      v21 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v21 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v22 != v21 )
      {
        v43 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
        if ( (v43 & 0x10) == 0 )
        {
          v44 = v22 + 864;
          v45 = PsGetCurrentProcessWin32Process(v43);
          if ( v45 )
            v45 &= -(__int64)(*(_QWORD *)v45 != 0LL);
          if ( (unsigned __int8)CheckAccess(v45 + 864, v44) )
            goto LABEL_64;
          v47 = PsGetCurrentProcessWin32Process(v46);
          if ( v47 )
            v47 &= -(__int64)(*(_QWORD *)v47 != 0LL);
          if ( *(int *)(v47 + 12) < 0 )
          {
LABEL_64:
            KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
            v8 = 1;
            goto LABEL_7;
          }
LABEL_88:
          UserSetLastError(5LL);
          return 0LL;
        }
      }
    }
  }
LABEL_7:
  v16 = (char *)a1 + 40;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_8;
  v35 = (__int64 *)safe_cast_wf_to_PDIALOG(a1);
  if ( v35 )
  {
    if ( !(_DWORD)v6 )
    {
      v17 = *v35;
      *v35 = a3;
      goto LABEL_10;
    }
    if ( (_DWORD)v6 == 16 )
    {
      v36 = *(_DWORD *)(*(_QWORD *)v16 + 248LL);
      if ( v36 || *(int *)(*(_QWORD *)v16 + 200LL) < 30 )
      {
        v17 = 0LL;
        if ( v36 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 483LL);
        if ( *(int *)(*(_QWORD *)v16 + 200LL) < 30 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 484LL);
      }
      else
      {
        v17 = v35[2];
        v35[2] = a3;
      }
      goto LABEL_10;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v48 = 1415LL;
      goto LABEL_85;
    }
  }
  else
  {
    if ( (int)v6 < 0 )
      goto LABEL_9;
    v23 = *(_QWORD *)v16;
    if ( (int)v6 < *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(*(_QWORD *)v16 + 42LL) & 0x2FFFu) - 666) + 328) - 328 )
    {
      v24 = *(_WORD *)(*(_QWORD *)v16 + 42LL) & 0x2FFF;
      if ( v24 <= 0x2A6 )
      {
        if ( v24 == 678 || (v38 = v24 - 673) == 0 || (v25 = v38 - 1) == 0 )
        {
LABEL_23:
          if ( (_DWORD)v6 )
            goto LABEL_71;
          if ( *(_DWORD *)(v23 + 248) )
            v27 = **((_QWORD **)a1 + 35);
          else
            v27 = **(_QWORD **)(v23 + 296);
LABEL_26:
          if ( !v27 || *(char *)(*(_QWORD *)v16 + 19LL) < 0 )
          {
LABEL_27:
            v28 = *(_QWORD *)v16;
            v29 = *(unsigned int *)(*(_QWORD *)v16 + 248LL);
            if ( (unsigned __int64)(unsigned int)v6 + 8 <= (unsigned int)(v29 + *(_DWORD *)(*(_QWORD *)v16 + 200LL)) )
            {
              if ( !a5 )
                goto LABEL_30;
              v30 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
              if ( !_bittest16((const signed __int16 *)(v30 + 6), 8u) )
                goto LABEL_30;
              v49 = 0;
              v50 = &gDefaultServerClasses;
              while ( *(_WORD *)v30 != *(_WORD *)(gpsi + 2LL * ((*v50 >> 3) & 0x1F) + 868) )
              {
                ++v49;
                v50 += 12;
                if ( v49 >= 8 )
                  goto LABEL_30;
              }
              if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * v49 + 6)
                || (*v50 & 0xF8) == 0xB0 && (unsigned __int64)((int)v6 + 8LL) <= 0xFFFFFFFFFFFFFEE8uLL )
              {
LABEL_30:
                v31 = (int)v6;
                if ( (int)v6 + 8LL <= v29 )
                {
                  v37 = *((_QWORD *)a1 + 35);
                  v17 = *(_QWORD *)((int)v6 + v37);
                  *(_QWORD *)(v31 + v37) = a3;
                }
                else
                {
                  v32 = v6 - v29;
                  v33 = *(_QWORD *)(v28 + 296);
                  if ( (*(_DWORD *)(v28 + 232) & 0x10) != 0 )
                    v34 = (__int64 *)(v33 + v32 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
                  else
                    v34 = (__int64 *)(v32 + v33);
                  v17 = *v34;
                  *v34 = a3;
                }
                goto LABEL_10;
              }
              v48 = 5LL;
              goto LABEL_85;
            }
          }
LABEL_71:
          v48 = 1413LL;
LABEL_85:
          UserSetLastError(v48);
          if ( v8 )
            KeDetachProcess();
          return 0LL;
        }
      }
      else
      {
        v25 = v24 - 679;
        if ( !v25 )
        {
          if ( (_DWORD)v6 != 8 )
            goto LABEL_71;
          v27 = **(_QWORD **)(v23 + 296);
          goto LABEL_26;
        }
      }
      v26 = v25 - 1;
      if ( v26 && v26 - 1 > 1 )
        goto LABEL_71;
      goto LABEL_23;
    }
  }
LABEL_8:
  if ( (int)v6 >= 0 )
    goto LABEL_27;
LABEL_9:
  v17 = xxxSetWindowData(a1);
LABEL_10:
  if ( v8 )
    KeDetachProcess();
  return v17;
}
