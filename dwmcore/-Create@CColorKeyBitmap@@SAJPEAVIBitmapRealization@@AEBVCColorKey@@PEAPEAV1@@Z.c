__int64 __fastcall CColorKeyBitmap::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct CColorKeyBitmap **a3)
{
  CColorKeyBitmap *v6; // rax
  __int64 v7; // rcx
  CColorKeyBitmap *v8; // rax
  CColorKeyBitmap *v9; // rsi
  char *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v6 = (CColorKeyBitmap *)operator new(0xC0uLL);
  if ( !v6 )
  {
    v9 = 0LL;
    goto LABEL_6;
  }
  v8 = CColorKeyBitmap::CColorKeyBitmap(v6, a2);
  v9 = v8;
  if ( !v8 )
  {
LABEL_6:
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x16u, 0LL);
    goto LABEL_7;
  }
  v10 = (char *)v8 + *(int *)(*((_QWORD *)v8 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = CColorKeyBitmap::Initialize(v9, a1);
  v13 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x18u, 0LL);
LABEL_7:
  v16 = 0LL;
  *a3 = v9;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
  return v13;
}
