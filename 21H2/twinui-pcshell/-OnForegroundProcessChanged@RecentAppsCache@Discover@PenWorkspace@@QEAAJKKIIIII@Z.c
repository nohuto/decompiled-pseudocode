/*
 * XREFs of ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x18003A1E0
 * Callers:
 *     ?OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z @ 0x18003A1D0 (-OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801AD224 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAX_K@Z @ 0x180292BB0 (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r14
  _QWORD *Ptr; // rax
  __int64 v13; // rax
  const char *v14; // r9
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16 = __PAIR64__(a3, a2);
  v9 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  if ( this[15].Ptr <= (char *)this[17].Ptr + 1 )
    std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Growmap(&this[13]);
  v10 = (__int64)this[16].Ptr & ((__int64)this[15].Ptr - 1);
  this[16].Ptr = (PVOID)v10;
  v11 = ((__int64)this[17].Ptr + v10) & ((__int64)this[15].Ptr - 1);
  Ptr = this[14].Ptr;
  if ( !Ptr[v11] )
  {
    *((_QWORD *)this[14].Ptr + v11) = std::_Allocate<16,std::_Default_allocate_traits,0>(12LL);
    Ptr = this[14].Ptr;
  }
  v13 = Ptr[v11];
  *(_QWORD *)v13 = v16;
  *(_DWORD *)(v13 + 8) = a8;
  ++this[17].Ptr;
  if ( !SetEvent(this[19].Ptr) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x91C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v14);
    JUMPOUT(0x18018A219LL);
  }
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  return 0LL;
}
