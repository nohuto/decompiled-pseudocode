void __fastcall CInteractionTracker::ClearCustomAnimation(CInteractionTracker *this, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx

  v2 = a2;
  if ( (unsigned __int64)a2 < 2 )
  {
    v4 = *((_QWORD *)this + a2 + 44);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + v2 + 44) = 0LL;
    }
  }
  if ( (_DWORD)v2 == 1 )
    *((_BYTE *)this + 541) &= ~2u;
}
