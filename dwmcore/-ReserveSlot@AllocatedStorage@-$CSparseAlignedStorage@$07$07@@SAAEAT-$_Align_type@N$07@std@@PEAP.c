char *__fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(_DWORD **a1, char a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rdi
  unsigned int *v6; // r13
  unsigned int v7; // ecx
  const void *v8; // r12
  _BYTE *v9; // rax
  _DWORD *v11; // r14

  v2 = *a1;
  v3 = 0LL;
  v6 = *a1 + 1;
  v7 = *v6;
  v8 = v2 + 2;
  if ( *v6 )
  {
    v9 = v2 + 2;
    do
    {
      if ( !*v9 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v9;
    }
    while ( (unsigned int)v3 < v7 );
  }
  if ( (_DWORD)v3 == v7 )
  {
    v11 = v2;
    v2 = CSparseAlignedStorage<8,8>::AllocatedStorage::Allocate(v7 + 4);
    *a1 = v2;
    if ( v11 != (_DWORD *)&CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage )
    {
      *v2 = *v11;
      memcpy_0(v2 + 2, v8, *v6);
      memcpy_0(
        (char *)v2 + (((unsigned int)v2[1] + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
        (char *)v11 + ((*v6 + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
        8LL * *v6);
      operator delete(v11);
    }
  }
  *v2 |= __ROR4__(1, a2);
  *((_BYTE *)v2 + v3 + 8) = a2;
  return (char *)v2 + (unsigned int)v2[1] + 8LL * (unsigned int)v3 - (((unsigned __int8)v2[1] + 15) & 7) + 15;
}
