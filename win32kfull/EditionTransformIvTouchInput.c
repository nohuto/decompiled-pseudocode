__int64 __fastcall EditionTransformIvTouchInput(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  struct tagRECT v5; // xmm0
  int v6; // eax
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v8; // [rsp+30h] [rbp-18h] BYREF

  result = ValidateHwnd(a1);
  v4 = result;
  if ( result )
  {
    v5 = *WindowMargins::ReduceRect(
            &v8,
            (struct tagRECT *)result,
            (const struct tagWND *)(*(_QWORD *)(result + 40) + 88LL),
            0LL);
    v6 = *(_DWORD *)a2;
    v7 = v5;
    if ( v6 == 2 || v6 == 5 )
    {
      v8 = *(struct tagRECT *)(a2 + 13);
      TransformIvSpatialInputRect(v4, (__int128 *)&v7.left, &v8, a2 + 13);
      v8 = *(struct tagRECT *)(a2 + 15);
      TransformIvSpatialInputRect(v4, (__int128 *)&v7.left, &v8, a2 + 15);
    }
    TransformIvSpatialInputPoint(v4, (__int128 *)&v7.left, a2[4], (__int64)(a2 + 4));
    TransformIvSpatialInputPoint(v4, (__int128 *)&v7.left, a2[6], (__int64)(a2 + 6));
    return 1LL;
  }
  return result;
}
