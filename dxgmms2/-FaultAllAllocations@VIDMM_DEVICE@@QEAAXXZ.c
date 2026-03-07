void __fastcall VIDMM_DEVICE::FaultAllAllocations(VIDMM_DEVICE *this)
{
  unsigned int v1; // ebx
  _QWORD **v3; // r14
  _QWORD *v4; // rsi
  struct VIDMM_ALLOC *v5; // rdx

  v1 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_DWORD *)this + 16) )
  {
    do
    {
      v3 = (_QWORD **)(56LL * v1 + *((_QWORD *)this + 5) + 32LL);
      v4 = *v3;
      while ( v4 != v3 )
      {
        v5 = (struct VIDMM_ALLOC *)(v4 - 7);
        v4 = (_QWORD *)*v4;
        if ( (*(_DWORD *)(**(_QWORD **)v5 + 68LL) & 0x100) == 0 )
          VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)this, v5);
      }
      ++v1;
    }
    while ( v1 < *((_DWORD *)this + 16) );
  }
}
