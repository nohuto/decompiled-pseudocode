char *__fastcall VIDMM_GLOBAL::AllocatePhysical(__int64 a1, unsigned int a2, void **a3)
{
  union _LARGE_INTEGER v4; // [rsp+88h] [rbp+20h] BYREF

  if ( VIDMM_GLOBAL::m_PhysicalBlock
    && VIDMM_GLOBAL::m_pPhysicalPool
    && (v4.QuadPart = 0LL,
        (int)VIDMM_LINEAR_POOL::Allocate(
               (VIDMM_LINEAR_POOL *)VIDMM_GLOBAL::m_pPhysicalPool,
               a1,
               a2,
               0LL,
               0LL,
               0LL,
               1,
               0,
               0LL,
               &v4,
               a3) >= 0) )
  {
    return (char *)VIDMM_GLOBAL::m_PhysicalBlock + v4.QuadPart;
  }
  else
  {
    return 0LL;
  }
}
