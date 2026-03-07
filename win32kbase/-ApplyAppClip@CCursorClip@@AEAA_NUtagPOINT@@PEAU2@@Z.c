char __fastcall CCursorClip::ApplyAppClip(CCursorClip *this, struct tagPOINT a2, struct tagPOINT *a3)
{
  struct tagPOINT v3; // r9
  __int64 v4; // rdx
  char v5; // r10
  LONG y; // [rsp+3Ch] [rbp+14h]

  y = a2.y;
  v3 = a2;
  *a3 = a2;
  v4 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( !v4 )
    v4 = *((_QWORD *)this + 3) - *((_QWORD *)this + 1);
  v5 = 0;
  if ( v4 && !*((_DWORD *)this + 64) )
    CCursorClip::ClipPointToRect(v3, (const struct tagRECT *)this + 1, a3);
  if ( *a3 != __PAIR64__(y, v3.x) )
    return 1;
  return v5;
}
