/*
 * XREFs of ??1SURFREFAPI@@QEAA@XZ @ 0x1C00A97CC
 * Callers:
 *     GreMakeBitmapStock @ 0x1C00A9660 (GreMakeBitmapStock.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREFAPI::~SURFREFAPI(SURFREFAPI *this)
{
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
