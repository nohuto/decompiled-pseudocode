/*
 * XREFs of ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0084480
 * Callers:
 *     _lambda_88f3ed85026e62755ea077db9998d4dd_::operator() @ 0x1C0081868 (_lambda_88f3ed85026e62755ea077db9998d4dd_--operator().c)
 *     _lambda_cfa2151ea50fd6eac09f4642f8eb6082_::operator() @ 0x1C00818D4 (_lambda_cfa2151ea50fd6eac09f4642f8eb6082_--operator().c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C0083138 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C008322C (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0083F6C (-ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007F6D4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C00815F8 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0084EE0 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ReleaseKernelPresentUpdateReferences(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  CFlipPropertySetBase *v4; // rcx
  CPoolBufferResource *v5; // rcx

  v2 = *((_QWORD *)a2 + 6);
  v3 = v2 + *((unsigned int *)a2 + 10);
  while ( v2 < v3 )
  {
    if ( *(_DWORD *)v2 < 2u )
      goto LABEL_12;
    if ( *(_DWORD *)v2 == 2 || *(_DWORD *)v2 == 3 )
    {
      CFlipResource::Release(*(CFlipResource **)(v2 + 8));
LABEL_12:
      v2 += 16LL;
    }
    else if ( *(_DWORD *)v2 == 4 )
    {
      v4 = *(CFlipPropertySetBase **)(v2 + 24);
      if ( v4 )
        CFlipPropertySetBase::Release(v4);
      v5 = *(CPoolBufferResource **)(v2 + 16);
      if ( v5 )
      {
        CPoolBufferResource::RemoveUsageReference(v5);
        CFlipResource::Release(*(CFlipResource **)(v2 + 16));
      }
      v2 += 40LL;
    }
  }
}
