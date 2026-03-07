__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  char v9; // bl
  __int64 v10; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  char *v24; // r14
  __int64 v25; // r8
  unsigned __int64 v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // esi
  __int64 v30; // rdx
  unsigned int *v31; // rax
  unsigned int v32; // esi
  int v34; // ecx
  int v35; // ecx
  HANDLE v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int *v42; // rax
  int v43; // edx
  unsigned int v44; // ecx
  _DWORD *v45; // r9
  __int64 v46; // rcx

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v10 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v10 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    goto LABEL_34;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v10);
  v12 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v36 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v12 = gpidLogon;
    if ( v36 != (HANDLE)gpidLogon )
      goto LABEL_34;
  }
  if ( (unsigned __int8)Enforced(v12)
    || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15), (unsigned int)IsProcessDwm(CurrentProcess)) )
  {
    v19 = 1;
    goto LABEL_7;
  }
  v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  v18 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(v18 + 772) != *(_DWORD *)(v17 + 772) || (v19 = 1, *(_DWORD *)(v18 + 776) != *(_DWORD *)(v17 + 776)) )
LABEL_34:
    v19 = 0;
LABEL_7:
  if ( !v19 )
    goto LABEL_75;
  if ( (int)v7 >= 0 )
  {
    v20 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
    if ( v7 + 4 > v20 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      v22 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v22 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v23 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v23 != v22 )
      {
        v37 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
        if ( (v37 & 0x10) == 0 )
        {
          v38 = v23 + 864;
          v39 = PsGetCurrentProcessWin32Process(v37);
          if ( v39 )
            v39 &= -(__int64)(*(_QWORD *)v39 != 0LL);
          if ( (unsigned __int8)CheckAccess(v39 + 864, v38) )
            goto LABEL_42;
          v41 = PsGetCurrentProcessWin32Process(v40);
          if ( v41 )
            v41 &= -(__int64)(*(_QWORD *)v41 != 0LL);
          if ( *(int *)(v41 + 12) < 0 )
          {
LABEL_42:
            KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
            v9 = 1;
            goto LABEL_13;
          }
LABEL_75:
          UserSetLastError(5);
          return 0LL;
        }
      }
    }
  }
LABEL_13:
  v24 = (char *)a1 + 40;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_14;
  v42 = (unsigned int *)safe_cast_wf_to_PDIALOG((__int64)a1);
  if ( v42 )
  {
    if ( !(_DWORD)v7 )
    {
      v32 = *v42;
      *(_QWORD *)v42 = (int)v6;
      goto LABEL_22;
    }
    if ( (_DWORD)v7 == 16 )
    {
      v43 = *(_DWORD *)(*(_QWORD *)v24 + 248LL);
      if ( v43 || *(int *)(*(_QWORD *)v24 + 200LL) < 30 )
      {
        v32 = 0;
        if ( v43 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 684LL);
        if ( *(int *)(*(_QWORD *)v24 + 200LL) < 30 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 685LL);
      }
      else
      {
        v32 = v42[4];
        *((_QWORD *)v42 + 2) = (int)v6;
      }
      goto LABEL_22;
    }
    if ( (unsigned int)v7 <= 0x1D )
    {
      v35 = 1415;
      goto LABEL_72;
    }
    goto LABEL_14;
  }
  if ( (int)v7 < 0 )
    goto LABEL_27;
  if ( (int)v7 >= *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(*(_QWORD *)v24 + 42LL) & 0x2FFFu) - 666) + 328) - 328 )
  {
LABEL_14:
    if ( (int)v7 >= 0 )
      goto LABEL_15;
LABEL_27:
    if ( (unsigned int)(v7 + 21) <= 9 )
    {
      v34 = 547;
      if ( _bittest(&v34, v7 + 21) )
      {
        v32 = xxxSetWindowData(a1, v7, v6, a4);
        goto LABEL_22;
      }
    }
LABEL_30:
    v35 = 1413;
    goto LABEL_72;
  }
  if ( (*(_WORD *)(*(_QWORD *)v24 + 42LL) & 0x2FFF) != 0x2A7
    || (_DWORD)v7 && ((_DWORD)v7 != 8 || **(_DWORD **)(*(_QWORD *)v24 + 296LL) && *(char *)(*(_QWORD *)v24 + 19LL) >= 0) )
  {
    goto LABEL_30;
  }
LABEL_15:
  v25 = *(_QWORD *)v24;
  v26 = *(unsigned int *)(*(_QWORD *)v24 + 248LL);
  if ( (unsigned __int64)(unsigned int)v7 + 4 > (unsigned int)(v26 + *(_DWORD *)(*(_QWORD *)v24 + 200LL)) )
    goto LABEL_30;
  if ( a5 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
    if ( _bittest16((const signed __int16 *)(v27 + 6), 8u) )
    {
      v44 = 0;
      v45 = &gDefaultServerClasses;
      while ( *(_WORD *)v27 != *(_WORD *)(gpsi + 2LL * ((*v45 >> 3) & 0x1F) + 868) )
      {
        ++v44;
        v45 += 12;
        if ( v44 >= 8 )
          goto LABEL_18;
      }
      if ( (int)v7 < *((_DWORD *)&gDefaultServerClasses + 12 * v44 + 6)
        && ((*v45 & 0xF8) != 0xB0 || (unsigned __int64)((int)v7 + 4LL) > 0xFFFFFFFFFFFFFEE8uLL) )
      {
        v35 = 5;
LABEL_72:
        UserSetLastError(v35);
        if ( v9 )
          KeDetachProcess();
        return 0LL;
      }
    }
  }
LABEL_18:
  v28 = (int)v7;
  if ( (int)v7 + 4LL <= v26 )
  {
    v46 = *((_QWORD *)a1 + 35);
    v32 = *(_DWORD *)((int)v7 + v46);
    *(_DWORD *)(v28 + v46) = v6;
  }
  else
  {
    v29 = v7 - v26;
    v30 = *(_QWORD *)(v25 + 296);
    if ( (*(_DWORD *)(v25 + 232) & 0x10) != 0 )
      v31 = (unsigned int *)(v30 + v29 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v31 = (unsigned int *)(v29 + v30);
    v32 = *v31;
    *v31 = v6;
  }
LABEL_22:
  if ( v9 )
    KeDetachProcess();
  return v32;
}
