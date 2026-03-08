/*
 * XREFs of ?Optimize@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ @ 0x18008C960
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008C568 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800C4598 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x1801D4808 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  int v3; // edi
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // ecx
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 10 )
  {
    v4 = 64LL;
    if ( *(_DWORD *)(a1 + 24) > 0x40u )
      v4 = *(unsigned int *)(a1 + 24);
    v3 = 0;
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v4) <= *(_DWORD *)(a1 + 4) )
    {
      v7 = 0LL;
      v5 = HrMalloc(4uLL, (unsigned int)v4, &v7);
      if ( v5 >= 0 )
      {
        operator delete(*(void **)(a1 + 16));
        *(_QWORD *)(a1 + 16) = v7;
        *(_DWORD *)(a1 + 4) = v4;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x116u, 0LL);
      }
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
  else
  {
    v3 = v1 + 1;
  }
  *(_DWORD *)(a1 + 8) = v3;
}
