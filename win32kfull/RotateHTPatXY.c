__int64 __fastcall RotateHTPatXY(__int64 a1, _WORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebp
  int v8; // ebx
  unsigned __int16 *v11; // r9
  unsigned int v12; // r10d
  __int64 result; // rax
  int v14; // edi
  __int64 v15; // r12
  unsigned __int16 *v16; // rcx
  _WORD *v17; // rdx
  int i; // r8d
  int v19; // r8d
  unsigned __int16 *j; // rcx

  v7 = a4;
  v8 = a7;
  v11 = (unsigned __int16 *)(a1 + 6LL * (unsigned int)(a6 + a7 * a5));
  v12 = 6 * a5;
  result = (unsigned int)(6 * a3);
  if ( v7 )
  {
    v14 = a3 - a6;
    v15 = (unsigned int)result;
    do
    {
      v16 = v11;
      v17 = a2;
      v11 = (unsigned __int16 *)((char *)v11 + v12);
      a2 = (_WORD *)((char *)a2 + v12);
      --v7;
      for ( i = v14; i; --i )
      {
        result = *v16;
        v16 += 3;
        *v17 = result;
        v17 += 3;
      }
      v19 = a6;
      for ( j = (unsigned __int16 *)((char *)v16 - v15); v19; --v19 )
      {
        result = *j;
        j += 3;
        *v17 = result;
        v17 += 3;
      }
      if ( ++v8 == a4 )
      {
        v8 = 0;
        result = v12 * a4;
        v11 = (unsigned __int16 *)((char *)v11 - result);
      }
    }
    while ( v7 );
  }
  return result;
}
