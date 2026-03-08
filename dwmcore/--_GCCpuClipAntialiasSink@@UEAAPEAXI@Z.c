/*
 * XREFs of ??_GCCpuClipAntialiasSink@@UEAAPEAXI@Z @ 0x1800EE070
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCpuClipAntialiasSink@@UEAA@XZ @ 0x1800EE0AC (--1CCpuClipAntialiasSink@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CCpuClipAntialiasSink *__fastcall CCpuClipAntialiasSink::`scalar deleting destructor'(
        CCpuClipAntialiasSink *this,
        char a2)
{
  CCpuClipAntialiasSink::~CCpuClipAntialiasSink(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
