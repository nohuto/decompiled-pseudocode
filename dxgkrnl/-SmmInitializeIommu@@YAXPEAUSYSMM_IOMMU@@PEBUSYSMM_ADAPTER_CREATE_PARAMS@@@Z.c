/*
 * XREFs of ?SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x1C020A7B0
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C020A220 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmInitializeSpinLock@$00@@YAXPEAU?$SYSMM_SPINLOCK@$00@@@Z @ 0x1C0016EFC (--$SmmInitializeSpinLock@$00@@YAXPEAU-$SYSMM_SPINLOCK@$00@@@Z.c)
 *     ??$SmmInitializePushLock@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x1C0016F68 (--$SmmInitializePushLock@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 */

void __fastcall SmmInitializeIommu(struct SYSMM_IOMMU *a1, const struct SYSMM_ADAPTER_CREATE_PARAMS *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  PMDL Mdl; // rax

  SmmInitializeSpinLock<1>((_DWORD *)a1 + 2);
  SmmInitializePushLock<1>((_QWORD *)a1 + 2);
  SmmInitializePushLock<1>(a1);
  v4 = *(_DWORD *)(v3 + 16) & 0xF;
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 6) = v4;
  v5 = *(_DWORD *)(v3 + 12);
  *((_QWORD *)a1 + 6) = 0LL;
  *((_DWORD *)a1 + 10) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_OWORD *)a1 + 16) = xmmword_1C009AEC0;
  *((_OWORD *)a1 + 17) = xmmword_1C009AED0;
  if ( (v5 & 1) == 0 )
  {
    *((_QWORD *)a1 + 8) = 0LL;
    SmmInitializeSpinLock<1>((_DWORD *)a1 + 18);
    ExInitializeLookasideListEx(
      (PLOOKASIDE_LIST_EX)((char *)a1 + 80),
      0LL,
      0LL,
      (POOL_TYPE)512,
      0,
      0x28uLL,
      0x34737844u,
      0);
    v6 = 256;
    Mdl = IoAllocateMdl(0LL, 0x100000u, 0, 0, 0LL);
    *((_QWORD *)a1 + 22) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement(&dword_1C013BD10);
      WdLogSingleEntry1(6LL, 2655LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate Iommu staging MDL",
        2655LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = 1;
      *((_QWORD *)a1 + 22) = (char *)a1 + 184;
    }
    *((_DWORD *)a1 + 60) = v6;
  }
}
