__int64 __fastcall VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(__int64, unsigned __int64, __int64, __int64),
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9)
{
  _QWORD *v9; // r14
  _QWORD *v13; // rbx
  unsigned int v14; // r8d
  unsigned __int64 *v15; // rdi

  v9 = (_QWORD *)(a1 + 72);
  if ( a4 )
    v13 = *(_QWORD **)(a1 + 80);
  else
    v13 = (_QWORD *)*v9;
  v14 = 0;
  while ( v13 != v9 )
  {
    v15 = v13 - 5;
    if ( a4 )
      v13 = (_QWORD *)v13[1];
    else
      v13 = (_QWORD *)*v13;
    if ( *v15 + v15[1] > a2 )
    {
      if ( *v15 < a3 )
      {
        if ( (unsigned __int8)(*((_BYTE *)v15 + 56) - 3) <= 1u )
        {
          v14 = a5(a6, v15[2], a9, a7);
          if ( (v14 & 0x80000000) != 0 )
          {
            *a8 = v15[2];
            return v14;
          }
        }
      }
      else if ( !a4 )
      {
        return v14;
      }
    }
    else if ( a4 )
    {
      return v14;
    }
  }
  return v14;
}
