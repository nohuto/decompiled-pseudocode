void __fastcall vEnableSynchronize(__int64 a1)
{
  int v1; // esi
  __int64 v3; // rcx
  char v4; // bp
  __int64 v5; // rdi
  signed __int32 v6; // ett

  v1 = *(_DWORD *)(a1 + 2096);
  if ( (v1 & 0xC0) != 0 )
  {
    if ( (unsigned int)UserIsUserCritSecIn() )
    {
      v4 = 0;
    }
    else
    {
      v4 = 1;
      UserEnterUserCritSec();
    }
    v5 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
    if ( (v1 & 0x80u) != 0 && (*(_QWORD *)(v5 + 20256))++ == -1LL )
      *(_QWORD *)(v5 + 20256) = UserSetTimer();
    if ( (v1 & 0x40) != 0 )
      ++*(_DWORD *)(v5 + 20248);
    _m_prefetchw((const void *)(a1 + 40));
    do
      v6 = *(_DWORD *)(a1 + 40);
    while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v6 | 0x800, v6) );
    if ( v4 )
      UserLeaveUserCritSec();
  }
}
