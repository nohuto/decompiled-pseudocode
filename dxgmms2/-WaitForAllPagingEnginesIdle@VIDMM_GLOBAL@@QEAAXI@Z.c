void __fastcall VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(VIDMM_GLOBAL *this, unsigned int a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r10d
  VIDMM_GLOBAL *v4; // rdx

  v2 = -1;
  if ( a2 == -1 )
  {
    v3 = *((_DWORD *)this + 1754);
    v4 = this;
  }
  else
  {
    v2 = a2;
    v3 = 1;
    v4 = (VIDMM_GLOBAL *)((char *)this + 8 * a2);
  }
  VIDMM_GLOBAL::xWaitForAllPagingEngines(
    this,
    (struct _VIDSCH_SYNC_OBJECT **)v4 + 749,
    (const unsigned __int64 *)v4 + 685,
    v3,
    0LL,
    v2);
}
