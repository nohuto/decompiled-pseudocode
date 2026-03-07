unsigned __int64 __fastcall VmpProcessAccessedBatch(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4, int a5)
{
  __int64 v6; // rbp
  int SparseGpaPagesAccessState; // eax
  __int64 v10; // rcx
  int v11; // r9d
  unsigned __int64 result; // rax
  _BYTE *i; // rdx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-40h] BYREF

  v14 = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    if ( v6 == -1 )
    {
      v10 = 0LL;
      v11 = -1073741823;
      v14 = 0LL;
    }
    else
    {
      SparseGpaPagesAccessState = HvlGetSparseGpaPagesAccessState(v6, a5 != 0, a3, a2, (__int64)&v14, (__int64)v15);
      v10 = v14;
      v11 = SparseGpaPagesAccessState;
    }
    result = (unsigned __int64)v15;
    for ( i = v15; i < &v15[v10]; ++a4 )
    {
      if ( (*i & 1) != 0 )
        *a4 |= 1uLL;
      ++i;
      result = *a4 & 0xFFFFFFFFFFFFFFF9uLL | 4;
      *a4 = result;
    }
    a2 += 8 * v10;
    a3 -= v10;
    if ( !a3 )
      break;
    if ( v11 < 0 )
    {
      result = *a4;
      if ( (*a4 & 4) == 0 )
      {
        result |= 6uLL;
        *a4 = result;
      }
      a2 += 8LL;
      ++a4;
      if ( !--a3 )
        break;
    }
  }
  return result;
}
