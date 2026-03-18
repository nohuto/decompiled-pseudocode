/*
 * XREFs of ??0CGradientBrushMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z @ 0x1C0213C20
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &DirectComposition::CBrushMarshaler::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 80) = 2LL;
  *(_QWORD *)(a1 + 24) = 1LL;
  *(_DWORD *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  return result;
}
