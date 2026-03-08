/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A6830
 * Callers:
 *     ?CopyPixels@CBitmap@@WDA@EAAJPEBUWICRect@@IIPEAE@Z @ 0x180119110 (-CopyPixels@CBitmap@@WDA@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z @ 0x1800A66CC (--$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A6708 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800A6A0C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800A6E34 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // r9d
  unsigned int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-71h]
  unsigned int v16; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-3Dh] BYREF
  __int64 v18; // [rsp+58h] [rbp-39h] BYREF
  int v19; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  int v24; // [rsp+80h] [rbp-11h]
  int v25; // [rsp+84h] [rbp-Dh]
  __int128 v26; // [rsp+88h] [rbp-9h] BYREF

  v18 = 0LL;
  v19 = 0;
  v22 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v17 = 0;
  Src = 0LL;
  v16 = 0;
  v26 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( !a5 )
  {
    v11 = -2147024809;
    v15 = 163;
LABEL_13:
    v13 = v11;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v13, v15, 0LL);
    goto LABEL_10;
  }
  if ( a2 )
    goto LABEL_3;
  v14 = *((_DWORD *)this + 26);
  v9 = 0x7FFFFFFF;
  v23 = 0LL;
  if ( v14 > 0x7FFFFFFF )
  {
    v24 = -1;
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x7FFFFFFFu, 0LL, 0, -2147024362, 0xABu, 0LL);
    goto LABEL_10;
  }
  v24 = v14;
  if ( *((_DWORD *)this + 27) > 0x7FFFFFFFu )
  {
    v25 = -1;
    v11 = -2147024362;
    v15 = 172;
    goto LABEL_13;
  }
  v25 = *((_DWORD *)this + 27);
  a2 = (const struct WICRect *)&v23;
LABEL_3:
  v10 = CBitmap::HrCheckPixelRect(this, a2, &v26);
  v11 = v10;
  if ( v10 < 0 )
  {
    v15 = 177;
    goto LABEL_25;
  }
  v10 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 30), a3, a2, a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    v15 = 182;
    goto LABEL_25;
  }
  v10 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 3) + 24LL))(
          (char *)this + 24,
          a2,
          1LL,
          &v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    v15 = 184;
    goto LABEL_25;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v18 + 8LL))(v18, &v19, &v17);
  v11 = v10;
  if ( v10 < 0 )
  {
    v15 = 186;
    goto LABEL_25;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 16LL))(v18, &v20);
  v11 = v10;
  if ( v10 < 0 )
  {
    v15 = 187;
    goto LABEL_25;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v18 + 24LL))(
          v18,
          &v16,
          &Src);
  v11 = v10;
  if ( v10 < 0 )
  {
    v15 = 189;
    goto LABEL_25;
  }
  v10 = CBitmap::CopyPixelsHelper(*((_DWORD *)this + 30), a2->Width, v17, v20, v16, Src, a3, a4, a5);
  v11 = v10;
  if ( v10 < 0 )
  {
    v15 = 202;
LABEL_25:
    v13 = v10;
    goto LABEL_26;
  }
LABEL_10:
  ReleaseInterfaceNoNULL<IBitmapLock>(v18);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v22);
  return v11;
}
