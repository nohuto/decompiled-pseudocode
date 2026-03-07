__int64 __fastcall MiEnumerateSlabAllocators(
        __int64 a1,
        unsigned int (__fastcall *a2)(__int64, unsigned __int64, __int64),
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int v8; // ebx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp

  v4 = (unsigned __int16)KeNumberNodes;
  if ( a4 != -1 )
    v4 = a4 + 1;
  v8 = 0;
  if ( a4 != -1 )
    v8 = a4;
LABEL_7:
  if ( v8 >= v4 )
    return 0LL;
  v10 = 25408LL * v8 + *(_QWORD *)(a1 + 16) + 23392LL;
  v11 = v10 + 1848;
  while ( 1 )
  {
    if ( v10 >= v11 )
    {
      ++v8;
      goto LABEL_7;
    }
    if ( a2(a1, v10, a3) )
      return 1LL;
    v10 += 264LL;
  }
}
