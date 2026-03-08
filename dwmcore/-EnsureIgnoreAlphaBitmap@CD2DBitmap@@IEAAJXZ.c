/*
 * XREFs of ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x18029BF5C
 * Callers:
 *     ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800DE530 (-GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1800DE59C (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800DE714 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::EnsureIgnoreAlphaBitmap(CD2DBitmap *this)
{
  struct ID2D1Bitmap1 **v1; // rsi
  unsigned int v3; // ebx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 **); // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  char *v14; // rcx
  __int64 v15; // rax
  struct ID2D1Bitmap1 *v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  D2D1_BITMAP_PROPERTIES1 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+70h] [rbp+20h] BYREF
  struct IDXGISurface *v23; // [rsp+78h] [rbp+28h] BYREF

  v1 = (struct ID2D1Bitmap1 **)((char *)this + 144);
  if ( *((_QWORD *)this + 18) )
  {
    return 0;
  }
  else
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 15);
    if ( v4 )
    {
      if ( *((_DWORD *)this + 51) == 3 )
      {
        v5 = CD2DBitmap::EnsureBitmap(this);
        v3 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1C8u, 0LL);
      }
      else
      {
        v22 = 0LL;
        v7 = (**v4)(v4, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v22);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1CDu, 0LL);
        }
        else
        {
          v9 = *v22;
          v23 = 0LL;
          v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IDXGISurface **))(v9 + 96))(
                  v22,
                  *((unsigned int *)this + 60),
                  &v23);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1D1u, 0LL);
          }
          else
          {
            v12 = *((_QWORD *)this + 2);
            v13 = *(_OWORD *)((char *)this + 216);
            *(_OWORD *)&v21.pixelFormat.format = *(_OWORD *)((char *)this + 200);
            v21.pixelFormat.alphaMode = D2D1_ALPHA_MODE_IGNORE;
            *(_OWORD *)&v21.bitmapOptions = v13;
            v14 = (char *)this + *(int *)(v12 + 8) + 16;
            v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
            v16 = *v1;
            v17 = v15;
            *v1 = 0LL;
            if ( v16 )
              (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v16 + 16LL))(v16);
            v18 = CD2DContext::CreateD2DBitmapFromDxgiSurface((CD2DContext *)(v17 + 16), v23, &v21, v1);
            v3 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1D8u, 0LL);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
      }
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0x1DDu, 0LL);
    }
  }
  return v3;
}
