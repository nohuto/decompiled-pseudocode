void __fastcall CStereoRenderTargetBitmap::SetProtected(CStereoRenderTargetBitmap *this, char a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
  if ( a2 != *((_BYTE *)this + 25) )
  {
    *((_BYTE *)this + 25) = a2;
    CRenderTargetBitmap::ResetBitmapCache((CStereoRenderTargetBitmap *)((char *)this - 120));
  }
}
