/*
 * XREFs of ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B8B58
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800A5320 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x1802B1DC8 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapSource@@@@IEAAKXZ @ 0x1800F59D0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapSource@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CFormatConverter@@QEAA@XZ @ 0x1802B80D4 (--0CFormatConverter@@QEAA@XZ.c)
 *     ??2CFormatConverter@@SAPEAX_K@Z @ 0x1802B82EC (--2CFormatConverter@@SAPEAX_K@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802B8CE8 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 */

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
