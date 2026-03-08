/*
 * XREFs of ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180090A0C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x180076160 (-ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18008E940 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1801D7918 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800259D0 (-clear_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vlibe.c)
 *     ?ProcessRenderCommands_OverlapPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEAV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180048CAC (-ProcessRenderCommands_OverlapPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV-$list@USinkRenderCom.c)
 *     ?ProcessRenderCommands_OcclusionPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180085C98 (-ProcessRenderCommands_OcclusionPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV-$list@USinkRenderC.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180090BB4 (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180092408 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@QEAA@XZ @ 0x1801FBCF8 (--1-$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V-$allocator@USinkRenderCommand@CCpuC.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::FlushDrawList(
        CCpuClipAntialiasSinkContext *this,
        struct CDrawingContext *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _BYTE *v13; // r8
  _BYTE *v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  unsigned __int64 v22; // r8
  _QWORD **v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rbx
  int *v26; // [rsp+20h] [rbp-59h]
  void *v27; // [rsp+30h] [rbp-49h] BYREF
  __int64 v28; // [rsp+38h] [rbp-41h]
  int v29[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE *v30; // [rsp+48h] [rbp-31h]
  char *v31; // [rsp+50h] [rbp-29h]
  _BYTE v32[48]; // [rsp+58h] [rbp-21h] BYREF
  char v33; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v3 = a3;
  if ( !CCommonRegistryData::CpuClipAASinkEnableRender )
  {
LABEL_5:
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(*((_QWORD *)this + 2) + 8LL + 432 * v3);
    return 0LL;
  }
  v28 = 0LL;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v6 = v6;
  v6[1] = v6;
  v27 = v6;
  CCpuClipAntialiasSinkContext::ProcessRenderCommands_OcclusionPass((__int64)this, v3, (_QWORD **)&v27);
  if ( !v28 )
  {
LABEL_3:
    v8 = (_QWORD **)v27;
    **((_QWORD **)v27 + 1) = 0LL;
    v9 = *v8;
    if ( v9 )
    {
      do
      {
        v11 = (_QWORD *)*v9;
        operator delete(v9, 0x20uLL);
        v9 = v11;
      }
      while ( v11 );
    }
    operator delete(v27, 0x20uLL);
    goto LABEL_5;
  }
  if ( CCommonRegistryData::CpuClipAASinkEnableIntermediates )
  {
    *(_QWORD *)v29 = v32;
    v30 = v32;
    v31 = &v33;
    CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass(v7, v3, (__int64 **)&v27, (__int64 *)v29);
    v13 = v30;
    v14 = *(_BYTE **)v29;
    if ( v30 != *(_BYTE **)v29 )
    {
      v26 = v29;
      v15 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(this, a2, (unsigned int)v3, &v27);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
          (const char *)(unsigned int)v15,
          (int)v29);
        v21 = *(_BYTE **)v29;
        v22 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v30[-*(_QWORD *)v29] >> 2);
        if ( v22 )
        {
          detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)v29,
            v20,
            v22);
          v21 = *(_BYTE **)v29;
        }
        *(_QWORD *)v29 = 0LL;
        if ( v21 == v32 )
          v21 = 0LL;
        operator delete(v21);
        std::list<CCpuClipAntialiasSinkContext::SinkRenderCommand>::~list<CCpuClipAntialiasSinkContext::SinkRenderCommand>(&v27);
        return v16;
      }
      v13 = v30;
      v14 = *(_BYTE **)v29;
    }
    v17 = 0xAAAAAAAAAAAAAAABuLL * ((v13 - v14) >> 2);
    if ( v17 )
    {
      detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)v29,
        v12,
        v17);
      v14 = *(_BYTE **)v29;
    }
    *(_QWORD *)v29 = 0LL;
    if ( v14 == v32 )
      v14 = 0LL;
    operator delete(v14);
  }
  v18 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_RenderPass(this, a2, (unsigned int)v3, &v27);
  v19 = v18;
  if ( v18 >= 0 )
    goto LABEL_3;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)(unsigned int)v18,
    (int)v26);
  v23 = (_QWORD **)v27;
  **((_QWORD **)v27 + 1) = 0LL;
  v24 = *v23;
  if ( *v23 )
  {
    do
    {
      v25 = (_QWORD *)*v24;
      std::_Deallocate<16,0>(v24, 32LL);
      v24 = v25;
    }
    while ( v25 );
  }
  std::_Deallocate<16,0>(v27, 32LL);
  return v19;
}
