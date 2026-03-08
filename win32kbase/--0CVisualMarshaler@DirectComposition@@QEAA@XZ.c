/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A1B1C
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0007920 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0007BE4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ??0?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1C00A1AF0 (--0-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@P.c)
 * Callees:
 *     <none>
 */

DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CVisualMarshaler::CVisualMarshaler(
        DirectComposition::CVisualMarshaler *this)
{
  DirectComposition::CVisualMarshaler *result; // rax

  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 9) = 196;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  return result;
}
