/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0066D38
 * Callers:
 *     NtUserGetTitleBarInfo @ 0x1C0066AD0 (NtUserGetTitleBarInfo.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00CC5FC (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00671E0 (GetDpiCacheSlot.c)
 *     xxxMNCanClose @ 0x1C0068094 (xxxMNCanClose.c)
 *     _HasCaptionIcon @ 0x1C00684C0 (_HasCaptionIcon.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01E4CEC (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  int v4; // edx
  __int64 v5; // r8
  int v6; // r15d
  int v7; // ecx
  unsigned __int16 v8; // ax
  unsigned int v9; // edi
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // r14d
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rcx
  int v15; // r12d
  int v16; // ebp
  __int64 v17; // rdx
  int v18; // r13d
  int v19; // r14d
  __int64 v20; // rbp
  int v21; // edx
  int v22; // eax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rax
  char v29; // cl
  char *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // r10d
  int DpiDependentMetric; // eax
  unsigned int v39; // [rsp+50h] [rbp+8h]

  v4 = *((_DWORD *)a2 + 5) | 0x100000;
  *((_DWORD *)a2 + 5) = v4;
  v5 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v5 + 30) & 0xC0) == 0xC0 )
  {
    if ( (*(_BYTE *)(v5 + 31) & 0x20) != 0 || (*(_BYTE *)(v5 + 16) & 8) != 0 )
    {
      v6 = 0;
      v7 = *(_DWORD *)(v5 + 288) & 0xF;
      if ( v7 == 3 )
      {
        v9 = (*(_DWORD *)(v5 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
      {
        v8 = *(_WORD *)(v5 + 286);
        if ( !v8 )
          v8 = *(_WORD *)(v5 + 284);
        v9 = v8;
      }
      else if ( !v7
             && (v31 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v31 + 8) + 64LL) & 1) != 0 )
      {
        v9 = 96;
      }
      else
      {
        v9 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      v10 = 0LL;
      *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v5 + 88);
      v11 = *((_QWORD *)a1 + 5);
      v12 = *(_DWORD *)(v11 + 24);
      v39 = *(_DWORD *)(v11 + 28);
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v10 = *ThreadWin32Thread;
      v15 = 0;
      if ( *(_DWORD *)(v10 + 632) <= 0x9900u )
        v15 = *(_DWORD *)(v10 + 648);
      if ( (v12 & 0x100) != 0 )
        v16 = 2;
      else
        v16 = (v12 & 0x20000) != 0;
      v17 = v39;
      v18 = v39 & 0xC00000;
      if ( (v39 & 0xC00000) != 0 || (v12 & 1) != 0 )
        ++v16;
      if ( (v15 & 0x10000000) == 0 && (v15 & 0x20000000) == 0 )
      {
        v14 = gpsi;
        if ( v9 == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v6 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( v9 == 96 )
        {
          v6 = *(_DWORD *)(gpsi + 2520LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(v9) == -1 )
            DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v37, v9);
          else
            DpiDependentMetric = GetDpiDependentMetric(v37, v9);
          v17 = v39;
          v6 = DpiDependentMetric;
        }
      }
      if ( (v17 & 0x40000) != 0
        || v6 > 0 && (LOBYTE(v14) = v18 != 12582912, v18 == 12582912 || (v17 & 0x40000) != 0) && (v15 & 0x30000000) == 0 )
      {
        if ( (v15 & 0x10000000) != 0 )
        {
          v19 = 1;
        }
        else
        {
          v19 = (int)(v9 * *(_DWORD *)(Get96DpiServerInfo(v14, v17, 1LL) + 4) + 48) / 96;
          if ( (v15 & 0x20000000) != 0 )
          {
            if ( v9 == *(unsigned __int16 *)(gpsi + 6998LL) )
            {
              v32 = *(_DWORD *)(gpsi + 2400LL);
            }
            else if ( v9 == 96 )
            {
              v32 = *(_DWORD *)(gpsi + 2520LL);
            }
            else if ( (unsigned int)GetDpiCacheSlot(v9) == -1 )
            {
              v32 = ScaleSystemMetricForDPIWithoutCache(29LL, v9);
            }
            else
            {
              v32 = GetDpiDependentMetric(29LL, v9);
            }
            v19 += v32;
          }
        }
        v16 += v6 + v19;
      }
      *((_DWORD *)a2 + 1) += v16;
      *((_DWORD *)a2 + 3) -= v16;
      *((_DWORD *)a2 + 2) += v16;
      *((_DWORD *)a2 + 4) -= v16;
      if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) < 0 )
      {
        v22 = *((_DWORD *)a2 + 2) + GetDpiDependentMetric(22LL, v9);
      }
      else
      {
        v20 = 120LL * (int)GetDpiCacheSlot(v9);
        v21 = *(_DWORD *)(gpsi + v20 + 2292);
        if ( v21 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v9);
          v21 = *(_DWORD *)(gpsi + v20 + 2292);
          if ( v21 == -1 )
            v21 = 0;
        }
        v22 = v21 + *((_DWORD *)a2 + 2);
      }
      *((_DWORD *)a2 + 4) = v22;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
      {
        v23 = *((_DWORD *)a2 + 4);
        v24 = *((_DWORD *)a2 + 2);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 3) += v24 - v23 + 1;
        else
          *((_DWORD *)a2 + 1) += v23 - v24 - 1;
      }
      v25 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v25 + 30) & 8) != 0 || (*(_BYTE *)(v25 + 21) & 2) == 0 )
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
      v26 = *((_QWORD *)a1 + 5);
      v27 = *(_BYTE *)(v26 + 30);
      if ( (v27 & 8) != 0 || (*(_BYTE *)(v26 + 21) & 2) == 0 )
      {
        if ( (v27 & 1) == 0 )
        {
          v33 = *((_DWORD *)a2 + 8);
          if ( (v27 & 2) != 0 )
            v34 = v33 | 1;
          else
            v34 = v33 | 0x8000;
          *((_DWORD *)a2 + 8) = v34;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x20) != 0 )
          *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 8) |= 0x8000u;
      }
      v28 = *((_QWORD *)a1 + 5);
      v29 = *(_BYTE *)(v28 + 30);
      if ( (v29 & 8) != 0 || (*(_BYTE *)(v28 + 21) & 2) == 0 )
      {
        if ( (v29 & 2) == 0 )
        {
          v35 = *((_DWORD *)a2 + 7);
          if ( (v29 & 1) != 0 )
            v36 = v35 | 1;
          else
            v36 = v35 | 0x8000;
          *((_DWORD *)a2 + 7) = v36;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 7) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 7) |= 0x8000u;
      }
      v30 = (char *)*((_QWORD *)a1 + 5);
      if ( (v30[25] & 4) == 0 || (v30[30] & 3) != 0 )
      {
        *((_DWORD *)a2 + 9) |= 0x8000u;
      }
      else if ( v30[21] < 0 )
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
