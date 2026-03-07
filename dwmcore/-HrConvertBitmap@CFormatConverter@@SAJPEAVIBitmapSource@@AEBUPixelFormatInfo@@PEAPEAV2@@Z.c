__int64 __fastcall CFormatConverter::HrConvertBitmap(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        struct IBitmapSource **a3)
{
  unsigned int v6; // ebx
  char *v7; // rcx
  CFormatConverter *v8; // rax
  __int64 v9; // rcx
  CFormatConverter *v10; // rax
  CFormatConverter *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  (**(void (__fastcall ***)(struct IBitmapSource *, __int64 *))a1)(a1, &v15);
  if ( v15 == *(_QWORD *)a2 )
  {
    v7 = (char *)a1 + *(int *)(*((_QWORD *)a1 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    *a3 = a1;
  }
  else
  {
    v8 = (CFormatConverter *)CFormatConverter::operator new();
    if ( v8 && (v10 = CFormatConverter::CFormatConverter(v8), (v11 = v10) != 0LL) )
    {
      CMILRefCountImpl::AddReference((CFormatConverter *)((char *)v10 + 16));
      v12 = CFormatConverter::Initialize(v11, a1, a2, 0.0);
      v6 = v12;
      if ( v12 >= 0 )
      {
        *a3 = v11;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x232u, 0LL);
        CMILRefCountBaseT<IBitmapSource>::InternalRelease((volatile signed __int32 *)v11);
      }
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x23Fu, 0LL);
    }
  }
  return v6;
}
