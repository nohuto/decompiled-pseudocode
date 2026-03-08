/*
 * XREFs of ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00AD290
 * Callers:
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C0042CB8 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 *     DwmChildRectChange @ 0x1C00AD03C (DwmChildRectChange.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0045E2C (GetDpiCacheSlot.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C07C0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

struct tagRECT *__fastcall CalculateContentRect(struct tagRECT *__return_ptr retstr, const struct tagWND *a2, int *a3)
{
  __int64 v3; // r9
  int v6; // ebp
  int v7; // r13d
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  unsigned int v10; // r15d
  int v11; // r12d
  int v12; // edi
  __int64 v13; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  int v16; // r14d
  BOOL v17; // edx
  int v18; // eax
  int v19; // edi
  unsigned int v20; // eax
  int v21; // eax
  int v22; // r13d
  __int64 v23; // r12
  __int64 *v24; // rax
  int v25; // r10d
  int v26; // r8d
  int v27; // edx
  int v28; // r12d
  int v29; // r9d
  int v30; // ecx
  int v31; // r8d
  int v32; // eax
  int v33; // ecx
  LONG top; // edx
  LONG bottom; // r8d
  LONG left; // r10d
  LONG v37; // edx
  LONG right; // edi
  LONG v39; // r8d
  LONG v40; // r11d
  _DWORD *v41; // rcx
  LONG v42; // r9d
  LONG v43; // eax
  LONG v44; // r10d
  LONG v45; // eax
  LONG v46; // edi
  LONG v47; // r8d
  LONG v48; // ecx
  LONG v49; // edx
  LONG v50; // eax
  LONG v51; // eax
  __int64 v53; // rax
  int v54; // eax
  int DpiCacheSlot; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int DpiDependentMetric; // eax
  int v59; // eax
  int v60; // eax
  int v61; // [rsp+28h] [rbp-50h]
  int v62; // [rsp+80h] [rbp+8h]
  int v63; // [rsp+88h] [rbp+10h]
  int v65; // [rsp+98h] [rbp+20h]

  v3 = *((_QWORD *)a2 + 5);
  *retstr = *(struct tagRECT *)(v3 + 88);
  if ( retstr->left >= retstr->right || retstr->top >= retstr->bottom )
    return retstr;
  v6 = 0;
  v7 = 0;
  v8 = *(_DWORD *)(v3 + 288) & 0xF;
  if ( (_DWORD)v8 == 3 )
  {
    v10 = (*(_DWORD *)(v3 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v3 + 232) & 0x400) != 0 )
  {
    v9 = *(_WORD *)(v3 + 286);
    if ( !v9 )
      v9 = *(_WORD *)(v3 + 284);
    v10 = v9;
  }
  else if ( !(_DWORD)v8
         && (v53 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 456LL)) != 0
         && (v8 = **(_QWORD **)(v53 + 8), (*(_DWORD *)(v8 + 64) & 1) != 0) )
  {
    v10 = 96;
  }
  else
  {
    v8 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL);
    v10 = *(unsigned __int16 *)(v8 + 284);
  }
  v11 = *(_DWORD *)(v3 + 28);
  v12 = *(_DWORD *)(v3 + 24);
  v63 = v11;
  v13 = SGDGetUserSessionState(v8);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  else
    v15 = 0LL;
  v16 = 1;
  v17 = 0;
  if ( (v12 & 1) != 0 )
    goto LABEL_90;
  if ( (v12 & 0x20000) != 0 )
    goto LABEL_18;
  if ( (v11 & 0x40000) != 0 || (v11 & 0xC00000) == 0x400000 )
  {
LABEL_90:
    v17 = 1;
  }
  else if ( (v11 & 0xC00000) == 0xC00000 )
  {
    v17 = *(_DWORD *)(v15 + 632) >= 0x400u;
  }
LABEL_18:
  v18 = v12;
  v19 = v12 | 0x100;
  v20 = v18 & 0xFFFFFEFF;
  if ( !v17 )
    v19 = v20;
  if ( (BYTE2(v11) & 0xC0) != 0xC0 )
    goto LABEL_25;
  v21 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( (v19 & 0x80u) != 0 )
  {
    if ( v10 == v21 )
    {
      v22 = *(_DWORD *)(gpsi + 2372LL);
      goto LABEL_24;
    }
    if ( v10 == 96 )
    {
      v22 = *(_DWORD *)(gpsi + 2492LL);
      goto LABEL_24;
    }
    DpiCacheSlot = GetDpiCacheSlot(v10);
    v56 = v10;
    v57 = 22LL;
    if ( DpiCacheSlot == -1 )
      goto LABEL_109;
    goto LABEL_105;
  }
  if ( v10 != v21 )
  {
    if ( v10 == 96 )
    {
      v22 = *(_DWORD *)(gpsi + 2412LL);
      goto LABEL_24;
    }
    v59 = GetDpiCacheSlot(v10);
    v56 = v10;
    v57 = 2LL;
    if ( v59 == -1 )
    {
LABEL_109:
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v57, v56);
      goto LABEL_110;
    }
LABEL_105:
    DpiDependentMetric = GetDpiDependentMetric(v57, v56);
LABEL_110:
    v22 = DpiDependentMetric;
    goto LABEL_24;
  }
  v22 = *(_DWORD *)(gpsi + 2292LL);
LABEL_24:
  v7 = -v22;
LABEL_25:
  v23 = 0LL;
  v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v24 )
    v23 = *v24;
  if ( *(_DWORD *)(v23 + 632) > 0x9900u )
    v25 = 0;
  else
    v25 = *(_DWORD *)(v23 + 648);
  v65 = v25;
  if ( (v19 & 0x100) != 0 )
    v26 = 2;
  else
    v26 = (v19 & 0x20000) != 0;
  v27 = v63;
  v28 = v26 + 1;
  v29 = v63 & 0xC00000;
  if ( (v63 & 0xC00000) == 0 && (v19 & 1) == 0 )
    v28 = v26;
  v30 = v25 & 0x10000000;
  v61 = v25 & 0x20000000;
  if ( (v25 & 0x10000000) != 0 )
  {
    v31 = 0;
    v62 = 0;
  }
  else if ( (v25 & 0x20000000) != 0 )
  {
    v31 = 0;
    v62 = 0;
  }
  else if ( v10 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v31 = *(_DWORD *)(gpsi + 2400LL);
    v62 = v31;
  }
  else if ( v10 == 96 )
  {
    v31 = *(_DWORD *)(gpsi + 2520LL);
    v62 = v31;
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(v10) == -1 )
      v60 = ScaleSystemMetricForDPIWithoutCache(29LL, v10);
    else
      v60 = GetDpiDependentMetric(29, v10);
    v25 = v65;
    v31 = v60;
    v29 = v63 & 0xC00000;
    v30 = 0;
    v27 = v63;
    v62 = v60;
  }
  if ( (v27 & 0x40000) != 0 || (v32 = v28, v31 > 0) && v29 == 12582912 && (v25 & 0x30000000) == 0 )
  {
    if ( !v30 )
    {
      v16 = (int)(*(_DWORD *)(Get96DpiServerInfo() + 4) * v10 + 48) / 96;
      if ( v61 )
      {
        if ( v10 == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v54 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( v10 == 96 )
        {
          v54 = *(_DWORD *)(gpsi + 2520LL);
        }
        else if ( (unsigned int)GetDpiCacheSlot(v10) == -1 )
        {
          v54 = ScaleSystemMetricForDPIWithoutCache(29LL, v10);
        }
        else
        {
          v54 = GetDpiDependentMetric(29, v10);
        }
        v16 += v54;
      }
    }
    v32 = v28 + v16 + v62;
  }
  v33 = v32 + 2;
  if ( (v19 & 0x200) == 0 )
    v33 = v32;
  if ( v33 )
  {
    v6 = v33;
    v7 -= v33;
  }
  top = retstr->top;
  bottom = retstr->bottom;
  left = v33 + retstr->left;
  if ( !v33 )
    left = retstr->left;
  retstr->right -= v6;
  v37 = top - v7;
  right = retstr->right;
  v39 = bottom - v6;
  v40 = v37;
  retstr->top = v37;
  retstr->bottom = v39;
  if ( a3 )
    *a3 = v6;
  v41 = (_DWORD *)*((_QWORD *)a2 + 5);
  v42 = v41[26];
  if ( v42 >= v41[28] || v41[27] >= v41[29] )
  {
    v42 = left;
  }
  else
  {
    v40 = v41[27];
    if ( left < v42 )
      v42 = left;
    if ( v37 < v40 )
      v40 = v37;
    if ( right <= v41[28] )
      right = v41[28];
    v43 = v41[29];
    retstr->right = right;
    if ( v39 <= v43 )
      v39 = v43;
    retstr->bottom = v39;
  }
  v44 = v41[22];
  v45 = v42;
  v46 = v41[24];
  if ( v42 <= v44 )
    v45 = v41[22];
  if ( v45 >= v46 )
  {
    v42 = v41[24];
  }
  else if ( v42 <= v44 )
  {
    v42 = v41[22];
  }
  v47 = v41[23];
  v48 = v41[25];
  v49 = v48;
  v50 = retstr->right;
  if ( v40 <= v47 )
    v40 = v47;
  retstr->left = v42;
  if ( v40 < v48 )
    v49 = v40;
  retstr->top = v49;
  if ( v50 >= v46 )
    v50 = v46;
  if ( v50 > v44 )
    v44 = v50;
  v51 = retstr->bottom;
  if ( v51 >= v48 )
    v51 = v48;
  if ( v51 > v47 )
    v47 = v51;
  if ( v42 > v44 )
    v44 = v42;
  retstr->right = v44;
  if ( v49 <= v47 )
    v49 = v47;
  retstr->bottom = v49;
  return retstr;
}
