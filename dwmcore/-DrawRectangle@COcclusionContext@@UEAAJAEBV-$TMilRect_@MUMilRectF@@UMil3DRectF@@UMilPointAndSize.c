__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, __int64 a2, CImageLegacyMilBrush *a3)
{
  bool v3; // zf
  __int64 v7; // r9
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-58h] BYREF
  struct tagRECT v12; // [rsp+40h] [rbp-48h]
  char v13; // [rsp+50h] [rbp-38h]
  __int128 v14; // [rsp+58h] [rbp-30h] BYREF

  v3 = *(_DWORD *)(a1 + 1432) == 0;
  v14 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( v3 && a3 && (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *))(*(_QWORD *)a3 + 184LL))(a3) )
    COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0, v7, (struct tagRECT *)&v14);
  if ( (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 84LL) )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v11[0] = *(_QWORD *)(a1 + 1192);
      v10 = *(_QWORD *)(a1 + 8);
      v11[1] = CachedBrushCVINoRef;
      v12 = (struct tagRECT)v14;
      v13 = 1;
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 208LL))(v10, v11);
    }
  }
  return 0LL;
}
