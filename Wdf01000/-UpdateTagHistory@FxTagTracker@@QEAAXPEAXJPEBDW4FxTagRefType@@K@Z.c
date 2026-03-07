void __fastcall FxTagTracker::UpdateTagHistory(
        FxTagTracker *this,
        void *Tag,
        int Line,
        const char *File,
        FxTagRefType RefType,
        unsigned int RefCount)
{
  unsigned __int16 v9; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 v12; // rbx
  USHORT v13; // ax
  void *v14; // rax
  ULONG v15; // ecx
  FX_POOL **v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  KIRQL v19; // al
  KIRQL v20; // al
  FxTagTrackingBlock **p_m_Next; // rcx
  FxTagTrackingBlock *m_Next; // rbx
  FxTagTrackingBlock *Next; // rdx
  unsigned int v24; // r8d
  unsigned __int16 v25; // r9
  const char *globals; // rcx
  const _GUID *Initial; // [rsp+20h] [rbp-128h]
  __m128i v28; // [rsp+50h] [rbp-F8h]
  __m128i v29; // [rsp+60h] [rbp-E8h] BYREF
  void *frames[16]; // [rsp+70h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+148h] [rbp+0h]

  v9 = 0;
  memset(frames, 0, sizeof(frames));
  m_Globals = this->m_Globals;
  v12 = _InterlockedExchangeAdd(&this->m_CurRefHistory, 1u) % 0x19u;
  this->m_TagHistory[v12].RefType = RefType;
  this->m_TagHistory[v12].RefCount = RefCount;
  this->m_TagHistory[v12].Line = Line;
  this->m_TagHistory[v12].Tag = Tag;
  this->m_TagHistory[v12].File = File;
  if ( this->m_CaptureStack )
  {
    v13 = RtlCaptureStackBackTrace(3u, 0x10u, frames, 0LL);
    v9 = v13;
    if ( v13 )
      FxTagTracker::CopyStackFrames(this, (FX_POOL ***)&this->m_TagHistory[v12].StackFrames, v13, frames);
  }
  this->m_TagHistory[v12].Time.QuadPart = MEMORY[0xFFFFF78000000320];
  v14 = 0LL;
  if ( RefType )
  {
    v20 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    p_m_Next = &this->m_Next;
    m_Next = this->m_Next;
    if ( m_Next )
    {
      while ( 1 )
      {
        Next = m_Next->Next;
        if ( m_Next->Tag == Tag )
          break;
        p_m_Next = (FxTagTrackingBlock **)m_Next;
        m_Next = m_Next->Next;
        if ( !Next )
          goto LABEL_18;
      }
      *p_m_Next = Next;
    }
LABEL_18:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v20);
    if ( m_Next )
    {
      FxTagTrackingBlock::`scalar deleting destructor'(m_Next);
    }
    else if ( _InterlockedDecrement(&this->m_FailedCount) < 0 )
    {
      _InterlockedIncrement(&this->m_FailedCount);
      globals = "power tag";
      if ( this->m_TrackerType != FxTagTrackerTypePower )
        globals = "tag";
      WPP_IFR_SF_sqqq(m_Globals, (unsigned __int8)"tag", v24, v25, Initial, globals, Tag, this->m_OwningObject, this);
      FxVerifierDbgBreakPoint(m_Globals);
    }
  }
  else
  {
    v15 = m_Globals->Tag;
    v28.m128i_i64[0] = 0LL;
    v28.m128i_i64[1] = 64LL;
    if ( m_Globals->FxPoolTrackingOn )
      v14 = retaddr;
    v29 = v28;
    v16 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v29, 0x30uLL, v15, v14);
    if ( v16
      && (FxTagTrackingBlock::FxTagTrackingBlock((FxTagTrackingBlock *)v16, Tag, Line, File, 0), (v18 = v17) != 0) )
    {
      v19 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      *(_QWORD *)v18 = this->m_Next;
      this->m_Next = (FxTagTrackingBlock *)v18;
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v19);
      if ( this->m_CaptureStack )
      {
        if ( v9 )
          FxTagTracker::CopyStackFrames(this, (FX_POOL ***)(v18 + 40), v9, frames);
      }
    }
    else
    {
      _InterlockedIncrement(&this->m_FailedCount);
    }
  }
}
