/*
 * XREFs of ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAVILegacySwapChain@@@Z @ 0x1800CA340
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800CC2A8 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateMinMaxVBlankDuration@@YAXAEBUDXGI_OUTPUT_DWM_DESC@@PEA_K1PEAI@Z @ 0x1800C8210 (-ValidateMinMaxVBlankDuration@@YAXAEBUDXGI_OUTPUT_DWM_DESC@@PEA_K1PEAI@Z.c)
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIAEBUDXGI_RATIONAL@@_K6IW4Enum@FrontBufferRender@@@Z @ 0x1800CA640 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::Create(
        __int64 a1,
        const struct DXGI_OUTPUT_DWM_DESC *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  LPVOID v15; // r10
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  char *v22; // rcx
  unsigned int v23; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-A0h] BYREF
  LONGLONG v25[2]; // [rsp+90h] [rbp-98h] BYREF
  char v26[40]; // [rsp+A0h] [rbp-88h] BYREF
  int v27; // [rsp+C8h] [rbp-60h]

  *a7 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 80LL))(a3, v26);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3Au, 0LL);
  }
  else
  {
    ValidateMinMaxVBlankDuration(a2, v25, (LONGLONG *)&v24, &v23);
    v15 = DefaultHeap::Alloc(0x1C0uLL);
    if ( v15
      && (v16 = CLegacySwapChain::CLegacySwapChain(
                  v15,
                  a1,
                  a3,
                  a4,
                  a5,
                  *(_QWORD *)a2,
                  v27,
                  *((_DWORD *)a2 + 2),
                  *((_DWORD *)a2 + 3),
                  (char *)a2 + 40,
                  v25[0],
                  v24,
                  v23,
                  a6,
                  1),
          (v17 = (_QWORD *)v16) != 0LL) )
    {
      v18 = v16 + *(int *)(*(_QWORD *)(v16 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v17 + 264LL))(v17);
      v13 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x53u, 0LL);
        v22 = (char *)v17 + *(int *)(v17[1] + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v22 + 16LL))(v22);
      }
      else
      {
        *a7 = (char *)v17 + *(int *)(v17[1] + 16LL) + 8;
      }
    }
    else
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x51u, 0LL);
    }
  }
  return v13;
}
