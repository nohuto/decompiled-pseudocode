void __fastcall FastRegion::Internal::CStripe::Copy(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  char *v4; // rax
  __int64 v5; // r9
  char *v6; // r8
  char *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10
  _DWORD *v10; // rcx
  __int64 v11; // r8

  *(_DWORD *)this = *(_DWORD *)a3;
  v4 = (char *)a2 + 8;
  v5 = *((int *)a2 + 3);
  v6 = (char *)a2 + *((int *)a2 + 1);
  v7 = (char *)this + *((int *)this + 1);
  v8 = (__int64)&v4[v5 - (_QWORD)v6] >> 2;
  v9 = (int)v8;
  if ( (int)v8 > 0 )
  {
    v10 = (_DWORD *)((char *)this + *((int *)this + 1));
    v11 = v6 - v7;
    do
    {
      *v10 = *(_DWORD *)((char *)v10 + v11);
      ++v10;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)this + 3) = (_DWORD)v7 + 4 * v8 - ((_DWORD)this + 8);
}
