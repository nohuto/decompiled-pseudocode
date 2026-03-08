/*
 * XREFs of ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053210
 * Callers:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0057808 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C0186240 (DxgkShareObjectsInternal.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C03218C8 (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C034A5B0 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C034BA24 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1C036EEA4 (DxgkpAcquireKeyedMutexFromHandle.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGKEYEDMUTEX::AcquireReference(DXGKEYEDMUTEX *this)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d

  if ( _InterlockedIncrement64((volatile signed __int64 *)this + 3) <= 0 )
  {
    WdLogSingleEntry1(1LL, 731LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v2,
          v1,
          v3,
          0LL,
          2,
          -1,
          L"NewReferenceCount > 0",
          731LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
