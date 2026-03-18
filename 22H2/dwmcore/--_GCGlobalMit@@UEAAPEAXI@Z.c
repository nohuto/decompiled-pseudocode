/*
 * XREFs of ??_GCGlobalMit@@UEAAPEAXI@Z @ 0x1801B1510
 * Callers:
 *     ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CC100 (-Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x1801B1494 (--1CGlobalMit@@UEAA@XZ.c)
 */

wil::details **__fastcall CGlobalMit::`scalar deleting destructor'(wil::details **this, char a2)
{
  CGlobalMit::~CGlobalMit(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
