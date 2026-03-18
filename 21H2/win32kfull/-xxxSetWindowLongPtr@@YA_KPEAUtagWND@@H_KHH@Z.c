/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C004F3D8
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C004F2D0 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C010D64C (xxxCsDdeInitialize.c)
 * Callees:
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  char v8; // bl
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rcx
  HANDLE v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  __int64 v20; // r10
  int v21; // eax
  __int64 v22; // r8
  int v23; // edx
  __int64 *v24; // rcx
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rdi
  unsigned int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // r9
  __int64 v35; // rdx
  int v36; // edi
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 v40; // rcx

  v6 = a2;
  v8 = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    goto LABEL_15;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
  v11 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v12 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v11 = gpidLogon;
    if ( v12 != (HANDLE)gpidLogon )
      goto LABEL_15;
  }
  if ( !(unsigned __int8)Enforced(v11) )
  {
    CurrentProcess = PsGetCurrentProcess(v14, v13);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      v16 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( *(_DWORD *)(v16 + 780) != *(_DWORD *)(v14 + 780) || *(_DWORD *)(v16 + 784) != *(_DWORD *)(v14 + 784) )
        goto LABEL_15;
    }
  }
  if ( (int)v6 >= 0 )
  {
    v14 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
    if ( v6 + 8 > v14 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v17 != PsGetCurrentProcessWin32Process(v14) )
      {
        v14 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
        if ( (v14 & 0x10) == 0 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
          if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v17 + 880)
            && *(int *)(PsGetCurrentProcessWin32Process(v19) + 12) >= 0 )
          {
LABEL_15:
            UserSetLastError(5LL);
            return 0LL;
          }
          KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
          v8 = 1;
        }
      }
    }
  }
  v20 = *((_QWORD *)a1 + 5);
  v21 = *(unsigned __int16 *)(v20 + 42);
  if ( (v21 & 0xFFFF2FFF) == 0 )
    goto LABEL_63;
  v22 = *((_QWORD *)a1 + 5);
  if ( (v21 & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
    v20 = *((_QWORD *)a1 + 5);
    v22 = v20;
  }
  v23 = *(unsigned __int16 *)(v22 + 42);
  if ( (v23 & 0x1000) == 0 )
  {
    if ( (*(_BYTE *)(v22 + 18) & 1) != 0 )
      v24 = *(_DWORD *)(v20 + 248) ? (__int64 *)*((_QWORD *)a1 + 35) : *(__int64 **)(v22 + 296);
    else
      v24 = 0LL;
    if ( v24 )
    {
      if ( !(_DWORD)v6 )
      {
        v27 = *v24;
        *v24 = a3;
        goto LABEL_75;
      }
      if ( (_DWORD)v6 == 16 )
      {
        v26 = *(_DWORD *)(v20 + 248);
        if ( v26 || *(int *)(v22 + 200) < 30 )
        {
          v27 = 0LL;
          if ( v26 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
            v22 = *((_QWORD *)a1 + 5);
          }
          if ( *(int *)(v22 + 200) < 30 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
        }
        else
        {
          v27 = v24[2];
          v24[2] = a3;
        }
        goto LABEL_75;
      }
      if ( (unsigned int)v6 <= 0x1D )
      {
        v25 = 1415LL;
        goto LABEL_69;
      }
      goto LABEL_63;
    }
  }
  if ( (int)v6 < 0 )
  {
LABEL_64:
    v27 = xxxSetWindowData(a1);
    goto LABEL_75;
  }
  if ( (int)v6 >= *(unsigned __int16 *)(gpsi + 2LL * ((v23 & 0xFFFF2FFF) - 666) + 328) - 328 )
  {
LABEL_63:
    if ( (int)v6 < 0 )
      goto LABEL_64;
    goto LABEL_50;
  }
  v28 = v23 & 0x2FFF;
  if ( v28 < 0x2A1 )
  {
LABEL_45:
    v25 = 1413LL;
    goto LABEL_69;
  }
  if ( v28 <= 0x2A6 )
    goto LABEL_59;
  if ( v28 != 679 )
  {
    if ( v28 - 680 > 2 )
      goto LABEL_45;
LABEL_59:
    if ( (_DWORD)v6 )
      goto LABEL_45;
    if ( *(_DWORD *)(v20 + 248) )
      v29 = **((_QWORD **)a1 + 35);
    else
      v29 = **(_QWORD **)(v22 + 296);
    goto LABEL_48;
  }
  if ( (_DWORD)v6 != 8 )
    goto LABEL_45;
  v29 = **(_QWORD **)(v22 + 296);
LABEL_48:
  if ( v29 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
    goto LABEL_45;
LABEL_50:
  v30 = *((_QWORD *)a1 + 5);
  v31 = *(unsigned int *)(v30 + 248);
  if ( (unsigned __int64)(unsigned int)v6 + 8 > (unsigned int)(v31 + *(_DWORD *)(v30 + 200)) )
    goto LABEL_45;
  if ( a5 )
  {
    v32 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
    if ( _bittest16((const signed __int16 *)(v32 + 6), 8u) )
    {
      v33 = 0LL;
      v34 = &gDefaultServerClasses;
      while ( *(_WORD *)v32 != *(_WORD *)(gpsi + 2LL * ((*v34 >> 3) & 0x1F) + 868) )
      {
        v33 = (unsigned int)(v33 + 1);
        v34 += 12;
        if ( (unsigned int)v33 >= 8 )
          goto LABEL_56;
      }
      if ( (int)v6 < *((_DWORD *)&gDefaultServerClasses + 12 * v33 + 6)
        && ((*v34 & 0xF8) != 0xB0 || (unsigned __int64)((int)v6 + 8LL) > 0xFFFFFFFFFFFFFEE8uLL) )
      {
        v25 = 5LL;
LABEL_69:
        UserSetLastError(v25);
        if ( v8 )
          KeDetachProcess();
        return 0LL;
      }
    }
  }
LABEL_56:
  v35 = (int)v6;
  if ( (int)v6 + 8LL <= v31 )
  {
    v40 = *((_QWORD *)a1 + 35);
    v27 = *(_QWORD *)((int)v6 + v40);
    *(_QWORD *)(v35 + v40) = a3;
  }
  else
  {
    v36 = v6 - v31;
    v37 = *(_QWORD *)(v30 + 296);
    if ( (*(_DWORD *)(v30 + 232) & 0x10) != 0 )
      v38 = (__int64 *)(v36 + v37 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v38 = (__int64 *)(v37 + v36);
    v27 = *v38;
    *v38 = a3;
  }
LABEL_75:
  if ( v8 )
    KeDetachProcess();
  return v27;
}
