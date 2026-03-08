/*
 * XREFs of SmmUnmapMdl @ 0x1C0070B94
 * Callers:
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x1C0071130 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall SmmUnmapMdl(__int64 a1, struct _MDL *a2, void *a3)
{
  void *v3; // rdi
  __int64 v7; // r14
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  v3 = 0LL;
  if ( a3 > MmHighestUserAddress )
  {
    v7 = a1 + 32;
    ExAcquirePushLockExclusiveEx(a1 + 32, 0LL);
    if ( (*(_DWORD *)(a1 + 48))-- == 1 )
    {
      v3 = a3;
    }
    else if ( a3 != a2->MappedSystemVa )
    {
      WdLogSingleEntry1(1LL, 420LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v10,
            v9,
            v11,
            0LL,
            2,
            -1,
            L"pMappedAddress == pMdl->MappedSystemVa",
            420LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    ExReleasePushLockExclusiveEx(v7, 0LL);
  }
  else
  {
    v3 = a3;
  }
  if ( v3 )
    MmUnmapLockedPages(a3, a2);
}
