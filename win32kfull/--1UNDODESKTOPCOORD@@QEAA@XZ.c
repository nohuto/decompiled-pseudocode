void __fastcall UNDODESKTOPCOORD::~UNDODESKTOPCOORD(UNDODESKTOPCOORD *this)
{
  __int64 v2; // rcx
  struct _POINTL v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 184) & 0x200) != 0 )
    {
      if ( *(_QWORD *)(v2 + 192) )
      {
        v4 = *(_QWORD *)(v2 + 192);
        v3 = (struct _POINTL)*((_QWORD *)this + 1);
        RGNOBJ::bOffset((RGNOBJ *)&v4, &v3);
      }
    }
    EWNDOBJ::vOffset(*(EWNDOBJ **)this, *((_DWORD *)this + 2), *((_DWORD *)this + 3));
    *(_DWORD *)(*(_QWORD *)this + 184LL) |= 0x100u;
  }
}
