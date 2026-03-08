/*
 * XREFs of ??$make_unique@VCMILMatrix@@$$V$0A@@std@@YA?AV?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@0@XZ @ 0x18002233C
 * Callers:
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x180022224 (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<CMILMatrix,,0>(_QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x44uLL);
  if ( v2 )
    v2[16] = 0;
  *a1 = v2;
  return a1;
}
