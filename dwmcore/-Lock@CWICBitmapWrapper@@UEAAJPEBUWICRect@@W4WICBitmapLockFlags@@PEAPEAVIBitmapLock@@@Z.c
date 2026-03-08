/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A4D90
 * Callers:
 *     ?LockForRead@CWICBitmapWrapper@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18027E970 (-LockForRead@CWICBitmapWrapper@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800A7510 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // r9d
  INT v13; // r8d
  INT v14; // r9d
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r8d
  signed int v18; // ecx
  unsigned __int8 PixelFormatSize; // al
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  unsigned int v22; // r14d
  void *v23; // rsi
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // [rsp+20h] [rbp-79h]
  struct IUnknown *v29; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v31; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v32; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-25h] BYREF
  unsigned int v34[2]; // [rsp+78h] [rbp-21h] BYREF
  void *v35; // [rsp+80h] [rbp-19h] BYREF
  struct IBitmapLock **v36; // [rsp+88h] [rbp-11h]
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v38[4]; // [rsp+98h] [rbp-1h] BYREF

  v36 = a4;
  v37 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *(_QWORD *)v34 = 0LL;
  v29 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, unsigned int *))this + 17))(
    *((_QWORD *)this + 17),
    &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
    v34);
  v8 = v34[0];
  if ( *(_QWORD *)v34 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, struct IUnknown **))(**(_QWORD **)v34 + 64LL))(
           *(_QWORD *)v34,
           a2,
           (unsigned int)a3,
           &v29);
    v10 = v9;
    if ( v9 < 0 )
    {
      v28 = 93;
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v29->lpVtbl[1].QueryInterface)(
             v29,
             &v33,
             &v32);
      v10 = v9;
      if ( v9 < 0 )
      {
        v28 = 95;
      }
      else
      {
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v29->lpVtbl[1].AddRef)(v29, &v31);
        v10 = v9;
        if ( v9 < 0 )
        {
          v28 = 96;
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v29->lpVtbl[1].Release)(
                 v29,
                 &v30,
                 &v35);
          v10 = v9;
          if ( v9 < 0 )
          {
            v28 = 97;
          }
          else
          {
            v9 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v33,
                   v32,
                   (CWICBitmapWrapper *)((char *)this + 96),
                   v31,
                   v30,
                   v35,
                   a3,
                   a4,
                   0,
                   v29);
            v10 = v9;
            if ( v9 >= 0 )
              goto LABEL_7;
            v28 = 111;
          }
        }
      }
    }
    v12 = v9;
    goto LABEL_53;
  }
  if ( a3 != WICBitmapLockRead )
  {
    v10 = -2003292412;
    v28 = 120;
LABEL_52:
    v12 = v10;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v12, v28, 0LL);
    goto LABEL_7;
  }
  *(_OWORD *)v38 = 0LL;
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v13 = *((_DWORD *)this + 20), a2->m128i_i32[0] >= v13)
      || (v14 = *((_DWORD *)this + 21), a2->m128i_i32[1] >= v14) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0xA8u, 0LL);
    }
    else
    {
      v15 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v38 = *a2;
      v16 = v38[2];
      v38[0] = v15;
      if ( v15 < 0 )
      {
        v16 = v15 + v38[2];
        v15 = 0;
        v38[0] = 0;
        v38[2] = v16;
      }
      if ( v16 + v15 > v13 )
      {
        v16 = v13 - v15;
        v38[2] = v13 - v15;
      }
      v17 = v38[1];
      v18 = v38[3];
      if ( (v38[1] & 0x80000000) != 0 )
      {
        v18 = v38[1] + v38[3];
        v38[1] = 0;
        v38[3] = v18;
        v17 = 0;
      }
      if ( (int)(v18 + v17) > v14 )
      {
        v18 = v14 - v17;
        v38[3] = v14 - v17;
      }
      if ( v16 <= 0 || v18 <= 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024809, 0xA2u, 0LL);
    }
  }
  else
  {
    v38[2] = *((_DWORD *)this + 20);
    v38[3] = *((_DWORD *)this + 21);
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 24));
  if ( !PixelFormatSize || *((_DWORD *)this + 20) > 0x7FFFFFF8u / PixelFormatSize )
  {
    v28 = 181;
    goto LABEL_51;
  }
  v8 = -1;
  v20 = (((*((_DWORD *)this + 20) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v21 = v20 * *((unsigned int *)this + 21);
  if ( v21 > 0xFFFFFFFF )
  {
    v28 = 183;
LABEL_51:
    v10 = -2147024362;
    goto LABEL_52;
  }
  v22 = v20 * *((_DWORD *)this + 21);
  v23 = DefaultHeap::Alloc((unsigned int)v21);
  if ( !v23 )
  {
    v10 = -2147024882;
    v28 = 186;
    goto LABEL_52;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, void *))(**((_QWORD **)this + 17) + 56LL))(
          *((_QWORD *)this + 17),
          v38,
          (unsigned int)v20,
          v22,
          v23);
  v10 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xBFu, 0LL);
  }
  else
  {
    v26 = CBitmap::HrLock(
            (CWICBitmapWrapper *)((char *)this - 24),
            v38[2],
            v38[3],
            (CWICBitmapWrapper *)((char *)this + 96),
            v20,
            v22,
            v23,
            WICBitmapLockRead,
            v36,
            1,
            0LL);
    v10 = v26;
    if ( v26 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xC9u, 0LL);
  }
  operator delete(v23);
LABEL_7:
  if ( v29 )
    ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
  if ( *(_QWORD *)v34 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 16LL))(*(_QWORD *)v34);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v37);
  return v10;
}
