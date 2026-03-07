__int64 __fastcall MNCheckScroll(__int64 **a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 DPIMetrics; // rax
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 i; // rdx
  __int64 v12; // rax
  unsigned int v13; // r9d
  int v14; // edx
  __int64 j; // r8
  int v16; // r8d
  __int64 v17; // rcx
  bool v18; // zf
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int128 v23; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v24[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a1;
  v23 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, *v4);
  ((void (__fastcall *)(_QWORD *, __int64, __int128 *, _QWORD))MNGetPopupBoundsRect)(v24, a3, &v23, 0LL);
  v6 = HIDWORD(v23) - DWORD1(v23);
  if ( *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) && *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) < v6 )
    v6 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL);
  if ( *(_QWORD *)(**a2 + 88)
    && *(_DWORD *)(**(_QWORD **)(**a2 + 88) + 72LL) == *(_DWORD *)(**a2 + 64)
    && (v7 = **a2, *(_DWORD *)(v7 + 68) + 6 > v6) )
  {
    DPIMetrics = GetDPIMetrics(v7);
    v9 = 0;
    v10 = -6 - 2 * *(_DWORD *)(DPIMetrics + 28) + v6;
    for ( i = *(_QWORD *)(**a2 + 88); v9 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL); i += 96LL )
    {
      if ( *(_DWORD *)(*(_QWORD *)i + 68LL) > v10 )
        break;
      ++v9;
    }
    v12 = i - 96;
    if ( !v9 )
      v12 = i;
    v13 = 0;
    *(_DWORD *)(**a2 + 68) = *(_DWORD *)(*(_QWORD *)v12 + 68LL);
    v14 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1;
    for ( j = *(_QWORD *)(**a2 + 88) + 96LL * v14; v14 >= 0; --v14 )
    {
      v13 += *(_DWORD *)(*(_QWORD *)j + 76LL);
      if ( v13 > *(_DWORD *)(**a2 + 68) )
        break;
      j -= 96LL;
    }
    v16 = v14 + 1;
    if ( v14 == *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1 )
      v16 = v14;
    *(_DWORD *)(**a2 + 120) = v16;
    if ( *(_DWORD *)(**a2 + 116) > v16 )
      *(_DWORD *)(**a2 + 116) = v16;
    v17 = **a2;
    if ( *(_DWORD *)(v17 + 116) == v16 )
    {
      *(_DWORD *)(v17 + 124) |= 3u;
    }
    else
    {
      v18 = *(_DWORD *)(v17 + 116) == 0;
      v17 = **a2;
      v19 = *(_DWORD *)(v17 + 124);
      if ( v18 )
        v20 = v19 & 0xFFFFFFFC | 2;
      else
        v20 = v19 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v17 + 124) = v20;
    }
    v21 = **a2;
    return (unsigned int)(2 * *(_DWORD *)(GetDPIMetrics(v17) + 28) + *(_DWORD *)(v21 + 68));
  }
  else
  {
    *(_DWORD *)(**a2 + 124) &= 0xFFFFFFFC;
    *(_DWORD *)(**a2 + 116) = 0;
    *(_DWORD *)(**a2 + 120) = 0;
    return *(unsigned int *)(**a2 + 68);
  }
}
