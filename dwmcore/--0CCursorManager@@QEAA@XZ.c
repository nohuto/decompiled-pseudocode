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
