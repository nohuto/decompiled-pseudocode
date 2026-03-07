void __fastcall MULTIPANSURFLOCK::~MULTIPANSURFLOCK(MULTIPANSURFLOCK *this)
{
  __int64 v1; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)this == v1 )
  {
    if ( !*((_QWORD *)this + 4) && !*((_QWORD *)this + 5) )
    {
      MULTIPANSURFLOCK::vUnLockBmp1AndRemovePunt(this);
      return;
    }
    if ( *((_BYTE *)this + 48) == 1 )
      MULTIPANSURFLOCK::vUnLockShadowR(this);
    _InterlockedOr(v3, 0);
    if ( *((_BYTE *)this + 49) == 1 )
      goto LABEL_18;
  }
  else
  {
    if ( v1 && !*((_QWORD *)this + 5) )
      MULTIPANSURFLOCK::vUnLockBmp2AndRemovePunt(this);
    _InterlockedOr(v3, 0);
    if ( *(_QWORD *)this && !*((_QWORD *)this + 4) )
      MULTIPANSURFLOCK::vUnLockBmp1AndRemovePunt(this);
    if ( *((_BYTE *)this + 48) )
      MULTIPANSURFLOCK::vUnLockShadowR(this);
    _InterlockedOr(v3, 0);
    if ( *((_BYTE *)this + 49) )
LABEL_18:
      MULTIPANSURFLOCK::vUnLockShadowW(this);
  }
}
