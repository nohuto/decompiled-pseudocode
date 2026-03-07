void __fastcall CFlipExBuffer::ConfirmIndependentFlipEntry(
        CFlipExBuffer *this,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v9; // r8

  if ( *((_DWORD *)this + 96) == 2 && *((_QWORD *)this + 67) == a6 )
  {
    v9 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 96) = 3;
    WdLogSingleEntry5(8LL, a3, v9, *((_QWORD *)this + 2), a5, a6);
    DxgkConfirmToken(a2, *((_QWORD *)this + 2), a6);
  }
}
