__int64 __fastcall PrepareGammaRampData(unsigned int *a1, unsigned int **a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 DCEx; // rax
  __int64 v8; // rdi
  unsigned int DeviceCaps; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned int *v12; // rax
  unsigned int *v13; // rsi
  _QWORD *i; // r9
  __int64 DisplayDC; // rax
  __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // eax

  v6 = 0;
  DCEx = _GetDCEx(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL), 0LL, 8388611LL);
  v8 = DCEx;
  if ( !DCEx )
    return 3221225495LL;
  DeviceCaps = GreGetDeviceCaps(DCEx, 116LL);
  *a1 = DeviceCaps;
  if ( DeviceCaps < 0x3C )
    *a1 = 60;
  _ReleaseDC(v8);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v10 = *(_QWORD *)(gpDispInfo + 104LL);
  while ( v10 )
  {
    v17 = *(_QWORD *)(v10 + 40);
    v10 = *(_QWORD *)(v10 + 56);
    v18 = *(_DWORD *)(v17 + 24);
    v19 = v6 + 1;
    if ( (v18 & 1) == 0 )
      v19 = v6;
    v6 = v19;
  }
  v11 = 1544LL * v6;
  if ( v11 > 0xFFFFFFFF || (unsigned int)v11 >= 0xFFFFF9F8 )
  {
    _ReleaseDC(v8);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    return 3221225621LL;
  }
  v12 = (unsigned int *)Win32AllocPoolZInit((unsigned int)(v11 + 1544), 1835231559LL);
  v13 = v12;
  if ( !v12 )
  {
    _ReleaseDC(v8);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    return 3221225495LL;
  }
  *v12 = v6;
  if ( !gProtocolType )
  {
    for ( i = *(_QWORD **)(gpDispInfo + 104LL); i; i = (_QWORD *)i[7] )
    {
      if ( (*(_DWORD *)(i[5] + 24LL) & 1) != 0 )
      {
        DisplayDC = GreCreateDisplayDC(i[10], 0LL);
        if ( DisplayDC )
          GreDeleteDC(DisplayDC);
        break;
      }
    }
  }
  *a3 = 0;
  *a2 = v13;
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return 0LL;
}
