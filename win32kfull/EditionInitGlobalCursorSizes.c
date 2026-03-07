__int64 EditionInitGlobalCursorSizes()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = Win32AllocPoolZInit(80LL, 1919964227LL);
  result = 0LL;
  if ( v0 )
  {
    *(_DWORD *)v0 = 32;
    *(_DWORD *)(v0 + 4) = 32;
    *(_OWORD *)(v0 + 8) = 0LL;
    *(_OWORD *)(v0 + 24) = 0LL;
    *(_OWORD *)(v0 + 40) = 0LL;
    *(_QWORD *)(v0 + 56) = 0LL;
    *(_QWORD *)(v0 + 64) = 0LL;
    *(_QWORD *)(v0 + 72) = 0LL;
    CCursorSizes::zzzRefreshSizes((CCursorSizes *)v0);
    result = 1LL;
    gpCursorSizes = (CCursorSizes *)v0;
  }
  else
  {
    gpCursorSizes = 0LL;
  }
  return result;
}
