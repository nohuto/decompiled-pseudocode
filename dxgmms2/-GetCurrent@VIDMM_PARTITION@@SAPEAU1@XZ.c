struct VIDMM_PARTITION *VIDMM_PARTITION::GetCurrent(void)
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  v0 = 0LL;
  if ( ((__int64 (*)(void))DxgCoreInterface[6])() )
  {
    v1 = *(_QWORD *)(((__int64 (*)(void))DxgCoreInterface[6])() + 64);
    if ( v1 )
      v2 = *(_QWORD *)(v1 + 8);
    else
      v2 = 0LL;
    if ( v2 )
      return *(struct VIDMM_PARTITION **)(v2 + 288);
  }
  return (struct VIDMM_PARTITION *)v0;
}
