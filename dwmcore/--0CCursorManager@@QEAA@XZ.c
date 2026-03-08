/*
 * XREFs of ??0CCursorManager@@QEAA@XZ @ 0x1800B00CC
 * Callers:
 *     _dynamic_initializer_for__g_CursorManager__ @ 0x180003CE0 (_dynamic_initializer_for__g_CursorManager__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

CCursorManager *__fastcall CCursorManager::CCursorManager(CCursorManager *this)
{
  SIZE_T size_of; // rax
  __int64 v2; // rax

  InitializeCriticalSection(&g_CursorManager);
  xmmword_1803E3268 = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)&xmmword_1803E3268 = v2;
  return (CCursorManager *)&g_CursorManager;
}
