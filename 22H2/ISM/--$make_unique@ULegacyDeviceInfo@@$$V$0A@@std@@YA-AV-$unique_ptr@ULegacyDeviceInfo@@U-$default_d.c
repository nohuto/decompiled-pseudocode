/*
 * XREFs of ??$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@0@XZ @ 0x18007549C
 * Callers:
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800765E0 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<LegacyDeviceInfo,,0>(_QWORD *a1)
{
  _DWORD *v2; // rbx
  _QWORD *result; // rax

  v2 = operator new(0x60CuLL);
  memset_0(v2, 0, 0x60CuLL);
  v2[2] = 1548;
  result = a1;
  *a1 = v2;
  return result;
}
