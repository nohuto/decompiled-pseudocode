/*
 * XREFs of ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802B83B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800A6A0C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x1802B8814 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x1802B9164 (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1802BC72C (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixels(
        CFormatConverter *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r13
  int v10; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  INT Y; // r15d
  void (__fastcall ***v16)(_QWORD, GUID *, unsigned int *); // rcx
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, const struct WICRect *, __int64, _QWORD **); // rbx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v25; // r8d
  LPVOID v26; // rax
  INT Height; // eax
  bool v28; // r14
  bool v29; // zf
  INT Width; // r12d
  CFormatConverter *v31; // rdx
  INT v32; // esi
  int v33; // eax
  __int64 v34; // rdx
  struct IUnknown *v35; // rcx
  unsigned int v37; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v38[2]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD *v39; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v40; // [rsp+78h] [rbp-39h] BYREF
  int X; // [rsp+7Ch] [rbp-35h]
  unsigned int v42; // [rsp+80h] [rbp-31h] BYREF
  unsigned __int8 *v43; // [rsp+88h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+90h] [rbp-21h] BYREF
  __int64 v45; // [rsp+98h] [rbp-19h] BYREF
  int v46; // [rsp+A0h] [rbp-11h]
  int v47; // [rsp+A4h] [rbp-Dh]
  struct WICRect v48; // [rsp+A8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v5 = a5;
  v37 = a3;
  v44 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v39 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( a5 )
  {
    if ( *((_QWORD *)this + 8) )
    {
      if ( !a2 )
      {
        a2 = (const struct WICRect *)&v45;
        v46 = *((_DWORD *)this + 24);
        v47 = *((_DWORD *)this + 25);
        v45 = 0LL;
      }
      v13 = HrCheckBufferSize(*((_DWORD *)this + 21), a3, a2, a4);
      v10 = v13;
      if ( v13 < 0 )
      {
        v12 = (unsigned int)v13;
        v11 = 234LL;
        goto LABEL_6;
      }
      v14 = *((_QWORD *)this + 8);
      Y = a2->Y;
      X = a2->X;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14) - 2 <= 1 )
      {
        *(_QWORD *)v38 = 0LL;
        v16 = (void (__fastcall ***)(_QWORD, GUID *, unsigned int *))(*((_QWORD *)this + 8)
                                                                    + 8LL
                                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL)
                                                                             + 4LL));
        (**v16)(v16, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v38);
        v17 = *(_QWORD *)v38;
        if ( *(_QWORD *)v38 )
        {
          v18 = *(void (__fastcall **)(__int64, const struct WICRect *, __int64, _QWORD **))(**(_QWORD **)v38 + 24LL);
          if ( v39 )
          {
            v19 = (__int64)v39 + *(int *)(v39[1] + 4LL) + 8;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            v17 = *(_QWORD *)v38;
          }
          v18(v17, a2, 1LL, &v39);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v38 + 16LL))(*(_QWORD *)v38);
        }
      }
      if ( v39 )
      {
        v43 = 0LL;
        v40 = 0;
        v20 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, unsigned __int8 **))(*v39 + 24LL))(v39, &v40, &v43);
        v10 = v20;
        if ( v20 < 0 )
        {
          v12 = (unsigned int)v20;
          v11 = 269LL;
          goto LABEL_6;
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, unsigned int *))(*v39 + 8LL))(v39, &v37, v38);
        v10 = v21;
        if ( v21 < 0 )
        {
          v12 = (unsigned int)v21;
          v11 = 277LL;
          goto LABEL_6;
        }
        v22 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(*v39 + 16LL))(v39, &v42);
        v10 = v22;
        if ( v22 < 0 )
        {
          v12 = (unsigned int)v22;
          v11 = 283LL;
          goto LABEL_6;
        }
        v23 = CFormatConverter::CopyPixelsHelper(this, X, Y, v37, v38[0], v42, v40, v43, a3, a4, a5);
        v10 = v23;
        if ( v23 < 0 )
        {
          v12 = (unsigned int)v23;
          v11 = 297LL;
          goto LABEL_6;
        }
      }
      else
      {
        if ( !*((_QWORD *)this + 97) )
        {
          PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 18));
          if ( PixelFormatSize && *((_DWORD *)this + 24) <= 0x7FFFFFF8u / PixelFormatSize )
          {
            v10 = 0;
            v25 = (((*((_DWORD *)this + 24) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
          }
          else
          {
            v10 = -2147024362;
            v25 = 0;
          }
          *((_DWORD *)this + 196) = v25;
          if ( v10 < 0 )
          {
            v11 = 308LL;
            goto LABEL_5;
          }
          v26 = DefaultHeap::Alloc(v25);
          *((_QWORD *)this + 97) = v26;
          if ( !v26 )
          {
            v10 = -2147024882;
            v11 = 311LL;
            goto LABEL_5;
          }
        }
        Height = a2->Height;
        v28 = 0;
        v29 = a2->X == 0;
        Width = a2->Width;
        v31 = this;
        v48 = *a2;
        v48.Height = 1;
        if ( v29 && !a2->Y && Width == *((_DWORD *)this + 24) )
          v28 = Height == *((_DWORD *)this + 25);
        v32 = Height + Y;
        while ( Y < v32 )
        {
          v33 = (*(__int64 (__fastcall **)(_QWORD, struct WICRect *, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 8)
                                                                                            + 24LL))(
                  *((_QWORD *)this + 8),
                  &v48,
                  *((unsigned int *)v31 + 196),
                  *((unsigned int *)v31 + 196),
                  *((_QWORD *)this + 97));
          v10 = v33;
          if ( v33 < 0 )
          {
            v12 = (unsigned int)v33;
            v11 = 362LL;
            goto LABEL_6;
          }
          CScanPipeline::Run((CFormatConverter *)((char *)this + 112), v5, *((const void **)this + 97), Width, X, Y);
          v31 = this;
          v5 += v37;
          ++v48.Y;
          ++Y;
        }
        if ( v28 )
        {
          v34 = *((_QWORD *)this + 8);
          if ( v34 )
            v35 = (struct IUnknown *)(v34 + *(int *)(*(_QWORD *)(v34 + 8) + 4LL) + 8LL);
          else
            v35 = 0LL;
          ReleaseDecoderCopyBuffers(v35);
        }
      }
      v10 = 0;
      goto LABEL_49;
    }
    v10 = -2003292404;
    v11 = 222LL;
  }
  else
  {
    v10 = -2147024809;
    v11 = 220LL;
  }
LABEL_5:
  v12 = (unsigned int)v10;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
    (const char *)v12);
LABEL_49:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v44);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v39);
  return (unsigned int)v10;
}
