void __fastcall CDrawingContext::PopTransformInternal(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  int v3; // eax
  int v4; // eax
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = this;
  if ( a2 )
  {
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, v5, this);
    if ( v6 )
      CWatermarkStack<unsigned int,64,2,10>::Pop((char *)v2 + 464);
  }
  v3 = *((_DWORD *)v2 + 100);
  if ( v3 )
    *((_DWORD *)v2 + 100) = v3 - 1;
  v4 = *((_DWORD *)v2 + 108);
  if ( v4 )
    *((_DWORD *)v2 + 108) = v4 - 1;
}
