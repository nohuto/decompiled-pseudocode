__int64 __fastcall VIDMM_GLOBAL::MapCpuVA(
        VIDMM_GLOBAL *this,
        VIDMM_FENCE_STORAGE_PAGE **a2,
        void **a3,
        unsigned int a4)
{
  struct VIDMM_PROCESS *v8; // rbx
  __int64 v9; // r10

  v8 = 0LL;
  if ( DXGPROCESS::GetCurrent() )
  {
    v9 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v9 )
      v8 = *(struct VIDMM_PROCESS **)(v9 + 8);
  }
  return VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
           *a2,
           v8,
           (struct VIDMM_MONITORED_FENCE_STORAGE *)a2,
           (*((_BYTE *)this + 40936) & 0x10) != 0,
           (*((_BYTE *)this + 40936) & 0x20) != 0,
           a3,
           a4);
}
