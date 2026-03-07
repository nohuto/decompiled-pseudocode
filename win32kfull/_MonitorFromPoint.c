__int64 __fastcall MonitorFromPoint(__int64 a1, unsigned int a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 DispInfo; // rdi
  __int64 i; // rdi
  __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned int k; // ebp
  unsigned int v14; // ecx
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 j; // rbp
  int v19; // eax
  int v20; // edx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+94h] [rbp+Ch]

  v25 = HIDWORD(a1);
  v6 = 0LL;
  DispInfo = GetDispInfo(a1);
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo(v7) + 96);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      if ( !*((_QWORD *)PtiCurrentShared(v7) + 57)
        || (v7 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared(v7) + 57) + 8LL), (*(_DWORD *)(v7 + 64) & 1) == 0) )
      {
        CurrentThreadDpiAwarenessContext = 18;
      }
    }
  }
  if ( a2 <= 1 )
  {
    for ( i = *(_QWORD *)(DispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      v11 = *(_QWORD *)(i + 40);
      if ( (*(_DWORD *)(v11 + 24) & 1) != 0 )
      {
        v12 = CurrentThreadDpiAwarenessContext >> 8;
        LOWORD(v12) = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
        CalculateLogicalMonitorRect(
          (unsigned int)&v23,
          v11 + 28,
          *(unsigned __int16 *)(v11 + 60),
          v12,
          *(_WORD *)(v11 + 62));
        v24 = v23;
        if ( (unsigned int)PtInRect(&v24, a1) )
          return i;
      }
    }
    if ( a2 == 1 )
      return *(_QWORD *)(GetDispInfo(v7) + 96);
    return 0LL;
  }
  if ( a2 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v25 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 104);
    for ( j = -1LL; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        GetMonitorRectForDpi((__int64 *)&v23, i, (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF);
        if ( (int)a1 >= (int)v23 )
          v19 = (int)a1 >= SDWORD2(v23) ? a1 - DWORD2(v23) + 1 : 0;
        else
          v19 = v23 - a1;
        if ( v19 < j )
        {
          if ( v25 >= SDWORD1(v23) )
          {
            if ( v25 >= SHIDWORD(v23) )
            {
              v20 = v25 - HIDWORD(v23) + 1;
            }
            else
            {
              if ( !v19 )
                return i;
              v20 = 0;
            }
          }
          else
          {
            v20 = DWORD1(v23) - v25;
          }
          v21 = v19 * (__int64)v19;
          if ( v21 < j && v20 + v21 < j )
          {
            v22 = v20 * (__int64)v20 + v21;
            if ( v22 < j )
            {
              j = v22;
              v6 = i;
            }
          }
        }
      }
    }
  }
  else
  {
    i = *(_QWORD *)(DispInfo + 104);
    for ( k = -1; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        GetMonitorRectForDpi((__int64 *)&v23, i, (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF);
        if ( (int)a1 >= (int)v23 )
          v14 = (int)a1 >= SDWORD2(v23) ? a1 - DWORD2(v23) + 1 : 0;
        else
          v14 = v23 - a1;
        if ( v14 < k )
        {
          if ( v25 >= SDWORD1(v23) )
          {
            if ( v25 >= SHIDWORD(v23) )
            {
              v15 = v25 - HIDWORD(v23) + 1;
            }
            else
            {
              if ( !v14 )
                return i;
              v15 = 0;
            }
          }
          else
          {
            v15 = DWORD1(v23) - v25;
          }
          v16 = v14 * v14;
          if ( v16 < k && v16 + v15 < k )
          {
            v17 = v15 * v15 + v16;
            if ( v17 < k )
            {
              k = v17;
              v6 = i;
            }
          }
        }
      }
    }
  }
  return v6;
}
