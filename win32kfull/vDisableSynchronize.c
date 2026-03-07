__int64 __fastcall vDisableSynchronize(__int64 a1)
{
  int v2; // esi
  Gre::Base *v3; // rcx
  int v4; // edi
  __int64 result; // rax
  signed __int32 v6; // ett
  struct Gre::Base::SESSION_GLOBALS *v7; // rax

  v2 = 0;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v4 = 0;
    result = UserIsUserCritSecInShared();
    v2 = result;
  }
  else
  {
    v4 = 1;
    v7 = Gre::Base::Globals(v3);
    result = GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v7 + 10));
    if ( (_DWORD)result )
    {
      v2 = 1;
      v4 = 0;
    }
    else
    {
      result = UserEnterUserCritSec();
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800) != 0 )
  {
    if ( v2 )
      UserPostNKAPC(
        KeGetCurrentThread(),
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPC,
        *(unsigned int *)(a1 + 2096));
    else
      vDisableTimers(*(_DWORD *)(a1 + 2096));
    _m_prefetchw((const void *)(a1 + 40));
    do
    {
      v6 = *(_DWORD *)(a1 + 40);
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v6 & 0xFFFFF7FF, v6);
    }
    while ( v6 != (_DWORD)result );
  }
  if ( v4 )
    return UserLeaveUserCritSec();
  return result;
}
