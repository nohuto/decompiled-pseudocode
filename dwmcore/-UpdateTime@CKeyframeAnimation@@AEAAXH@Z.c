void __fastcall CKeyframeAnimation::UpdateTime(CKeyframeAnimation *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rax
  KeyframeSequence *v6; // r11
  int v7; // r10d
  __int64 v8; // r11
  int v9; // ecx

  if ( *((char *)this + 580) < 0 )
  {
    if ( *((_DWORD *)this + 143) == 4 )
    {
      CKeyframeAnimation::GetAnimationTimeLength(this);
      KeyframeSequence::ConfigureTimer(v6);
      *(_DWORD *)(v8 + 92) = v7;
    }
    else
    {
      v3 = *((_DWORD *)this + 123);
      v4 = *((_DWORD *)this + 122);
      if ( v3 < v4 )
      {
        v9 = v4 - v3;
        if ( a2 < v9 )
          v9 = a2;
        *((_DWORD *)this + 123) = v9 + v3;
        a2 -= v9;
      }
      v5 = *((_QWORD *)this + 49);
      if ( (*(_BYTE *)(v5 + 140) & 2) != 0 )
        *(_DWORD *)(v5 + 92) += a2;
    }
  }
}
