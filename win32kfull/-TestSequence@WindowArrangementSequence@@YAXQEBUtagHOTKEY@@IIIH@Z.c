void __fastcall WindowArrangementSequence::TestSequence(
        WindowArrangementSequence *this,
        const struct tagHOTKEY *const a2,
        int a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  int v6; // eax
  __int64 v7; // rcx
  bool v8; // zf

  if ( this )
  {
    if ( (a4 | ((unsigned __int16)a2 << 16)) == *(_QWORD *)(SGDGetUserSessionState(this) + 13784) )
      return;
    v6 = *(_QWORD *)this == gptiRit && (unsigned int)(*((_DWORD *)this + 10) - 16) <= 8;
    if ( WindowArrangementSequence::fWindowArrangementSequenceInProgress == v6 )
      return;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = v6;
    v8 = v6 == 0;
    goto LABEL_19;
  }
  if ( a5 )
  {
    if ( !a3 )
    {
      if ( !WindowArrangementSequence::fWindowArrangementSequenceInProgress )
        return;
      goto LABEL_20;
    }
    if ( !WindowArrangementSequence::fWindowArrangementSequenceInProgress )
      return;
    v8 = (a3 & 0xE) == 0;
LABEL_19:
    if ( !v8 )
      return;
LABEL_20:
    v7 = 1LL;
    goto LABEL_21;
  }
  if ( a3 == 8 && WindowArrangementSequence::fWindowArrangementSequenceInProgress )
  {
    v7 = 2LL;
LABEL_21:
    NotifyShell::ArrangementHotKey(v7, 8LL);
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
}
