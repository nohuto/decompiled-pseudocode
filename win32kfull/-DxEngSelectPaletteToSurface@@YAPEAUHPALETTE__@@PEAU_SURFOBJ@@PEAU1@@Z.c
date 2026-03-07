__int64 __fastcall DxEngSelectPaletteToSurface(struct _SURFOBJ *a1, HPALETTE a2)
{
  __int64 v3; // rbp
  HDEV v4; // rbx
  HDEV hdev; // rdi
  HDEV v6; // rcx
  HDEV v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v8, a2);
  v4 = v8;
  if ( a1 )
  {
    if ( !v8 )
      return v3;
    hdev = a1[1].hdev;
    v6 = v8;
    a1[1].hdev = v8;
    INC_SHARE_REF_CNT(v6);
    if ( hdev )
    {
      v3 = *(_QWORD *)hdev;
      v8 = hdev;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v8);
    }
  }
  if ( v4 )
    DEC_SHARE_REF_CNT(v4);
  return v3;
}
