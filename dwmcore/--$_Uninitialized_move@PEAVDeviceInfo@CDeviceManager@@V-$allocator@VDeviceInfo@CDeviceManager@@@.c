char *__fastcall std::_Uninitialized_move<CDeviceManager::DeviceInfo *>(_QWORD *a1, _QWORD *a2, char *a3)
{
  _QWORD *v5; // rax
  signed __int64 v6; // r9
  char *v7; // r10
  char *v8; // rdx

  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = (char *)a1 - a3;
    v7 = (char *)(a3 - (char *)a1);
    do
    {
      *(_QWORD *)a3 = 0LL;
      v8 = (char *)v5 + (_QWORD)v7;
      v8[8] = 0;
      *(_QWORD *)a3 = *v5;
      a3 += 16;
      v8[8] = *((_BYTE *)v5 + (_QWORD)v7 + v6 + 8);
      *v5 = 0LL;
      v5 += 2;
    }
    while ( v5 != a2 );
  }
  std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(a3, a3);
  return a3;
}
