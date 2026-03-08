/*
 * XREFs of ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x1C006F584
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x1C006F9F0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013C28 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmBuildAdlFromAddress @ 0x1C006F61C (SmmBuildAdlFromAddress.c)
 *     SmmBuildAdlFromMdl @ 0x1C006F654 (SmmBuildAdlFromMdl.c)
 */

void __fastcall SmmBuildAdl(
        struct SYSMM_ADAPTER_OBJECT *a1,
        PHYSICAL_ADDRESS *a2,
        struct SYSMM_ADL *a3,
        unsigned int a4,
        unsigned int a5)
{
  const struct SYSMM_LOGICAL_BLOCK *v5; // rcx
  __int64 v7; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v9; // rdx
  PHYSICAL_ADDRESS v10; // rdx

  v5 = (const struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a1 + 3);
  v7 = a4;
  if ( v5 )
  {
    PhysicalAddress.QuadPart = SmmGetLogicalAddress(v5);
LABEL_3:
    v9 = PhysicalAddress;
LABEL_11:
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SmmBuildAdlFromAddress)(
      a3,
      (PHYSICAL_ADDRESS)v9.QuadPart,
      v7,
      a5);
    return;
  }
  if ( (((unsigned int)a2[5].HighPart >> 1) & 0xF) == 1 )
    goto LABEL_13;
  if ( (((unsigned int)a2[5].HighPart >> 1) & 0xF) != 2 )
  {
    if ( (((unsigned int)a2[5].HighPart >> 1) & 0xF) == 3 )
    {
      v9 = a2[1];
      goto LABEL_11;
    }
    if ( (((unsigned int)a2[5].HighPart >> 1) & 0xF) != 4 )
    {
      if ( (((unsigned int)a2[5].HighPart >> 1) & 0xF) != 5 )
        return;
      PhysicalAddress = MmGetPhysicalAddress((PVOID)a2[1].QuadPart);
      goto LABEL_3;
    }
LABEL_13:
    v10 = a2[7];
    goto LABEL_14;
  }
  v10 = a2[1];
LABEL_14:
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SmmBuildAdlFromMdl)(a3, (PHYSICAL_ADDRESS)v10.QuadPart, a4, a5);
}
