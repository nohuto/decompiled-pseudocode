void __fastcall KeyframeSequence::Play(KeyframeSequence *this)
{
  char v1; // al
  __int64 v3; // r10
  __int64 v4; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 140);
  if ( (v1 & 1) != 0 )
  {
    *((_BYTE *)this + 140) = v1 | 2;
  }
  else
  {
    KeyframeSequence::SortKeyFrames(this);
    KeyframeSequence::ConfigureTimer(this);
    v3 = 0LL;
    if ( *((_DWORD *)this + 28) )
    {
      v4 = *((_QWORD *)this + 13);
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 24 * v3 + 8) + 20LL) != 1
          && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 24 * v3 + 8) + 20LL) - 2) >= 2 )
        {
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)this + 28) );
    }
    *((_BYTE *)this + 140) |= 3u;
  }
}
