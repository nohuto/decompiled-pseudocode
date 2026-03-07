void __fastcall CDrawingContext::BeginStatsInstance(CDrawingContext *this, struct IBitmapResource *a2)
{
  (*(void (__fastcall **)(struct IBitmapResource *, unsigned __int64))(*(_QWORD *)a2 + 32LL))(
    a2,
    ((unsigned __int64)this + 164) & -(__int64)(*((_BYTE *)this + 192) != 0));
}
