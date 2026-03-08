/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x18003DF50
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x18003DE08 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18003DD64 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802AE48C (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_B.c)
 *     ??4?$com_ptr_t@VCDxHandleAdvancedDirectFlipBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleAdvancedDirectFlipBitmapRealization@@@Z @ 0x1802AE6A8 (--4-$com_ptr_t@VCDxHandleAdvancedDirectFlipBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  CDxHandleBitmapRealization *v6; // rbx
  bool v8; // zf
  unsigned int v12; // edi
  __int64 v13; // rdx
  LPVOID v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  CDxHandleBitmapRealization *v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-38h]
  CDxHandleBitmapRealization *v20; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0LL;
  v8 = (a3[34] & 0x100) == 0;
  v20 = 0LL;
  if ( v8 )
  {
    v12 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_180339218, 3u, -2003292287, 0x25u, 0LL);
LABEL_3:
    v13 = 0LL;
    goto LABEL_4;
  }
  if ( a3[12] || *a3 != 3 )
  {
    v12 = -2003292288;
    v19 = 43;
    goto LABEL_17;
  }
  v15 = operator new(0x228uLL);
  if ( v15 )
    v15 = (LPVOID)CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
                    v15,
                    a1,
                    a2,
                    a3,
                    a4,
                    a5);
  wil::com_ptr_t<CDxHandleAdvancedDirectFlipBitmapRealization,wil::err_returncode_policy>::operator=(&v20, v15);
  v6 = v20;
  if ( !v20 )
  {
    v12 = -2147024882;
    v19 = 51;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_180339218, 3u, v12, v19, 0LL);
LABEL_18:
    if ( v6 )
      *((_QWORD *)v6 + 31) = 0LL;
    goto LABEL_3;
  }
  v16 = CDxHandleBitmapRealization::Initialize(v20);
  v12 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180339218, 3u, v16, 0x34u, 0LL);
    goto LABEL_18;
  }
  v18 = v6;
  v6 = 0LL;
  v13 = ((unsigned __int64)v18 + 360) & -(__int64)(v18 != 0LL);
LABEL_4:
  *a6 = v13;
  if ( v6 )
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  return v12;
}
