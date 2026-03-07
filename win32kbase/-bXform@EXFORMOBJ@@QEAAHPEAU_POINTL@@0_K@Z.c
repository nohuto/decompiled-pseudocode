__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, struct _POINTL *a3, __int64 a4)
{
  unsigned int v8; // ebx

  if ( a2 != a3 )
    memmove(a3, a2, 8 * a4);
  if ( (*(_BYTE *)(*(_QWORD *)this + 32LL) & 0x43) == 0x43 )
    return 1LL;
  v8 = bCvtPts1(*(_QWORD *)this, a3, a4);
  if ( !v8 )
    EngSetLastError(0x216u);
  return v8;
}
