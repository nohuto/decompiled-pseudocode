__int64 __fastcall VIDMM_LINEAR_POOL::AllocateAt(
        VIDMM_LINEAR_POOL *this,
        union _LARGE_INTEGER a2,
        __int64 a3,
        __int64 a4,
        void **a5)
{
  void *v6; // [rsp+40h] [rbp-28h]
  union _LARGE_INTEGER v7; // [rsp+78h] [rbp+10h] BYREF

  v6 = (void *)a4;
  LOBYTE(a4) = 1;
  return VIDMM_LINEAR_POOL::Allocate(this, a3, 0LL, a4, a2.QuadPart, a2.QuadPart + a3, 0, 0, v6, &v7, a5);
}
