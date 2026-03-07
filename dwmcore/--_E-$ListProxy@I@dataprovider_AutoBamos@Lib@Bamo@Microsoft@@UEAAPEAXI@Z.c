_QWORD *__fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListProxy<unsigned int>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx

  v4 = (void *)a1[6];
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (a1[8] - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
    a1[6] = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
  }
  v5 = a1[4];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
