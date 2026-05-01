/*
 * XREFs of ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180482250
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x180482D30 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x180483730 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x18048390C (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 *     ?AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z @ 0x18048A20C (-AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AppResizeView::InitAppResizeData(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // cc
  const struct _GUID *v6; // rdx
  int Instance; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+38h] [rbp-30h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_DWORD *)this + 27) - 1;
  if ( v3 >= *(_DWORD *)a2 )
    v3 = *(_DWORD *)a2;
  if ( *((_DWORD *)this + 25) > v3 )
    v3 = *((_DWORD *)this + 25);
  v4 = *((_DWORD *)this + 28) - 1;
  v5 = v4 < *((_DWORD *)a2 + 1);
  v11[0] = v3;
  if ( !v5 )
    v4 = *((_DWORD *)a2 + 1);
  if ( *((_DWORD *)this + 26) > v4 )
    v4 = *((_DWORD *)this + 26);
  v11[1] = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  Instance = AppResizeData_CreateInstance(*((struct IAppLayout **)this + 9), v6, (void **)this + 8);
  if ( Instance < 0 )
  {
    v8 = 491LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  v9 = *((_QWORD *)this + 8);
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  (*(void (__fastcall **)(__int64, _DWORD *, __m128i *))(*(_QWORD *)v9 + 24LL))(v9, v11, &si128);
  Instance = AppResizeView::UpdateDropFeedback(this, si128.m128i_u32[0], si128.m128i_u32[0], v11, 3);
  if ( Instance < 0 )
  {
    v8 = 494LL;
    goto LABEL_13;
  }
  return (unsigned int)Instance;
}
