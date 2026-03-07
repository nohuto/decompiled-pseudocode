struct _LUID __fastcall SFMLOGICALSURFACE::AdapterLuid(SFMLOGICALSURFACE *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *((_QWORD *)this + 23);
  if ( v2 && (*(_DWORD *)(v2 + 92) & 1) != 0 )
    v3 = *(_QWORD *)(v2 + 552);
  else
    v3 = *((_QWORD *)this + 25);
  *a2 = v3;
  return (struct _LUID)a2;
}
