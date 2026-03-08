/*
 * XREFs of EditionTransformPointForIvSpatialInput @ 0x1C01CCBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00FF518 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     TransformIvSpatialInputPoint @ 0x1C01CC9EC (TransformIvSpatialInputPoint.c)
 */

__int64 __fastcall EditionTransformPointForIvSpatialInput(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  result = ValidateHwnd(a1);
  v6 = result;
  if ( result )
  {
    v7 = *WindowMargins::ReduceRect(
            &v7,
            (struct tagRECT *)result,
            (const struct tagWND *)(*(_QWORD *)(result + 40) + 88LL),
            0LL);
    TransformIvSpatialInputPoint(v6, (__int128 *)&v7.left, a2, a3);
    return 1LL;
  }
  return result;
}
