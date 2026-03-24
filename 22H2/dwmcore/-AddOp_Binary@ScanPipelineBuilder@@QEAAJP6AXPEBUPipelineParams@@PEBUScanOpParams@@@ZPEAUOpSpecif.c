/*
 * XREFs of ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x180219CE0
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802198E0 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x180219E24 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 *     ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z @ 0x18021A0E4 (-Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800B89B8 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x180219BB0 (-AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z.c)
 *     ?GetFreeIntermediateBuffer@ScanPipelineBuilder@@IEAA?AW4BufferLocation@@XZ @ 0x18021A324 (-GetFreeIntermediateBuffer@ScanPipelineBuilder@@IEAA-AW4BufferLocation@@XZ.c)
 */

__int64 __fastcall ScanPipelineBuilder::AddOp_Binary(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  int v6; // r14d
  int v7; // eax
  _QWORD *v8; // rsi
  int v9; // eax
  int FreeIntermediateBuffer; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // r9d
  unsigned int v15; // [rsp+20h] [rbp-28h]
  _QWORD *v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  if ( !a2 )
  {
    v5 = -2003292287;
    v15 = 218;
LABEL_15:
    v13 = v5;
    goto LABEL_16;
  }
  v6 = *(_DWORD *)(a1 + 32);
  v7 = DynArrayImpl<0>::AddMultiple(*(_QWORD *)a1 + 8LL, 48, 1, &v16);
  v8 = v16;
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v7, 0x342u, 0LL);
  }
  else
  {
    *v16 = a2;
    v8[4] = 0LL;
    *((_DWORD *)v8 + 10) = v6;
  }
  if ( v5 < 0 )
  {
    v15 = 222;
    goto LABEL_15;
  }
  v8[3] = 0LL;
  v9 = ScanPipelineBuilder::AddBufferReference((_QWORD *)a1, v8 + 2, *(_DWORD *)(a1 + 24));
  v5 = v9;
  if ( v9 < 0 )
  {
    v15 = 226;
    goto LABEL_12;
  }
  FreeIntermediateBuffer = ScanPipelineBuilder::GetFreeIntermediateBuffer(a1);
  v11 = *(int *)(a1 + 24);
  if ( (unsigned int)(v11 - 3) <= 2 )
    *(_BYTE *)(v11 + a1 + 13) = 1;
  *(_DWORD *)(a1 + 24) = FreeIntermediateBuffer;
  v12 = *(_DWORD *)(a1 + 20) + 1;
  *(_DWORD *)(a1 + 20) = v12;
  *(_DWORD *)(a1 + 32) = v12;
  *((_DWORD *)v8 + 10) = v12;
  v9 = ScanPipelineBuilder::AddBufferReference((_QWORD *)a1, v8 + 1, *(_DWORD *)(a1 + 24));
  v5 = v9;
  if ( v9 < 0 )
  {
    v15 = 230;
LABEL_12:
    v13 = v9;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v13, v15, 0LL);
  }
  return (unsigned int)v5;
}
