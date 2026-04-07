/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18004F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042B8C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18004F5A0 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180050C1C (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  char *v5; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // r9d
  INT v13; // r8d
  INT v14; // r9d
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r8d
  signed int v18; // ecx
  unsigned int v19; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v21; // r8d
  unsigned int v22; // r14d
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  void *v25; // r15
  int v26; // eax
  int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-79h]
  struct IUnknown *v29; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v31; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v32; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-25h] BYREF
  __int64 v34; // [rsp+78h] [rbp-21h] BYREF
  void *v35; // [rsp+80h] [rbp-19h] BYREF
  struct IBitmapLock **v36; // [rsp+88h] [rbp-11h]
  char *v37; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v38[4]; // [rsp+98h] [rbp-1h] BYREF

  v34 = 0LL;
  v29 = 0LL;
  v5 = (char *)this + 88;
  v36 = a4;
  v37 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27))(*((_QWORD *)this + 27), &IID_IWICBitmap, &v34);
  if ( v34 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v34 + 64LL))(
           v34,
           a2,
           (unsigned int)a3,
           &v29);
    v10 = v9;
    if ( v9 < 0 )
    {
      v28 = 94;
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
        v28 = 96;
      }
      else
      {
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v29->lpVtbl[1].AddRef)(v29, &v31);
        v10 = v9;
        if ( v9 < 0 )
        {
          v28 = 97;
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
            v28 = 98;
          }
          else
          {
            v9 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v33,
                   v32,
                   (CWICBitmapWrapper *)((char *)this + 176),
                   v31,
                   v30,
                   v35,
                   a3,
                   a4,
                   0,
                   v29);
            v10 = v9;
            if ( v9 >= 0 )
            {
              v29 = 0LL;
              goto LABEL_10;
            }
            v28 = 114;
          }
        }
      }
    }
    v12 = v9;
  }
  else
  {
    if ( a3 != WICBitmapLockRead )
    {
      v10 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292412, 0x84u);
      goto LABEL_56;
    }
    *(_OWORD *)v38 = 0LL;
    if ( a2 )
    {
      if ( a2->m128i_i32[2] <= 0
        || a2->m128i_i32[3] <= 0
        || (v13 = *((_DWORD *)this + 40), a2->m128i_i32[0] >= v13)
        || (v14 = *((_DWORD *)this + 41), a2->m128i_i32[1] >= v14) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xBAu);
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
          v38[2] = v16;
          v38[0] = 0;
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
          v17 = 0;
          v38[3] += v38[1];
          v38[1] = 0;
        }
        if ( (int)(v18 + v17) > v14 )
        {
          v18 = v14 - v17;
          v38[3] = v14 - v17;
        }
        if ( v16 <= 0 || v18 <= 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xB2u);
      }
    }
    else
    {
      v19 = *((_DWORD *)this + 41);
      v38[2] = *((_DWORD *)this + 40);
      v38[3] = v19;
    }
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 44));
    if ( PixelFormatSize && v21 <= 0x7FFFFFF8u / PixelFormatSize )
    {
      v22 = (((v21 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      v23 = v22 * (unsigned __int64)*((unsigned int *)this + 41);
      if ( v23 <= 0xFFFFFFFF )
      {
        v24 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                (unsigned int)v23);
        v25 = (void *)v24;
        if ( v24 )
        {
          v26 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 27)
                                                                                           + 56LL))(
                  *((_QWORD *)this + 27),
                  v38,
                  v22,
                  (unsigned int)v23,
                  v24);
          v10 = v26;
          if ( v26 >= 0 )
          {
            v27 = CBitmap::HrLock(
                    (CWICBitmapWrapper *)((char *)this - 24),
                    v38[2],
                    v38[3],
                    (CWICBitmapWrapper *)((char *)this + 176),
                    v22,
                    v23,
                    v25,
                    WICBitmapLockRead,
                    v36,
                    1,
                    0LL);
            v10 = v27;
            if ( v27 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xDBu);
            else
              v25 = 0LL;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xD1u);
          }
          if ( v25 )
            (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v25);
        }
        else
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xCCu);
        }
        goto LABEL_56;
      }
      v28 = 201;
    }
    else
    {
      v28 = 199;
    }
    v12 = -2147024362;
    v10 = -2147024362;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v28);
LABEL_56:
  if ( v29 )
    ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
LABEL_10:
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v37);
  return v10;
}
