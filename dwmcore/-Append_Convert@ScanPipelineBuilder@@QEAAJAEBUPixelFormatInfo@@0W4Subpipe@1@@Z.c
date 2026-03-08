/*
 * XREFs of ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802B94C0
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802B8F80 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802B9380 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z @ 0x1802B9784 (-Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z.c)
 *     ?GetNearestInterchangeFormat@@YA?AW4DXGI_FORMAT@@W41@@Z @ 0x1802B99EC (-GetNearestInterchangeFormat@@YA-AW4DXGI_FORMAT@@W41@@Z.c)
 *     ?GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1802B9A28 (-GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 *     ?GetOp_AlphaMultiply@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1802B9A74 (-GetOp_AlphaMultiply@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 *     ?GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1802B9AC0 (-GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::Append_Convert(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v7; // ebx
  enum DXGI_FORMAT *v8; // r8
  enum DXGI_FORMAT NearestInterchangeFormat; // ebp
  _QWORD *v10; // r8
  int v11; // r9d
  enum DXGI_FORMAT v12; // r12d
  void (*v13)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v14; // eax
  __int64 v15; // rcx
  void (*v16)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v17; // eax
  __int64 v18; // rcx
  void (__fastcall *v19)(const struct PipelineParams *, const struct ScanOpParams *); // rdi
  void (__fastcall *v20)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v21; // eax
  __int64 v22; // rcx
  int appended; // eax
  __int64 v24; // rcx
  _QWORD *v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  void (*Op_IgnoreAlpha)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  void (*Op_AlphaDivide)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  void (*v36)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v37; // r8
  int v38; // eax
  __int64 v39; // rcx
  void (*Op_AlphaMultiply)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v41; // r8
  int v42; // eax
  __int64 v43; // rcx

  v3 = *(_DWORD *)(a3 + 4);
  v7 = 0;
  if ( *(_DWORD *)a2 == *(_DWORD *)a3 )
  {
    if ( v3 == 3 )
    {
      Op_IgnoreAlpha = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_IgnoreAlpha )
      {
        v30 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_IgnoreAlpha, v29);
        v7 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x204u, 0LL);
          return v7;
        }
      }
    }
    else if ( v3 == 1 )
    {
      Op_AlphaDivide = GetOp_AlphaDivide((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_AlphaDivide )
      {
        v34 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_AlphaDivide, v33);
        v7 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x20Du, 0LL);
          return v7;
        }
      }
    }
  }
  else
  {
    NearestInterchangeFormat = GetNearestInterchangeFormat(*(enum DXGI_FORMAT *)a2);
    v12 = GetNearestInterchangeFormat(*v8);
    if ( v11 == 3 )
    {
      v13 = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)v10);
      if ( v13 )
      {
        v14 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v13, v10);
        v7 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1C3u, 0LL);
          return v7;
        }
      }
    }
    else if ( v11 == 1 )
    {
      v16 = GetOp_AlphaDivide((enum DXGI_FORMAT)*(_DWORD *)v10);
      if ( v16 )
      {
        v17 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v16, v10);
        v7 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1CCu, 0LL);
          return v7;
        }
      }
    }
    v19 = Convert_32bppABGR_32bppARGB;
    if ( *(_DWORD *)a3 != v12 )
    {
      switch ( *(_DWORD *)a3 )
      {
        case 0xA:
          v20 = Convert_64bppABGRFloat_128bppABGR;
          break;
        case 0x18:
          v20 = Convert_32bppABGR2101010_64bppABGR;
          break;
        case 0x1C:
          v20 = Convert_32bppABGR_32bppARGB;
          break;
        case 0x41:
          v20 = Convert_8bppA_32bppARGB;
          break;
        default:
          v20 = Quantize_32bppARGB_32RGB;
          if ( *(_DWORD *)a3 != 88 )
            v20 = 0LL;
          break;
      }
      v21 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v20, v10);
      v7 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1DCu, 0LL);
        return v7;
      }
    }
    appended = ScanPipelineBuilder::Append_Convert_BetweenInterchange(
                 a1,
                 (unsigned int)NearestInterchangeFormat,
                 (unsigned int)v12);
    v7 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, appended, 0x1E4u, 0LL);
      return v7;
    }
    if ( *(_DWORD *)a2 != NearestInterchangeFormat
      && (*(_DWORD *)a2 != 88 || NearestInterchangeFormat != DXGI_FORMAT_B8G8R8A8_UNORM) )
    {
      if ( *(_DWORD *)a2 == 10 )
      {
        v19 = Convert_128bppABGR_64bppABGRFloat;
      }
      else if ( *(_DWORD *)a2 == 24 )
      {
        v19 = Convert_64bppABGR_32bppABGR2101010;
      }
      else if ( *(_DWORD *)a2 != 28 )
      {
        v19 = Quantize_32bppARGB_32RGB;
        if ( *(_DWORD *)a2 != 88 )
          v19 = 0LL;
      }
      v26 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v19, v25);
      v7 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x1F6u, 0LL);
        return v7;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 4) == 3 )
  {
    v36 = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a2);
    if ( v36 )
    {
      v38 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v36, v37);
      v7 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x21Bu, 0LL);
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == 1 )
  {
    Op_AlphaMultiply = GetOp_AlphaMultiply((enum DXGI_FORMAT)*(_DWORD *)a2);
    if ( Op_AlphaMultiply )
    {
      v42 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_AlphaMultiply, v41);
      v7 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x226u, 0LL);
    }
  }
  return v7;
}
