/*
 * XREFs of ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1800DE59C
 * Callers:
 *     ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800DE530 (-GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x18029BF5C (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18029C13C (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800DE714 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::EnsureBitmap(CD2DBitmap *this)
{
  struct ID2D1Bitmap1 **v1; // r14
  unsigned int v3; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, struct IDXGISurface **); // rsi
  int v10; // eax
  __int64 v11; // rcx
  char *v12; // rcx
  __int64 v13; // rax
  struct ID2D1Bitmap1 *v14; // rcx
  __int64 v15; // rbx
  int D2DBitmapFromDxgiSurface; // eax
  __int64 v17; // rcx
  struct ID2D1Bitmap1 *v18; // rcx
  __int64 v19; // rsi
  struct IDXGISurface *v20; // [rsp+50h] [rbp+20h] BYREF
  __int64 v21; // [rsp+58h] [rbp+28h] BYREF

  v1 = (struct ID2D1Bitmap1 **)((char *)this + 136);
  if ( *((_QWORD *)this + 17) )
  {
    return 0;
  }
  else
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 15);
    if ( v5 )
    {
      v20 = 0LL;
      v21 = 0LL;
      v6 = (**v5)(v5, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v21);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1A2u, 0LL);
      }
      else
      {
        v8 = v21;
        v9 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IDXGISurface **))(*(_QWORD *)v21 + 96LL);
        if ( v20 )
          ((void (__fastcall *)(struct IDXGISurface *))v20->lpVtbl->Release)(v20);
        v10 = v9(v8, *((unsigned int *)this + 60), &v20);
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1A5u, 0LL);
        }
        else
        {
          v12 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16;
          v13 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
          v14 = *v1;
          v15 = v13;
          *v1 = 0LL;
          if ( v14 )
            (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v14 + 16LL))(v14);
          D2DBitmapFromDxgiSurface = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                                       (CD2DContext *)(v15 + 16),
                                       v20,
                                       (const struct D2D1_BITMAP_PROPERTIES1 *)((char *)this + 200),
                                       v1);
          v3 = D2DBitmapFromDxgiSurface;
          if ( D2DBitmapFromDxgiSurface < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, D2DBitmapFromDxgiSurface, 0x1A9u, 0LL);
          }
          else if ( *((_DWORD *)this + 51) == 3 )
          {
            v18 = *v1;
            v19 = *((_QWORD *)this + 18);
            *((_QWORD *)this + 18) = *v1;
            if ( v18 )
              (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( v19 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0x1B4u, 0LL);
    }
  }
  return v3;
}
