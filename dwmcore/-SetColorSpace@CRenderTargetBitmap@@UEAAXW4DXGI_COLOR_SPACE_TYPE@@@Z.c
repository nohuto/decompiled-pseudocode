void __fastcall CRenderTargetBitmap::SetColorSpace(CRenderTargetBitmap *this, unsigned int a2)
{
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 12LL)
                                                 + *((_QWORD *)this + 2)
                                                 + 8LL);
  if ( a2 != *(_DWORD *)((**v4)(v4, v5) + 8) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), a2);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 120));
  }
}
