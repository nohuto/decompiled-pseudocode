char __fastcall CPrimitiveGroupRenderStrategy::IsReadyToDraw(
        CPrimitiveGroupRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        bool *a4)
{
  *a4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 13) + 192LL))(*((_QWORD *)a2 + 13));
  return 1;
}
