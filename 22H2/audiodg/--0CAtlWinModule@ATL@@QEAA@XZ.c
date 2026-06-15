/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x140013810
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001220 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012490 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_140090058 = 0LL;
  dword_140090060 = 0;
  dword_140090064 = 0;
  qword_140090050 = 0LL;
  stru_140090028 = 0LL;
  *(&stru_140090028 + 4) = 0LL;
  *(&stru_140090028 + 1) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_140090028) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
