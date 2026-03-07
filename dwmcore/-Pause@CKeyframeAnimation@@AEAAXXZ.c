void __fastcall CKeyframeAnimation::Pause(CKeyframeAnimation *this)
{
  char v1; // al

  if ( (*((_BYTE *)this + 581) & 1) != 0 )
  {
    v1 = *((_BYTE *)this + 580);
    if ( v1 < 0 )
    {
      *((_BYTE *)this + 580) = v1 & 0x7F;
      *(_BYTE *)(*((_QWORD *)this + 49) + 140LL) &= ~2u;
    }
  }
}
