/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C0089C78
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C0089B70 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C01280E0 (xxxCsDdeInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C008A21C (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C008A238 (xxxSetWindowData.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0124E4C (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rcx
  HANDLE v12; // rax
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rcx
  __int64 v21; // r10
  int v22; // eax
  int v23; // ecx
  __int64 *v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r10
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // r9
  __int64 v33; // r10
  _WORD *v34; // rdx
  unsigned int v35; // ecx
  _DWORD *v36; // r10
  int v37; // esi
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 v41; // rcx
  _BYTE v42[4]; // [rsp+20h] [rbp-78h] BYREF
  int v43; // [rsp+24h] [rbp-74h] BYREF
  __int64 v44; // [rsp+28h] [rbp-70h]
  struct tagWND *v45; // [rsp+A0h] [rbp+8h] BYREF
  int v46; // [rsp+A8h] [rbp+10h]
  __int64 v47; // [rsp+B0h] [rbp+18h]

  v47 = a3;
  v46 = a2;
  v45 = a1;
  v5 = a3;
  v6 = (int)a2;
  v8 = 0LL;
  v42[0] = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    goto LABEL_69;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
  v11 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v12 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v11 = gpidLogon;
    if ( v12 != (HANDLE)gpidLogon )
      goto LABEL_69;
  }
  if ( !(unsigned __int8)Enforced(v11) )
  {
    CurrentProcess = PsGetCurrentProcess(v13, a2, a3);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v15 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      a2 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( *(_DWORD *)(a2 + 780) != *(_DWORD *)(v15 + 780) || *(_DWORD *)(a2 + 784) != *(_DWORD *)(v15 + 784) )
        goto LABEL_69;
    }
  }
  if ( (int)v6 >= 0 )
  {
    v16 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    a2 = v6 + 8;
    if ( v6 + 8 > v16 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v17 != PsGetCurrentProcessWin32Process(v16) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
        if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v17 + 880)
          && *(int *)(PsGetCurrentProcessWin32Process(v20) + 12) >= 0 )
        {
          goto LABEL_69;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v42[0] = 1;
      }
    }
  }
  v21 = *((_QWORD *)a1 + 5);
  v22 = *(unsigned __int16 *)(v21 + 42);
  if ( (v22 & 0xFFFF2FFF) != 0 )
  {
    if ( (v22 & 0x1000) != 0 )
    {
      v43 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1102LL);
      v21 = *((_QWORD *)a1 + 5);
    }
    v23 = *(unsigned __int16 *)(v21 + 42);
    if ( (v23 & 0x1000) == 0 )
    {
      if ( (*(_BYTE *)(v21 + 18) & 1) != 0 )
        v24 = *(_DWORD *)(v21 + 252) ? (__int64 *)*((_QWORD *)a1 + 35) : *(__int64 **)(v21 + 296);
      else
        v24 = 0LL;
      if ( v24 )
      {
        if ( !(_DWORD)v6 )
        {
          v30 = *v24;
          v44 = *v24;
          *v24 = v5;
          goto LABEL_75;
        }
        if ( (_DWORD)v6 == 16 )
        {
          LODWORD(v45) = 0;
          if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(
                                  (char *)a1 + 321,
                                  &v45)
            && *(int *)(v28 + 200) >= 30 )
          {
            v8 = *(_QWORD *)(v27 + 16);
            v44 = v8;
            *(_QWORD *)(v27 + 16) = v5;
          }
          else
          {
            LODWORD(v45) = 0;
            if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v26, &v45) )
            {
              LODWORD(v45) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 483LL);
              v29 = *((_QWORD *)a1 + 5);
            }
            if ( *(int *)(v29 + 200) < 30 )
            {
              LODWORD(v45) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 484LL);
            }
          }
          goto LABEL_71;
        }
        if ( (unsigned int)v6 <= 0x1D )
        {
          v25 = 1415LL;
LABEL_70:
          UserSetLastError(v25, a2, a3);
          goto LABEL_71;
        }
        goto LABEL_56;
      }
    }
    if ( (int)v6 < 0 )
    {
LABEL_57:
      v8 = xxxSetWindowData(a1);
LABEL_71:
      CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v42);
      return v8;
    }
    a2 = (v23 & 0xFFFF2FFF) - 666;
    if ( (int)v6 < *(unsigned __int16 *)(gpsi + 2 * a2 + 328) - 320 )
    {
      a3 = v23 & 0xFFFF2FFF;
      if ( (unsigned int)a3 >= 0x2A1 )
      {
        if ( (unsigned int)a3 <= 0x2A6 )
        {
LABEL_52:
          if ( (_DWORD)v6 )
            goto LABEL_51;
          v43 = 0;
          if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(
                                  (char *)a1 + 321,
                                  &v43) )
          {
            v31 = **(_QWORD **)(v33 + 296);
            v44 = v31;
          }
          else
          {
            v31 = **((_QWORD **)a1 + 35);
          }
          goto LABEL_48;
        }
        if ( (_DWORD)a3 != 679 )
        {
          if ( (unsigned int)(a3 - 680) > 2 )
            goto LABEL_51;
          goto LABEL_52;
        }
        if ( (_DWORD)v6 == 8 )
        {
          v31 = **(_QWORD **)(v21 + 296);
          v44 = v31;
LABEL_48:
          if ( v31 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
            goto LABEL_51;
          goto LABEL_50;
        }
      }
LABEL_51:
      v25 = 1413LL;
      goto LABEL_70;
    }
  }
LABEL_56:
  if ( (int)v6 < 0 )
    goto LABEL_57;
LABEL_50:
  a3 = *((_QWORD *)a1 + 5);
  v32 = *(unsigned int *)(a3 + 252);
  if ( (unsigned __int64)(unsigned int)v6 + 8 > (unsigned int)(v32 + *(_DWORD *)(a3 + 200)) )
    goto LABEL_51;
  if ( a5 )
  {
    v34 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( (v34[3] & 0x100) != 0 )
    {
      v35 = 0;
      v36 = &gDefaultServerClasses;
      while ( *v34 != *(_WORD *)(gpsi + 2LL * ((*v36 >> 3) & 0x1F) + 868) )
      {
        ++v35;
        v36 += 12;
        if ( v35 >= 8 )
          goto LABEL_63;
      }
      if ( (int)v6 < *((_DWORD *)&gDefaultServerClasses + 12 * v35 + 6) )
      {
        a2 = *v36 & 0xF8;
        if ( (*(_BYTE *)v36 & 0xF8) != 0xB0 || (unsigned __int64)((int)v6 + 8LL) > 0xFFFFFFFFFFFFFEE0uLL )
        {
LABEL_69:
          v25 = 5LL;
          goto LABEL_70;
        }
      }
    }
  }
LABEL_63:
  if ( (int)v6 + 8LL <= v32 )
  {
    v41 = *((_QWORD *)a1 + 35);
    v30 = *(_QWORD *)((int)v6 + v41);
    *(_QWORD *)((int)v6 + v41) = v5;
  }
  else
  {
    v37 = v6 - v32;
    v38 = *(_QWORD *)(a3 + 296);
    if ( (*(_DWORD *)(a3 + 232) & 0x800) != 0 )
      v39 = (__int64 *)(v38 + v37 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v39 = (__int64 *)(v37 + v38);
    v30 = *v39;
    v44 = *v39;
    *v39 = v5;
  }
LABEL_75:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v42);
  return v30;
}
