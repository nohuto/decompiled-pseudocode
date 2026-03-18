/*
 * XREFs of ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0005234
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173118 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z @ 0x1C01EA710 (-DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::PushWorkerThreadOfExclusiveOwner(DXGADAPTER *this, struct _ETHREAD *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry1(1LL, 3035LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0,
          2,
          -1,
          (__int64)L"IsCoreResourceExclusiveOwner()",
          219,
          0,
          0,
          0,
          0);
    }
  }
  if ( *((_QWORD *)this + 24) )
    WdLogSingleEntry5(0LL, 275LL, 17LL, this, 0LL, 0LL);
  *((_QWORD *)this + 24) = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = a2;
}
