/*
 * XREFs of MNPositionSysMenu @ 0x1C0146938
 * Callers:
 *     xxxSetSystemMenu @ 0x1C01468C8 (xxxSetSystemMenu.c)
 *     xxxMNStartMenu @ 0x1C021C1CC (xxxMNStartMenu.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetWindowBordersForDpi @ 0x1C00BBC00 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall MNPositionSysMenu(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  int v5; // esi
  unsigned int v6; // eax
  int v7; // edx
  __int64 v8; // rax
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ebp
  int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // edi
  int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 *v25; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v27; // rax
  int DpiDependentMetric; // eax
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rax
  _QWORD v32[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return (__int64)UserSetLastError(6LL, 0LL);
  if ( a1 != a2[10] )
  {
    v32[0] = a2 + 10;
    v32[1] = a1;
    HMAssignmentLock(v32, 0LL);
  }
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  v6 = *(_DWORD *)(v4 + 288);
  v7 = v6 & 0xF;
  if ( *(char *)(v4 + 24) < 0 )
  {
    if ( v7 == 3 )
    {
      WindowDpiLastNotify = (v6 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v4 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v6 & 0xF) == 0
           && (v27 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(23LL, WindowDpiLastNotify);
    v29 = *(_QWORD *)(a1 + 40);
    v12 = DpiDependentMetric;
    v30 = *(_DWORD *)(v29 + 288) & 0xF;
    if ( v30 == 3 )
    {
      v15 = (*(_DWORD *)(v29 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v29 + 232) & 0x400) != 0 )
    {
      v15 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v30
           && (v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v31 + 8) + 64LL) & 1) != 0 )
    {
      v15 = 96;
    }
    else
    {
      v15 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v16 = 24LL;
  }
  else
  {
    if ( v7 == 3 )
    {
      v9 = (v6 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v4 + 232) & 0x400) != 0 )
    {
      v9 = GetWindowDpiLastNotify(a1);
    }
    else if ( (v6 & 0xF) == 0
           && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 64LL) & 1) != 0 )
    {
      v9 = 96;
    }
    else
    {
      v9 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v10 = GetDpiDependentMetric(12LL, v9);
    v11 = *(_QWORD *)(a1 + 40);
    v12 = v10;
    v13 = *(_DWORD *)(v11 + 288) & 0xF;
    if ( v13 == 3 )
    {
      v15 = (*(_DWORD *)(v11 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v11 + 232) & 0x400) != 0 )
    {
      v15 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v13
           && (v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v14 + 8) + 64LL) & 1) != 0 )
    {
      v15 = 96;
    }
    else
    {
      v15 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v16 = 13LL;
  }
  result = GetDpiDependentMetric(v16, v15);
  v19 = *(_QWORD *)(a1 + 40);
  v20 = result;
  if ( (*(_BYTE *)(v19 + 31) & 0x20) == 0 )
  {
    v21 = *(_DWORD *)(v19 + 288) & 0xF;
    if ( v21 == 3 )
    {
      v23 = (*(_DWORD *)(v19 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v19 + 232) & 0x400) != 0 )
    {
      v23 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v21
           && (v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 64LL) & 1) != 0 )
    {
      v23 = 96;
    }
    else
    {
      v23 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    result = GetWindowBordersForDpi(*(_DWORD *)(v19 + 28), *(_DWORD *)(v19 + 24), v19, v18, v23);
    v12 += result;
    v5 = result;
    v20 += result;
  }
  v24 = a2[5];
  if ( (*(_DWORD *)(v24 + 40) & 0x10) == 0 && *(_DWORD *)(v24 + 44) )
  {
    v25 = (__int64 *)a2[11];
    if ( v25 )
    {
      *(_DWORD *)(*v25 + 68) = v5;
      *(_DWORD *)(*v25 + 64) = v5;
      *(_DWORD *)(*v25 + 76) = v20 - v5;
      result = *v25;
      *(_DWORD *)(*v25 + 72) = v12 - v5;
    }
  }
  return result;
}
