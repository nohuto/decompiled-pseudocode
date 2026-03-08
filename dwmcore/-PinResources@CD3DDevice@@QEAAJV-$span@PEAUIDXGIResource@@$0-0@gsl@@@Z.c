/*
 * XREFs of ?PinResources@CD3DDevice@@QEAAJV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x18028CF80
 * Callers:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025802C (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDevice@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDevice@@@2@@Z @ 0x18013120A (-erase@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDevice@@$0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAUIDXGIResource@@V?$buffer_impl@PEAUIDXGIResource@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAUIDXGIResource@@_K0@Z @ 0x18028D334 (-reserve_region@-$vector_facade@PEAUIDXGIResource@@V-$buffer_impl@PEAUIDXGIResource@@$06$00Vlibe.c)
 */

__int64 __fastcall CD3DDevice::PinResources(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  _BYTE *v3; // r9
  _BYTE *v5; // rdx
  unsigned int v7; // edi
  _QWORD *v8; // r15
  __int64 v9; // r12
  _QWORD *i; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _BYTE *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v17; // [rsp+30h] [rbp-49h] BYREF
  __int64 v18; // [rsp+38h] [rbp-41h] BYREF
  _BYTE *v19; // [rsp+40h] [rbp-39h] BYREF
  _BYTE *v20; // [rsp+48h] [rbp-31h]
  __int64 *v21; // [rsp+50h] [rbp-29h]
  _BYTE v22[56]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v23; // [rsp+90h] [rbp+17h] BYREF

  v2 = *(_DWORD *)(a1 + 1088);
  v3 = v22;
  v19 = v22;
  v5 = v22;
  v20 = v22;
  v21 = &v23;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1803B6EA8, 2u, v2, 0x35Cu, 0LL);
  }
  else
  {
    v7 = 0;
    if ( *(_DWORD *)a2 )
    {
      v8 = (_QWORD *)(a1 + 1200);
      do
      {
        if ( (unsigned __int64)v7 >= *a2 )
        {
          gsl::details::terminate((gsl::details *)v7);
          __debugbreak();
        }
        v9 = *(_QWORD *)(a2[1] + 8LL * v7);
        for ( i = (_QWORD *)*v8; i != (_QWORD *)v8[1]; i += 4 )
        {
          if ( *i == v9 )
          {
            v17 = i;
            detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
              v8,
              &v18,
              &v17);
            goto LABEL_11;
          }
        }
        *(_QWORD *)detail::vector_facade<IDXGIResource *,detail::buffer_impl<IDXGIResource *,7,1,detail::liberal_expansion_policy>>::reserve_region(
                     &v19,
                     (v5 - v3) >> 3) = v9;
LABEL_11:
        v5 = v20;
        ++v7;
        v3 = v19;
      }
      while ( v7 < *(_DWORD *)a2 );
    }
    if ( ((v5 - v3) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
      {
        McTemplateU0q_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&Pinning_D3DPinStart,
          *(unsigned int *)a2);
        v5 = v20;
        v3 = v19;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 544) + 24LL))(
              *(_QWORD *)(a1 + 544),
              v3,
              (unsigned int)((v5 - v3) >> 3));
      v2 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1803B6EA8, 2u, v11, 0x37Fu, 0LL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
        McTemplateU0q_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&Pinning_D3DPinStop,
          (unsigned int)v2);
    }
  }
  v13 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v2, 14);
  v14 = v19;
  v15 = (v20 - v19) >> 3;
  if ( v15 )
    v20 -= 8 * v15;
  v19 = 0LL;
  if ( v14 == v22 )
    v14 = 0LL;
  operator delete(v14);
  return v13;
}
