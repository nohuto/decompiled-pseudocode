struct _SURFOBJ *__fastcall SURFREF::pSurfobj(SURFREF *this)
{
  return (struct _SURFOBJ *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
}
