/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z @ 0x1C0014FEC
 * Callers:
 *     ?GeneratedCreateResource@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1C00A6550 (-GeneratedCreateResource@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::CVisualMarshaler(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 1LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &DirectComposition::CVisualMarshaler::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  return result;
}
