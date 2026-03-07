CSceneResourceManager *__fastcall CSceneResourceManager::CSceneResourceManager(
        CSceneResourceManager *this,
        struct CComposition *a2)
{
  SIZE_T size_of; // rax
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CSceneResourceManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 8) = v4;
  return this;
}
