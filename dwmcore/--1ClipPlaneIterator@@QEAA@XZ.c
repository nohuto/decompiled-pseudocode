/*
 * XREFs of ??1ClipPlaneIterator@@QEAA@XZ @ 0x18003C628
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18003C524 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall ClipPlaneIterator::~ClipPlaneIterator(ClipPlaneIterator *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 56);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 24);
}
