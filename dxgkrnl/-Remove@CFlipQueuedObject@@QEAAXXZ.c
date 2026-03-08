/*
 * XREFs of ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x1C0084500
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0083DDC (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x1C0084228 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipQueuedObject::Remove(CFlipQueuedObject *this)
{
  _QWORD *v1; // rdx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v2 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  v1[1] = v1;
  *v1 = v1;
}
