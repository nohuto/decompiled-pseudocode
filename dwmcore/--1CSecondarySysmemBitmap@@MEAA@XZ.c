/*
 * XREFs of ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x1801000BC
 * Callers:
 *     ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x180100080 (--_ECSecondarySysmemBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CSecondarySysmemBitmap::~CSecondarySysmemBitmap(CSecondarySysmemBitmap *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
    operator delete(v2);
  FastRegion::CRegion::FreeMemory((void **)this + 6);
}
