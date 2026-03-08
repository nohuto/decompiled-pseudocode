/*
 * XREFs of ??$?0M$0?0$0?0$0A@@?$span@$$CBM$0?0@gsl@@QEAA@AEBV?$span@M$0?0@1@@Z @ 0x180025474
 * Callers:
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18001DD88 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180076750 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall gsl::span<float const,-1>::span<float const,-1>(_QWORD *a1, _QWORD *a2)
{
  __int64 *v4; // rax
  gsl::details *v5; // rcx
  __int64 v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)gsl::details::extent_type<-1>::extent_type<-1>(&v8, *a2);
  v5 = (gsl::details *)a2[1];
  v6 = *v4;
  *a1 = v6;
  a1[1] = v5;
  if ( v6 == -1 || !v5 && v6 )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x1800254C3LL);
  }
  return a1;
}
