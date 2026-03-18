/*
 * XREFs of ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C007703C
 * Callers:
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x1C0076F70 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?AddTokenToQueueAndSignalTokenEvent@CTokenManager@@MEAAJPEAVCToken@@@Z @ 0x1C00770C0 (-AddTokenToQueueAndSignalTokenEvent@CTokenManager@@MEAAJPEAVCToken@@@Z.c)
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C0077110 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C00777E4 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C0077950 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C00782B8 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueue(CTokenManager *this, struct CompositionSurfaceObject **a2)
{
  int v4; // edi
  struct CompositionSurfaceObject *v5; // rdx
  CTokenQueue *v6; // rcx
  struct CTokenManager::TokenQueueTableEntry *v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(struct CompositionSurfaceObject **))*a2 + 23))(a2) )
  {
    v6 = (CTokenManager *)((char *)this + 344);
    goto LABEL_5;
  }
  v5 = a2[4];
  v8 = 0LL;
  v4 = CTokenManager::EnsureTokenQueue(this, v5, &v8);
  if ( v4 >= 0 )
  {
    v6 = (CTokenQueue *)*((_QWORD *)v8 + 1);
LABEL_5:
    CTokenQueue::AddToken(v6, (struct CToken *)a2);
  }
  return (unsigned int)v4;
}
