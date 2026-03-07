void __fastcall CPTPProcessor::HandleInertiaTimer(struct tagPOINT *this, __int64 a2, __int64 a3, __int64 a4)
{
  CInertiaManager *v5; // rcx

  if ( LOBYTE(this[48].x) && (this[47].y & 1) != 0 )
  {
    SGDGetUserSessionState(this, a2, a3, a4);
    CInertiaManager::PostInertiaMessage(v5, 0x23Bu, (const struct INERTIA_INFO_INTERNAL *)&this[21], this[45], this[46]);
  }
  LOBYTE(this[48].x) = 0;
}
