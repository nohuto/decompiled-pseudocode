/*
 * XREFs of ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801F4068
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800C9168 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180092758 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x18012D3EA (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x1801DB810 (-UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x1801F4414 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::Present(
        CDirectFlipInfo *this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        __int128 *a4,
        __int64 a5)
{
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD **); // rcx
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64 *, int *); // rsi
  __int64 (__fastcall ***v19)(_QWORD, _BYTE *); // rcx
  int v20; // r12d
  __int128 v21; // xmm0
  char *v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // esi
  const void *updated; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-81h]
  _QWORD *v30; // [rsp+60h] [rbp-41h] BYREF
  __int64 v31; // [rsp+68h] [rbp-39h] BYREF
  __int64 v32; // [rsp+70h] [rbp-31h] BYREF
  int v33; // [rsp+78h] [rbp-29h] BYREF
  __int64 v34; // [rsp+80h] [rbp-21h]
  __int128 v35; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v36[16]; // [rsp+98h] [rbp-9h] BYREF

  v5 = 0;
  v34 = a5;
  v6 = 0;
  if ( CDirectFlipInfo::PresentNeeded(this) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
      &v32,
      v11);
    if ( !v32 )
    {
      v6 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003292412, 0x2B6u, 0LL);
      goto LABEL_24;
    }
    v31 = 0LL;
    v35 = 0LL;
    v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))(*(int *)(*(_QWORD *)(v32 + 8) + 4LL) + v32 + 8);
    v30 = 0LL;
    v14 = (**v13)(v13, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v30);
    v6 = v14;
    if ( v14 < 0 )
    {
      v29 = 637;
    }
    else
    {
      if ( *((_DWORD *)this + 13) == 1 )
      {
        v22 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
        v23 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v22)(v22, v36);
        v21 = *a4;
        v20 = *(_DWORD *)(v23 + 8);
        goto LABEL_11;
      }
      v16 = *(_QWORD **)this;
      v33 = 0;
      v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 176LL))(v16);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, int *))(*(_QWORD *)v17 + 184LL);
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      v14 = v18(v17, *((_QWORD *)this + 2), &v31, &v33);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v19 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))((char *)v30 + *(int *)(v30[1] + 12LL) + 8);
        v20 = *(_DWORD *)((**v19)(v19, v36) + 8);
        v21 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v30 + 48LL))(v30);
LABEL_11:
        v24 = 1;
        v35 = v21;
        if ( CDirectFlipInfo::UseSyncIntervalAndAllowTearing(this, a2) )
        {
          v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 112LL))(v30);
          if ( v24 )
          {
            v24 = 1;
          }
          else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v30 + 128LL))(v30) )
          {
            v5 = 512;
          }
        }
        updated = CDirectFlipInfo::UpdateHDRMetaData(this);
        v6 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, _QWORD, _QWORD, _QWORD, __int64, int, _DWORD, const void *, __int128 *, __int64))(*(_QWORD *)a2 + 200LL))(
               a2,
               v24,
               v5,
               a3,
               v31,
               v20,
               *((_DWORD *)this + 18),
               updated,
               &v35,
               v34);
        if ( (v6 & 0x80000000) == 0 )
        {
          *((_BYTE *)this + 123) = 0;
          *((_BYTE *)this + 121) = 0;
          wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v31);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
LABEL_24:
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
          return v6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v6, 0x2AEu, 0LL);
        goto LABEL_21;
      }
      v29 = 647;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v29, 0LL);
LABEL_21:
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v31);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
    if ( v6 == -2003304442 )
      *((_BYTE *)this + 125) = 1;
    return v6;
  }
  if ( (***(unsigned __int8 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
  {
    v6 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2003304309, 0x2BEu, 0LL);
  }
  return v6;
}
