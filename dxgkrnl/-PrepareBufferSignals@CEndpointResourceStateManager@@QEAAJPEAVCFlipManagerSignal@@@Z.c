/*
 * XREFs of ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x1C0085808
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x1C0084228 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1C0025258 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0084B2C (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareBufferSignals(
        CEndpointResourceStateManager *this,
        struct CFlipManagerSignal *a2)
{
  int v2; // ebx
  CEndpointResourceStateManager *v3; // rsi
  unsigned int v4; // ebp
  CEndpointResourceStateManager *v5; // r8
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 Pool2; // r14
  CEndpointResourceStateManager *v11; // rdi
  __int64 i; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (CEndpointResourceStateManager *)((char *)this + 16);
  v16 = 0LL;
  v4 = 0;
  v5 = (CEndpointResourceStateManager *)*((_QWORD *)this + 2);
  if ( v5 != (CEndpointResourceStateManager *)((char *)this + 16) )
  {
    do
    {
      v7 = v5 == 0LL;
      v8 = (__int64)v5 + 40;
      v5 = *(CEndpointResourceStateManager **)v5;
      v9 = v4;
      if ( v7 )
        v8 = 48LL;
      ++v4;
      if ( !*(_QWORD *)v8 )
        v4 = v9;
    }
    while ( v5 != v3 );
    if ( v4 )
    {
      v2 = RtlULongLongMult(v4, 8uLL, &v16);
      if ( v2 >= 0 )
      {
        Pool2 = ExAllocatePool2(257LL, v16, 1651721030LL);
        if ( Pool2 )
        {
          v11 = *(CEndpointResourceStateManager **)v3;
          for ( i = 0LL; v11 != v3; v11 = *(CEndpointResourceStateManager **)v11 )
          {
            v13 = (__int64)v11 + 40;
            if ( !v11 )
              v13 = 48LL;
            v14 = *(_QWORD *)v13;
            if ( *(_QWORD *)v13 )
            {
              ++*(_DWORD *)(v14 + 24);
              *(_QWORD *)(Pool2 + 8 * i) = v14;
              CPoolBufferResource::AddUsageReference((PRKEVENT *)v14);
              i = (unsigned int)(i + 1);
            }
          }
          *((_QWORD *)a2 + 3) = Pool2;
          *((_DWORD *)a2 + 8) = v4;
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v2;
}
