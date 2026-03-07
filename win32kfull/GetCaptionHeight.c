__int64 __fastcall GetCaptionHeight(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r10d
  int v4; // r8d
  unsigned int v5; // r10d
  __int64 v6; // rbx
  unsigned int v7; // r10d
  __int64 result; // rax
  __int64 v9; // rax
  unsigned int WindowDpiLastNotify; // r10d
  __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v2 + 16) & 8) == 0 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 288);
  v4 = v3 & 0xF;
  if ( *(char *)(v2 + 24) < 0 )
  {
    if ( v4 == 3 )
    {
      WindowDpiLastNotify = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v3 & 0xF) == 0
           && (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    return GetDpiDependentMetric(22LL, WindowDpiLastNotify);
  }
  else
  {
    if ( v4 == 3 )
    {
      v5 = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
    {
      v5 = GetWindowDpiLastNotify(a1);
    }
    else if ( (v3 & 0xF) == 0
           && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
    {
      v5 = 96;
    }
    else
    {
      v5 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v6 = 120LL * (int)GetDpiCacheSlot(v5);
    result = *(unsigned int *)(v6 + gpsi + 2292);
    if ( (_DWORD)result == -1 )
    {
      EnsureDpiDepSysMetCacheForPlateau(v7);
      result = *(unsigned int *)(v6 + gpsi + 2292);
      if ( (_DWORD)result == -1 )
        return 0LL;
    }
  }
  return result;
}
