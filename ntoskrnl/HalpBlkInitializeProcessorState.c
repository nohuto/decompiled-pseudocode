/*
 * XREFs of HalpBlkInitializeProcessorState @ 0x140A9544C
 * Callers:
 *     HalpBlkStartBlockedProcessor @ 0x140A9564C (HalpBlkStartBlockedProcessor.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpBlkInitializeIdt @ 0x140A95370 (HalpBlkInitializeIdt.c)
 */

unsigned __int64 __fastcall HalpBlkInitializeProcessorState(
        unsigned __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // ebx
  struct _KPRCB *CurrentPrcb; // r9
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 result; // rax

  v5 = HalpBlkNumberProcessors;
  memset(a2, 0, 0xE000uLL);
  memset(a1, 0, 0x5C0uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
  *((_DWORD *)a2 + 3) = a5;
  *((_DWORD *)a2 + 2) = v5;
  *(_QWORD *)a2 = a2;
  *((_DWORD *)a2 + 6) = a5 & -v9;
  *((_QWORD *)a2 + 4) = HalpLocalApic;
  a2[40] = HalpApicUsingMsrs;
  a2[41] = HalpApicX2Mode;
  a2[42] = HalpApicClusterModeEnabled;
  a2[43] = CurrentPrcb->CpuVendor;
  *((_WORD *)a1 + 43) = CurrentPrcb->ProcessorState.SpecialRegisters.Gdtr.Limit;
  a1[11] = (unsigned __int64)(a2 + 49072);
  memmove(
    a2 + 49072,
    CurrentPrcb->ProcessorState.SpecialRegisters.Gdtr.Base,
    CurrentPrcb->ProcessorState.SpecialRegisters.Gdtr.Limit + 1LL);
  HalpBlkInitializeIdt((__int64)(a1 + 12), a2 + 36864);
  *((_QWORD *)a2 + 5134) = a2;
  *((_WORD *)a2 + 24569) = (_WORD)a2 - 24576;
  a2[49140] = (unsigned int)((_DWORD)a2 + 40960) >> 16;
  a2[49143] = (unsigned int)((_DWORD)a2 + 40960) >> 24;
  *((_DWORD *)a2 + 12286) = (unsigned __int64)(a2 + 40960) >> 32;
  *(_QWORD *)(a2 + 41004) = a2 + 28672;
  *(_QWORD *)(a2 + 40996) = a2 + 20480;
  *(_QWORD *)(a2 + 41012) = a2 + 36864;
  *(_QWORD *)(a2 + 40964) = a2 + 12288;
  *((_QWORD *)a2 + 12) = a2 + 28672;
  *((_QWORD *)a2 + 10) = a2 + 12288;
  *((_QWORD *)a2 + 11) = a2 + 20480;
  *((_QWORD *)a2 + 13) = a2 + 36864;
  *((_QWORD *)a2 + 6) = a2 + 36864;
  *((_QWORD *)a2 + 7) = a2 + 36864;
  *((_QWORD *)a2 + 9) = a2 + 49072;
  *((_QWORD *)a2 + 8) = a2 + 40960;
  *((_DWORD *)a1 + 77) = 0;
  a1[61] = (unsigned __int64)HalpBlkProcessorStartup;
  a1[49] = (unsigned __int64)(a2 + 12280);
  a1[46] = (unsigned __int64)a2;
  *((_DWORD *)a1 + 74) = 2818064;
  *((_DWORD *)a1 + 75) = 5439531;
  *((_DWORD *)a1 + 76) = 1572907;
  v10 = __readcr0();
  *a1 = v10;
  a1[2] = HalpBlkRootPageTablePa;
  *((_WORD *)a1 + 56) = 64;
  a2[49141] = -119;
  v11 = __readcr4();
  result = v11 & 0xFFFFFFFFFF7FFFFFuLL;
  a1[3] = result;
  *((_QWORD *)a2 + 277) = 0LL;
  return result;
}
