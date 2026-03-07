__int64 __fastcall CWindowNode::CollectAdditionalDirtyRects(
        CVisual *a1,
        CDesktopTree *a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        __int64 a5)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  const struct CShape *v15; // r8
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = CVisual::CollectAdditionalDirtyRects(a1, a5);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x14Au, 0LL);
  }
  else if ( *((_BYTE *)a1 + 890)
         && !*((_BYTE *)a1 + 891)
         && *((_BYTE *)a1 + 895)
         && (*(unsigned __int8 (__fastcall **)(CDesktopTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v12 = CPtrArrayBase::operator[]((char *)a1 + 776, 0LL);
    LOBYTE(v13) = 1;
    CGdiSpriteBitmap::GetAccumShape(v12, v16, v13);
    if ( v16[0] )
    {
      v14 = CPtrArrayBase::operator[]((char *)a1 + 776, 0LL);
      if ( (int)CDesktopTree::AddNewComposeTopContent(
                  a2,
                  (struct IBitmapResource *)((v14 + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64)),
                  v15,
                  a4) >= 0 )
        *((_BYTE *)a1 + 891) = 1;
    }
    CShapePtr::Release((CShapePtr *)v16);
  }
  return v10;
}
