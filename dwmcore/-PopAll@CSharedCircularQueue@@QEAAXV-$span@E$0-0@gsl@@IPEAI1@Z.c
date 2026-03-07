__int64 __fastcall CSharedCircularQueue::PopAll(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  unsigned int v9; // r11d
  unsigned int v10; // r12d
  unsigned int v11; // r11d
  unsigned int v12; // edi
  __int64 v13; // rbp
  unsigned int v14; // ebx

  result = *(_QWORD *)a1;
  v7 = 0;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
  *a5 = v9;
  *a4 = 0;
  if ( v9 > a3 )
  {
    result = (unsigned int)(*(_DWORD *)a2 / a1[2]);
    v10 = a1[3];
    v11 = v9 - a3;
    v12 = v10;
    if ( v10 >= (unsigned int)result )
      v12 = *(_DWORD *)a2 / a1[2];
    if ( v11 < v12 )
      v12 = v11;
    if ( v12 )
    {
      v13 = *(_QWORD *)(a2 + 8);
      do
      {
        v14 = *a5 - v7 - 1;
        memcpy_0(
          (void *)(v13 + v7 * a1[2]),
          (const void *)(a1[2] * (v14 % v10) + *(_QWORD *)a1 + 8LL),
          (unsigned int)a1[2]);
        v10 = a1[3];
        result = v10 + v14;
        if ( **(_DWORD **)a1 > (unsigned int)result )
          break;
        v7 = *a4 + 1;
        *a4 = v7;
      }
      while ( v7 < v12 );
    }
  }
  return result;
}
