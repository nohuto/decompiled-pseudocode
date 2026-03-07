void __fastcall CPTPProcessor::EndInertia(CPTPProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  CInertiaManager *v6; // rcx

  if ( *((_BYTE *)this + 384) )
  {
    v5 = SGDGetUserSessionState(this, a2, a3, a4);
    CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(v5 + 16840), 1, 0, *((void **)this + 65));
    *((_BYTE *)this + 384) = 0;
  }
  if ( (*((_DWORD *)this + 95) & 1) != 0 )
  {
    SGDGetUserSessionState(this, a2, a3, a4);
    CInertiaManager::PostInertiaMessage(
      v6,
      0x23Cu,
      (CPTPProcessor *)((char *)this + 168),
      *(struct tagPOINT *)((char *)this + 360),
      *(struct tagPOINT *)((char *)this + 368));
    *((_DWORD *)this + 95) &= ~1u;
  }
}
