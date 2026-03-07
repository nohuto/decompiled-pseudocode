char *__fastcall std::_Uninitialized_move<CGlobalSurfaceManager::AdapterInfo *>(_QWORD *a1, _QWORD *a2, char *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 1;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_QWORD *)a3 = *(v4 - 1);
      a3 += 24;
      *(_QWORD *)&v5[(_QWORD)v4] = *v4;
      *v4 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 8) = v4[1];
      v4 += 3;
    }
    while ( v4 - 1 != a2 );
  }
  std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(a3, a3);
  return a3;
}
