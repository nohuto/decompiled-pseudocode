__int64 __fastcall MNPositionSysMenu(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // esi
  unsigned int v7; // eax
  int v8; // edx
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ebp
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rax
  int v17; // ecx
  int WindowDpiLastNotify; // eax
  __int64 v19; // rax
  int DpiDependentMetric; // eax
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  int v26; // edi
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rcx
  _QWORD v32[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return (__int64)UserSetLastError(6);
  if ( a1 != a2[10] )
  {
    v32[0] = a2 + 10;
    v32[1] = a1;
    HMAssignmentLock(v32, 0LL);
  }
  v5 = *(_QWORD *)(a1 + 40);
  v6 = 0;
  v7 = *(_DWORD *)(v5 + 288);
  v8 = v7 & 0xF;
  if ( *(char *)(v5 + 24) >= 0 )
  {
    if ( v8 == 3 )
    {
      WindowDpiLastNotify = (v7 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v7 & 0xF) == 0
           && (v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(12, WindowDpiLastNotify);
    v21 = *(_QWORD *)(a1 + 40);
    v13 = DpiDependentMetric;
    v22 = *(_DWORD *)(v21 + 288) & 0xF;
    if ( v22 == 3 )
    {
      v15 = (*(_DWORD *)(v21 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v21 + 232) & 0x400) != 0 )
    {
      v15 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v22
           && (v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 64LL) & 1) != 0 )
    {
      v15 = 96;
    }
    else
    {
      v15 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v17 = 13;
  }
  else
  {
    if ( v8 == 3 )
    {
      v9 = (v7 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
    {
      v9 = GetWindowDpiLastNotify(a1);
    }
    else if ( (v7 & 0xF) == 0
           && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
    {
      v9 = 96;
    }
    else
    {
      v9 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v11 = GetDpiDependentMetric(23, v9);
    v12 = *(_QWORD *)(a1 + 40);
    v13 = v11;
    v14 = *(_DWORD *)(v12 + 288) & 0xF;
    if ( v14 == 3 )
    {
      v15 = (*(_DWORD *)(v12 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v12 + 232) & 0x400) != 0 )
    {
      v15 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v14
           && (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 64LL) & 1) != 0 )
    {
      v15 = 96;
    }
    else
    {
      v15 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v17 = 24;
  }
  result = GetDpiDependentMetric(v17, v15);
  v25 = *(_QWORD *)(a1 + 40);
  v26 = result;
  if ( (*(_BYTE *)(v25 + 31) & 0x20) == 0 )
  {
    v27 = *(_DWORD *)(v25 + 288) & 0xF;
    if ( v27 == 3 )
    {
      v28 = (*(_DWORD *)(v25 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v25 + 232) & 0x400) != 0 )
    {
      v28 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v27
           && (v29 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v29 + 8) + 64LL) & 1) != 0 )
    {
      v28 = 96;
    }
    else
    {
      v28 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    result = GetWindowBordersForDpi(*(_DWORD *)(v25 + 28), *(_DWORD *)(v25 + 24), v25, v24, v28);
    v13 += result;
    v6 = result;
    v26 += result;
  }
  v30 = a2[5];
  if ( (*(_DWORD *)(v30 + 40) & 0x10) == 0 && *(_DWORD *)(v30 + 44) )
  {
    v31 = (__int64 *)a2[11];
    if ( v31 )
    {
      *(_DWORD *)(*v31 + 68) = v6;
      *(_DWORD *)(*v31 + 64) = v6;
      *(_DWORD *)(*v31 + 76) = v26 - v6;
      result = *v31;
      *(_DWORD *)(*v31 + 72) = v13 - v6;
    }
  }
  return result;
}
