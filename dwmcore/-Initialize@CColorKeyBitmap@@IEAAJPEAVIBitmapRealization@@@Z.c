__int64 __fastcall CColorKeyBitmap::Initialize(CColorKeyBitmap *this, struct IBitmapRealization *a2)
{
  __int64 v2; // rax
  char *v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  char *v10; // rcx
  const struct PixelFormatInfo *v11; // rax
  int inited; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _BYTE v16[16]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a2 + 1);
  v3 = (char *)this + 40;
  v6 = *((_QWORD *)this + 5);
  v7 = *(int *)(v2 + 4);
  *((_QWORD *)this + 5) = 0LL;
  if ( v6 )
  {
    v8 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (**(int (__fastcall ***)(char *, GUID *, char *))((char *)a2 + v7 + 8))(
         (char *)a2 + v7 + 8,
         &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
         v3) < 0 )
  {
    v14 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003292287, 0x33u, 0LL);
  }
  else
  {
    v10 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
    v11 = (const struct PixelFormatInfo *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v10)(v10, v16);
    inited = CColorKeyBitmap::InitColorKey(this, v11);
    v14 = inited;
    if ( inited < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, inited, 0x2Du, 0LL);
    else
      wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a2);
  }
  return v14;
}
