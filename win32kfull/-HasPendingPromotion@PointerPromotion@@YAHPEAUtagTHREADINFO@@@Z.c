__int64 __fastcall PointerPromotion::HasPendingPromotion(PointerPromotion *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v4 = 0;
  if ( HasPendingPromotion((__int64)this) )
    return *(_QWORD *)(SGDGetUserSessionState(v3) + 16288) == (_QWORD)this;
  return v4;
}
