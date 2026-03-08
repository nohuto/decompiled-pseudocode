/*
 * XREFs of SmmSetAdlBaseAddress @ 0x1C006F730
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x1C006F9F0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013C28 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall SmmSetAdlBaseAddress(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  const struct SYSMM_LOGICAL_BLOCK *v4; // rcx
  __int64 QuadPart; // rbx
  __int64 v6; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  v4 = *(const struct SYSMM_LOGICAL_BLOCK **)(a1 + 24);
  QuadPart = 0LL;
  v6 = a4;
  if ( v4 )
  {
    PhysicalAddress.QuadPart = SmmGetLogicalAddress(v4);
    v9 = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  else
  {
    PhysicalAddress.LowPart = *(_DWORD *)(a2 + 44) & 0x1E;
    if ( PhysicalAddress.LowPart == 10 )
    {
      PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a2 + 8));
      QuadPart = PhysicalAddress.QuadPart;
    }
    else if ( PhysicalAddress.LowPart == 6 )
    {
      QuadPart = *(_QWORD *)(a2 + 8);
    }
    else
    {
      LOBYTE(PhysicalAddress.LowPart) = WdLogSingleEntry1(1LL, 685LL);
      if ( bTracingEnabled )
      {
        LOBYTE(PhysicalAddress.LowPart) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          LOBYTE(PhysicalAddress.LowPart) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                                              v11,
                                              v10,
                                              v12,
                                              0LL,
                                              2,
                                              -1,
                                              L"0",
                                              685LL,
                                              0LL,
                                              0LL,
                                              0LL,
                                              0LL);
      }
    }
    v9 = QuadPart >> 12;
  }
  *(_QWORD *)(a3 + 16) = v9 + v6;
  return PhysicalAddress.LowPart;
}
