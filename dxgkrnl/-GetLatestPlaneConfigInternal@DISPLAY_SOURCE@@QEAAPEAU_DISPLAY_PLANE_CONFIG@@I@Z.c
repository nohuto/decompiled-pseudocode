struct _DISPLAY_PLANE_CONFIG *__fastcall DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
        DISPLAY_SOURCE *this,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  if ( a2 >= *((_DWORD *)this + 940) )
    return 0LL;
  v3 = 168LL * a2;
  if ( *(_DWORD *)((char *)this + v3 + 1144) == -1 && *(_DWORD *)((char *)this + v3 + 1148) != -1 )
  {
    WdLogSingleEntry1(1LL, 9141LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
      9141LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *(int *)((char *)this + v3 + 1144);
  if ( (_DWORD)v4 == -1 )
    return 0LL;
  else
    return (DISPLAY_SOURCE *)((char *)this + 80 * v4 + v3 + 1152);
}
