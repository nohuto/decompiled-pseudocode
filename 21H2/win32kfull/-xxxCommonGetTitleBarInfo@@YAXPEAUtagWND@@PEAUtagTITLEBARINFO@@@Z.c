/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0061054
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C002E528 (xxxGetTitleBarInfoEx.c)
 *     NtUserGetTitleBarInfo @ 0x1C005DD00 (NtUserGetTitleBarInfo.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C006152C (GetDpiCacheSlot.c)
 *     xxxMNCanClose @ 0x1C0061560 (xxxMNCanClose.c)
 *     _HasCaptionIcon @ 0x1C0061D98 (_HasCaptionIcon.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01EA560 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA5E0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  int v4; // edx
  __int64 v5; // r8
  int v6; // ecx
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // r12
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  int v18; // r12d
  int v19; // ebx
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // r15d
  int v23; // r14d
  __int64 v24; // rbx
  int v25; // edx
  int v26; // eax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // cl
  __int64 v32; // rax
  char v33; // cl
  char *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v43; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int v45; // r11d
  int DpiDependentMetric; // eax
  unsigned int v47; // [rsp+50h] [rbp+8h]

  v4 = *((_DWORD *)a2 + 5) | 0x100000;
  *((_DWORD *)a2 + 5) = v4;
  v5 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v5 + 30) & 0xC0) == 0xC0 )
  {
    if ( (*(_BYTE *)(v5 + 31) & 0x20) != 0 || (*(_BYTE *)(v5 + 16) & 8) != 0 )
    {
      v6 = *(_DWORD *)(v5 + 288) & 0xF;
      if ( v6 == 3 )
      {
        v8 = (*(_DWORD *)(v5 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v5 + 232) & 0x8000000) != 0 )
      {
        v7 = *(_WORD *)(v5 + 286);
        if ( !v7 )
          v7 = *(_WORD *)(v5 + 284);
        v8 = v7;
      }
      else if ( !v6
             && (v35 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v35 + 8) + 64LL) & 1) != 0 )
      {
        v8 = 96;
      }
      else
      {
        v8 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      v9 = 0LL;
      *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v5 + 88);
      v10 = *((_QWORD *)a1 + 5);
      CurrentThread = KeGetCurrentThread();
      v12 = *(_DWORD *)(v10 + 24);
      v47 = *(_DWORD *)(v10 + 28);
      if ( !(unsigned __int8)KeIsAttachedProcess(v47)
        || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v43),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v9 = *ThreadWin32Thread;
      }
      v18 = 0;
      if ( *(_DWORD *)(v9 + 632) <= 0x9900u )
        v18 = *(_DWORD *)(v9 + 648);
      if ( (v12 & 0x100) != 0 )
        v19 = 2;
      else
        v19 = (v12 & 0x20000) != 0;
      v20 = v47;
      v21 = v47 & 0xC00000;
      if ( (v47 & 0xC00000) != 0 || (v12 & 1) != 0 )
        ++v19;
      if ( (v18 & 0x10000000) != 0 || (v18 & 0x20000000) != 0 )
      {
        v22 = 0;
      }
      else
      {
        v17 = gpsi;
        if ( v8 == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v22 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( v8 == 96 )
        {
          v22 = *(_DWORD *)(gpsi + 2520LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(v8) == -1 )
            DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v45, v8);
          else
            DpiDependentMetric = GetDpiDependentMetric(v45, v8);
          v20 = v47;
          v22 = DpiDependentMetric;
        }
      }
      if ( (v20 & 0x40000) != 0
        || v22 > 0
        && (LOBYTE(v17) = v21 != 12582912, v21 == 12582912 || (v20 & 0x40000) != 0)
        && (v18 & 0x30000000) == 0 )
      {
        if ( (v18 & 0x10000000) != 0 )
        {
          v23 = 1;
        }
        else
        {
          v23 = (int)(v8 * *(_DWORD *)(Get96DpiServerInfo(v17, v20, 1LL) + 4) + 48) / 96;
          if ( (v18 & 0x20000000) != 0 )
          {
            if ( v8 == *(unsigned __int16 *)(gpsi + 6998LL) )
            {
              v36 = *(_DWORD *)(gpsi + 2400LL);
            }
            else if ( v8 == 96 )
            {
              v36 = *(_DWORD *)(gpsi + 2520LL);
            }
            else if ( (unsigned int)GetDpiCacheSlot(v8) == -1 )
            {
              v36 = ScaleSystemMetricForDPIWithoutCache(29LL, v8);
            }
            else
            {
              v36 = GetDpiDependentMetric(29LL, v8);
            }
            v23 += v36;
          }
        }
        v19 += v22 + v23;
      }
      *((_DWORD *)a2 + 1) += v19;
      *((_DWORD *)a2 + 3) -= v19;
      *((_DWORD *)a2 + 2) += v19;
      *((_DWORD *)a2 + 4) -= v19;
      if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) < 0 )
      {
        v26 = *((_DWORD *)a2 + 2) + GetDpiDependentMetric(22LL, v8);
      }
      else
      {
        v24 = 120LL * (int)GetDpiCacheSlot(v8);
        v25 = *(_DWORD *)(v24 + gpsi + 2292);
        if ( v25 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v8);
          v25 = *(_DWORD *)(v24 + gpsi + 2292);
          if ( v25 == -1 )
            v25 = 0;
        }
        v26 = v25 + *((_DWORD *)a2 + 2);
      }
      *((_DWORD *)a2 + 4) = v26;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
      {
        v27 = *((_DWORD *)a2 + 4);
        v28 = *((_DWORD *)a2 + 2);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 3) += v28 - v27 + 1;
        else
          *((_DWORD *)a2 + 1) += v27 - v28 - 1;
      }
      v29 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v29 + 30) & 8) != 0 || (*(_BYTE *)(v29 + 21) & 2) == 0 )
      {
        if ( !(unsigned int)xxxMNCanClose(a1) )
          *((_DWORD *)a2 + 10) |= 1u;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x10) != 0 )
          *((_DWORD *)a2 + 10) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 10) |= 0x8000u;
      }
      v30 = *((_QWORD *)a1 + 5);
      v31 = *(_BYTE *)(v30 + 30);
      if ( (v31 & 8) != 0 || (*(_BYTE *)(v30 + 21) & 2) == 0 )
      {
        if ( (v31 & 1) == 0 )
        {
          v37 = *((_DWORD *)a2 + 8);
          if ( (v31 & 2) != 0 )
            v38 = v37 | 1;
          else
            v38 = v37 | 0x8000;
          *((_DWORD *)a2 + 8) = v38;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x20) != 0 )
          *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 8) |= 0x8000u;
      }
      v32 = *((_QWORD *)a1 + 5);
      v33 = *(_BYTE *)(v32 + 30);
      if ( (v33 & 8) != 0 || (*(_BYTE *)(v32 + 21) & 2) == 0 )
      {
        if ( (v33 & 2) == 0 )
        {
          v39 = *((_DWORD *)a2 + 7);
          if ( (v33 & 1) != 0 )
            v40 = v39 | 1;
          else
            v40 = v39 | 0x8000;
          *((_DWORD *)a2 + 7) = v40;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 7) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 7) |= 0x8000u;
      }
      v34 = (char *)*((_QWORD *)a1 + 5);
      if ( (v34[25] & 4) == 0 || (v34[30] & 3) != 0 )
      {
        *((_DWORD *)a2 + 9) |= 0x8000u;
      }
      else if ( v34[21] < 0 )
      {
        *((_DWORD *)a2 + 9) |= 8u;
      }
      *((_DWORD *)a2 + 6) = 0x8000;
    }
    else
    {
      *((_DWORD *)a2 + 5) = v4 | 0x10000;
      *(_OWORD *)((char *)a2 + 4) = 0LL;
    }
  }
  else
  {
    *((_DWORD *)a2 + 5) = v4 | 0x8000;
  }
}
