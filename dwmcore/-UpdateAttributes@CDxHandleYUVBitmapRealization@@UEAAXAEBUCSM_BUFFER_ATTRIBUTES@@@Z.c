void __fastcall CDxHandleYUVBitmapRealization::UpdateAttributes(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  int v2; // r11d
  _DWORD *v3; // rsi
  char v4; // di
  const struct CSM_BUFFER_ATTRIBUTES *v5; // r9
  CDxHandleYUVBitmapRealization *v6; // r10
  char v7; // bl
  int v8; // ecx
  int *v9; // rax
  int v10; // ecx
  char v11; // al
  bool v12; // zf
  int v13; // edx
  int v14; // eax
  _OWORD *v15; // rax
  __int64 v16; // r10
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this - 56);
  v3 = (_DWORD *)((char *)this - 356);
  v4 = 0;
  v5 = a2;
  v6 = this;
  v17 = *(_OWORD *)((char *)this - 356);
  v7 = v2 != DisplayId::None && v2 != DisplayId::All;
  v8 = *((_DWORD *)a2 + 34) & 1;
  if ( v8 != (*((_DWORD *)v6 - 68) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)v6 - 50) )
  {
    v9 = CBitmapRealization::CalcDisplayRestriction(&v18, v8, *((_QWORD *)a2 + 1));
    v10 = *v9;
    *((_DWORD *)v6 - 56) = *v9;
    v11 = v10 != DisplayId::None && v10 != DisplayId::All;
    if ( v7 != v11 )
    {
      v12 = v11 == 0;
      v13 = *((_DWORD *)g_pComposition + 108);
      v14 = v13 + 1;
      if ( v12 )
        v14 = v13 - 1;
      *((_DWORD *)g_pComposition + 108) = v14;
    }
  }
  if ( v2 != *((_DWORD *)v6 - 56)
    || *((_DWORD *)v5 + 17) != *((_DWORD *)v6 - 85)
    || *((_DWORD *)v5 + 28) != *((_DWORD *)v6 - 74)
    || *((_DWORD *)v5 + 29) != *((_DWORD *)v6 - 73)
    || !operator==((_DWORD *)v5 + 30, (_DWORD *)v6 - 72) )
  {
    v4 = 1;
  }
  v15 = (_OWORD *)((char *)v6 - 408);
  *v15 = *(_OWORD *)v5;
  v15[1] = *((_OWORD *)v5 + 1);
  v15[2] = *((_OWORD *)v5 + 2);
  v15[3] = *((_OWORD *)v5 + 3);
  v15[4] = *((_OWORD *)v5 + 4);
  v15[5] = *((_OWORD *)v5 + 5);
  v15[6] = *((_OWORD *)v5 + 6);
  v15[7] = *((_OWORD *)v5 + 7);
  v15[8] = *((_OWORD *)v5 + 8);
  if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(&v17, v3) )
  {
    if ( !v4 )
      return;
  }
  else
  {
    *(_BYTE *)(v16 - 192) = 0;
  }
  CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)(v16 - 504), 0);
}
