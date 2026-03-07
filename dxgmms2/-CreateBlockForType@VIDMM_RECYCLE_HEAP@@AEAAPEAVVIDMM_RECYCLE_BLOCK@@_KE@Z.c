struct VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockForType(
        VIDMM_RECYCLE_HEAP *this,
        unsigned __int64 a2,
        unsigned __int8 a3)
{
  VIDMM_RECYCLE_BLOCK *v6; // rax
  VIDMM_RECYCLE_BLOCK *v7; // rax
  VIDMM_RECYCLE_BLOCK *v8; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx

  v6 = (VIDMM_RECYCLE_BLOCK *)operator new(144LL, 0x31316956u, 256LL);
  if ( v6 && (v7 = VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(v6, this), (v8 = v7) != 0LL) )
  {
    if ( *((_BYTE *)this + 16) )
      a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    if ( (int)VIDMM_RECYCLE_BLOCK::Allocate(v7, a2, a3) >= 0 )
      return v8;
    _InterlockedIncrement(&dword_1C00767F4);
    WdLogSingleEntry1(6LL, 9870LL);
    DxgkLogInternalTriageEvent(v10, 262145LL);
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v8);
  }
  else
  {
    _InterlockedIncrement(&dword_1C00767F4);
    WdLogSingleEntry1(6LL, 9852LL);
    DxgkLogInternalTriageEvent(v11, 262145LL);
  }
  return 0LL;
}
