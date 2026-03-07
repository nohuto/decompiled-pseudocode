void __fastcall CDrawingContext::ReadTexture(CDrawingContext *this)
{
  __int64 v1; // r9

  v1 = *((_QWORD *)this + 4) + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(v1 + 8) + 24LL))(
    v1 + 8,
    ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
}
