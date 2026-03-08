/*
 * XREFs of ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C001ADA0
 * Callers:
 *     GreGetClipBox @ 0x1C001AB40 (GreGetClipBox.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0185D28 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C001A8E0 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

struct REGION *__fastcall DC::prgnRao(DC *this)
{
  struct REGION *result; // rax
  bool v2; // zf
  struct REGION *v3; // r8

  if ( !*((_QWORD *)this + 146) )
    return (struct REGION *)*((_QWORD *)this + 144);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)this + 144);
  v2 = !DC::bDpiScaledSurface(this);
  result = v3;
  if ( v2 )
    return (struct REGION *)*((_QWORD *)this + 144);
  return result;
}
