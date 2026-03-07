__int64 __fastcall CRegionShape::CRegionShape(__int64 a1, const struct tagRECT *a2)
{
  *(_QWORD *)a1 = &CRegionShape::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  CRegionShape::BuildFromRects(a1, a2, 1u);
  return a1;
}
