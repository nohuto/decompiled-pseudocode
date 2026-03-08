/*
 * XREFs of ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x1C0076058
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C007659C (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x1C0081048 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ??0CIFlipPresentHistoryToken@@QEAA@PEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C031C120 (--0CIFlipPresentHistoryToken@@QEAA@PEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::LockForWrite(char *Object, struct CFlipManagerToken **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(Object + 72));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (struct CFlipManagerToken *)(Object + 32);
  }
  return (unsigned int)v4;
}
