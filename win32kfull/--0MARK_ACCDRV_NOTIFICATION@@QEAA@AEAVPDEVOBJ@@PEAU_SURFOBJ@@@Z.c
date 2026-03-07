MARK_ACCDRV_NOTIFICATION *__fastcall MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
        MARK_ACCDRV_NOTIFICATION *this,
        struct PDEVOBJ *a2,
        struct _SURFOBJ *a3)
{
  *(_QWORD *)this = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 2096LL) & 0x8000) != 0 )
  {
    *(_QWORD *)this = a3;
    a3->fjBitmap |= 0x8000u;
  }
  return this;
}
