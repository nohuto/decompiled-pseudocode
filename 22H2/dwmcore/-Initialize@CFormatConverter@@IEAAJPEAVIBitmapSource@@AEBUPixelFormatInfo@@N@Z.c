/*
 * XREFs of ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x180219698
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180219508 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180032318 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HrCheckDstPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1802194D4 (-HrCheckDstPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802198E0 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 */

__int64 __fastcall CFormatConverter::Initialize(
        CFormatConverter *this,
        struct IBitmapSource *a2,
        const struct PixelFormatInfo *a3,
        double a4)
{
  unsigned int v7; // edi
  float v8; // xmm0_4
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  CFormatConverter *v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  char *v18; // rcx
  unsigned __int8 v20; // [rsp+20h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[16]; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = 0;
  if ( !a2 || !IsValidPixelFormatInfo(a3) )
  {
    v10 = 402LL;
    goto LABEL_24;
  }
  *(_QWORD *)((char *)this + 92) = *(_QWORD *)a3;
  *((_DWORD *)this + 25) = *((_DWORD *)a3 + 2);
  if ( a4 < 0.0 || a4 > 100.0 )
  {
    v10 = 406LL;
LABEL_24:
    v9 = -2147024809;
    goto LABEL_25;
  }
  v8 = a4;
  *((float *)this + 28) = v8;
  if ( *((_QWORD *)this + 9) )
  {
    v9 = -2003292412;
    v10 = 413LL;
LABEL_25:
    v15 = v9;
    goto LABEL_26;
  }
  v11 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, _BYTE *))a2)(a2, v22);
  *((_QWORD *)this + 10) = *(_QWORD *)v11;
  *((_DWORD *)this + 22) = *(_DWORD *)(v11 + 8);
  v13 = *((_DWORD *)this + 20);
  if ( v13 != 2 && (v13 <= 9 || v13 > 11 && v13 != 24 && v13 != 28 && v13 != 65 && (unsigned int)(v13 - 87) > 1) )
  {
    v9 = -2003292288;
    v10 = 417LL;
    goto LABEL_25;
  }
  v14 = CFormatConverter::HrCheckDstPixelFormat(v12, *((_DWORD *)this + 23));
  v9 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v10 = 418LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
      (const char *)v15);
    v7 = v9;
    goto LABEL_27;
  }
  v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 8LL))(
          a2,
          (char *)this + 104,
          (char *)this + 108);
  v9 = v16;
  if ( v16 < 0 )
  {
    v15 = (unsigned int)v16;
    v10 = 420LL;
    goto LABEL_26;
  }
  v17 = CScanPipeline::InitializeForFormatConversion(
          (CFormatConverter *)((char *)this + 120),
          (CFormatConverter *)((char *)this + 92),
          (CFormatConverter *)((char *)this + 80),
          *((_DWORD *)this + 26),
          v20);
  v9 = v17;
  if ( v17 < 0 )
  {
    v15 = (unsigned int)v17;
    v10 = 427LL;
    goto LABEL_26;
  }
  *((_QWORD *)this + 9) = a2;
  v18 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18);
LABEL_27:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
  return v7;
}
