/*
 * XREFs of ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C
 * Callers:
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0162550 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0190840 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C0198420 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkPresent @ 0x1C01C8120 (DxgkPresent.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02CD270 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C02DA240 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DB250 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C0315DC8 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C03198F0 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0320670 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0320FA0 (DxgkPresentMultiPlaneOverlay2.c)
 *     OutputDuplPresent @ 0x1C032C14C (OutputDuplPresent.c)
 *     DxgkRender @ 0x1C0348D00 (DxgkRender.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        __int64 a1)
{
  unsigned __int64 i; // rdi
  __int64 v3; // rcx
  void *v4; // rcx

  if ( *(_QWORD *)a1 )
  {
    if ( !*(_BYTE *)(a1 + 48) )
    {
      if ( *(_BYTE *)(a1 + 49) )
      {
        for ( i = 0LL; i < *(unsigned int *)(a1 + 40); ++i )
        {
          v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i) + 448LL;
          *(_QWORD *)(v3 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v3, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 != a1 + 8 && v4 )
    ExFreePoolWithTag(v4, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
}
