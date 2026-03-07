void __fastcall VIDMM_GLOBAL::FreePhysical(struct _VIDMM_POOL_BLOCK *a1)
{
  if ( VIDMM_GLOBAL::m_PhysicalBlock )
  {
    if ( VIDMM_GLOBAL::m_pPhysicalPool )
      VIDMM_LINEAR_POOL::Free((VIDMM_LINEAR_POOL *)VIDMM_GLOBAL::m_pPhysicalPool, a1);
  }
}
