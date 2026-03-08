/*
 * XREFs of ?CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z @ 0x1C00479C4
 * Callers:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C0047A7C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 */

void __fastcall FxTagTracker::CopyStackFrames(
        FxTagTracker *this,
        FX_POOL ***StackFrames,
        unsigned __int16 NumFrames,
        void **Frames)
{
  char *v4; // r10
  __int64 v6; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v9; // rax
  FX_POOL **v10; // rax
  __int64 v11; // rcx
  signed __int64 v12; // r10
  __m128i v13; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char *)*StackFrames;
  v6 = NumFrames;
  if ( *StackFrames )
  {
LABEL_7:
    *(_WORD *)v4 = v6;
    v11 = v6;
    if ( v6 )
    {
      v12 = v4 - (char *)Frames;
      do
      {
        *(void **)((char *)Frames + v12 + 8) = *Frames;
        ++Frames;
        --v11;
      }
      while ( v11 );
    }
    return;
  }
  m_Globals = this->m_Globals;
  v13.m128i_i64[0] = 0LL;
  v13.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v9 = retaddr;
  else
    v9 = 0LL;
  v10 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v13, 0x88uLL, m_Globals->Tag, v9);
  v4 = (char *)v10;
  if ( v10 )
  {
    *StackFrames = v10;
    goto LABEL_7;
  }
}
