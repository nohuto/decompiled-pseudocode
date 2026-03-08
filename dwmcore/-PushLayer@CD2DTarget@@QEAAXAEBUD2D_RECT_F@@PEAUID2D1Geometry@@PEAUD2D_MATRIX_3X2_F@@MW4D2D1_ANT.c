/*
 * XREFs of ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180013280
 * Callers:
 *     ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800131E0 (-PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 * Callees:
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180013400 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800F58AC (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DTarget::PushLayer(
        CD2DTarget *this,
        const __m128i *a2,
        struct ID2D1Geometry *a3,
        struct D2D_MATRIX_3X2_F *a4,
        float a5,
        enum D2D1_ANTIALIAS_MODE a6,
        enum D2D1_LAYER_OPTIONS1 a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rax
  __int128 v13; // xmm0
  __m128i v14; // xmm2
  __int64 v15; // rax
  _BYTE v16[12]; // [rsp+24h] [rbp-95h] BYREF
  _BYTE v17[40]; // [rsp+30h] [rbp-89h]
  __int64 v18; // [rsp+58h] [rbp-61h]
  __int64 v19; // [rsp+60h] [rbp-59h]
  __int128 v20; // [rsp+68h] [rbp-51h] BYREF
  __int64 v21; // [rsp+78h] [rbp-41h]
  _OWORD v22[4]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+7h]

  v8 = *((_QWORD *)this + 2);
  v21 = 0LL;
  v20 = *(_OWORD *)&_xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v8 + 200) + 240LL))(*(_QWORD *)(v8 + 200), &v20);
  CD2DContext::SetPrimitiveBlend(*((CD2DContext **)this + 2), a8);
  if ( a4 )
  {
    v13 = *(_OWORD *)&a4->m11;
    v21 = *(_QWORD *)&a4->m[2][0];
  }
  else
  {
    v21 = 0LL;
    v13 = *(_OWORD *)&_xmm;
  }
  v20 = v13;
  memset_0(v16, 0, 0x44uLL);
  v18 = 0LL;
  v14 = _mm_loadu_si128(a2);
  *(_DWORD *)&v17[8] = a6;
  *(_OWORD *)&v17[12] = v20;
  LODWORD(v19) = a7;
  v15 = *((_QWORD *)this + 2);
  *(_QWORD *)&v17[28] = v21;
  *(_QWORD *)v17 = a3;
  *(float *)&v17[36] = a5;
  v22[2] = *(_OWORD *)&v17[16];
  v22[1] = *(_OWORD *)v17;
  v22[0] = v14;
  v22[3] = *(unsigned __int64 *)&v17[32];
  v23 = v19;
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v15 + 200) + 688LL))(
    *(_QWORD *)(v15 + 200),
    v22,
    0LL);
  CD2DTarget::ApplyCurrentClip(this);
  ++*((_DWORD *)this + 12);
}
