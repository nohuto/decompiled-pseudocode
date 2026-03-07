__int64 __fastcall CSynchronousSuperWetInk::Draw(
        CSynchronousSuperWetInk *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CSynchronousSuperWetInk *v4; // rbx
  CSynchronousSuperWetInk *v7; // rcx
  CSuperWetInkManager *v8; // rsi
  unsigned int PerFrameDataId; // eax
  bool v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (CSynchronousSuperWetInk *)((char *)this - 312);
  if ( CSynchronousSuperWetInk::IsSuperWetCompatible((CSynchronousSuperWetInk *)((char *)this - 312)) )
  {
    v8 = *(CSuperWetInkManager **)(*((_QWORD *)this - 37) + 256LL);
    PerFrameDataId = CSynchronousSuperWetInk::GetPerFrameDataId(v7);
    CSynchronousSuperWetInk::PullNewPerFrameData(v4, PerFrameDataId, &v11);
    if ( v11 )
    {
      CSuperWetInkManager::OnUpdatedInkReceived(v8, v4);
      *((_BYTE *)this - 216) = 0;
    }
    CSuperWetInkManager::TryRegisterSuperWetForDraw(v8, v4, a2, 0, &v11);
  }
  return 0LL;
}
