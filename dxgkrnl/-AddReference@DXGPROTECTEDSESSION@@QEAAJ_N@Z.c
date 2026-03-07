__int64 __fastcall DXGPROTECTEDSESSION::AddReference(DXGPROTECTEDSESSION *this, char a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)this + 20);
  if ( v2 == 1 && !a2 )
    WdLogSingleEntry5(0LL, 275LL, 47LL, this, 0LL, 0LL);
  return v2;
}
