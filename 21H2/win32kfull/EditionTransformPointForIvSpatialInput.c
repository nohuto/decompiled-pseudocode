/*
 * XREFs of EditionTransformPointForIvSpatialInput @ 0x1C01EFFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     TransformIvSpatialInputPoint @ 0x1C01EFD78 (TransformIvSpatialInputPoint.c)
 */

__int64 __fastcall EditionTransformPointForIvSpatialInput(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  result = ValidateHwnd(a1);
  v6 = result;
  if ( result )
  {
    v7 = *(_OWORD *)WindowMargins::ReduceRect(&v7, (struct tagWND *)result, (_DWORD *)(*(_QWORD *)(result + 40) + 88LL));
    TransformIvSpatialInputPoint(v6, &v7, a2, a3);
    return 1LL;
  }
  return result;
}
