/*
 * XREFs of ??0CLayerVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00B4B08
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CLayerVisualMarshaler *__fastcall DirectComposition::CLayerVisualMarshaler::CLayerVisualMarshaler(
        DirectComposition::CLayerVisualMarshaler *this)
{
  DirectComposition::CLayerVisualMarshaler *result; // rax

  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 90;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *(_QWORD *)this = &DirectComposition::CLayerVisualMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 101) = 0;
  return result;
}
