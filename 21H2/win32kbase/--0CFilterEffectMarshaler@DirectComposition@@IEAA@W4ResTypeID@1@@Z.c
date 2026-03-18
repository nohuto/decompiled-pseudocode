/*
 * XREFs of ??0CFilterEffectMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z @ 0x1C0213BA8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 1LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &DirectComposition::CFilterEffectMarshaler::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  return result;
}
