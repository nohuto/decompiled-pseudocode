/*
 * XREFs of EditionTransformIvTouchInput @ 0x1C01EFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     TransformIvSpatialInputPoint @ 0x1C01EFD78 (TransformIvSpatialInputPoint.c)
 *     TransformIvSpatialInputRect @ 0x1C01EFE30 (TransformIvSpatialInputRect.c)
 */

__int64 __fastcall EditionTransformIvTouchInput(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int128 v5; // xmm0
  int v6; // eax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  result = ValidateHwnd(a1);
  v4 = result;
  if ( result )
  {
    v5 = *(_OWORD *)WindowMargins::ReduceRect(&v8, (struct tagWND *)result, (_DWORD *)(*(_QWORD *)(result + 40) + 88LL));
    v6 = *(_DWORD *)a2;
    v7 = v5;
    if ( v6 == 2 || v6 == 5 )
    {
      v8 = *(_OWORD *)(a2 + 13);
      TransformIvSpatialInputRect(v4, &v7, &v8, a2 + 13);
      v8 = *(_OWORD *)(a2 + 15);
      TransformIvSpatialInputRect(v4, &v7, &v8, a2 + 15);
    }
    TransformIvSpatialInputPoint(v4, &v7, a2[4], (__int64)(a2 + 4));
    TransformIvSpatialInputPoint(v4, &v7, a2[6], (__int64)(a2 + 6));
    return 1LL;
  }
  return result;
}
