/*
 * XREFs of ??0?$queue@UCachedInputInfo@@V?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x18003AEF4
 * Callers:
 *     _dynamic_initializer_for__Win32kInterop::s_inputInfoCachedQueue__ @ 0x180001730 (_dynamic_initializer_for__Win32kInterop--s_inputInfoCachedQueue__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *std::queue<CachedInputInfo>::queue<CachedInputInfo,std::deque<CachedInputInfo>>()
{
  _QWORD *v0; // rax

  qword_180209BE0 = 0LL;
  qword_180209BE8 = 0LL;
  qword_180209BF0 = 0LL;
  Win32kInterop::s_inputInfoCachedQueue = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v0[1] = 0LL;
  *(_QWORD *)&Win32kInterop::s_inputInfoCachedQueue = v0;
  *v0 = &Win32kInterop::s_inputInfoCachedQueue;
  return &Win32kInterop::s_inputInfoCachedQueue;
}
