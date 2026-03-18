/*
 * XREFs of ?CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z @ 0x1C005B6F8
 * Callers:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B788 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 */

void __fastcall FxTagTracker::CopyStackFrames(
        FxTagTracker *this,
        FX_POOL ***StackFrames,
        unsigned __int16 NumFrames,
        void **Frames)
{
  char *v4; // r10
  __int64 v6; // rdi
  FX_POOL **v8; // rax
  __int64 v9; // rcx
  signed __int64 v10; // r10
  void *Caller; // [rsp+38h] [rbp+0h]

  v4 = (char *)*StackFrames;
  v6 = NumFrames;
  if ( !*StackFrames )
  {
    v8 = FxPoolAllocator(
           this->m_Globals,
           &this->m_Globals->FxPoolFrameworks,
           ExDefaultNonPagedPoolType,
           0x88uLL,
           this->m_Globals->Tag,
           Caller);
    v4 = (char *)v8;
    if ( !v8 )
      return;
    *StackFrames = v8;
  }
  *(_WORD *)v4 = v6;
  v9 = v6;
  if ( v6 )
  {
    v10 = v4 - (char *)Frames;
    do
    {
      *(void **)((char *)Frames + v10 + 8) = *Frames;
      ++Frames;
      --v9;
    }
    while ( v9 );
  }
}
