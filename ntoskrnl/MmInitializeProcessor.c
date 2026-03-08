/*
 * XREFs of MmInitializeProcessor @ 0x140A86740
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x140244548 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     KeGetProcessorNodeNumber @ 0x1402FC5A0 (KeGetProcessorNodeNumber.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 *     MmDeleteProcessor @ 0x14061578C (MmDeleteProcessor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1)
{
  __int64 ProcessorNodeNumber; // rbx
  _QWORD *PoolMm; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r11
  ULONG_PTR v7; // rax
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[1] = 0LL;
  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 35248) = -1LL;
  *(_DWORD *)(a1 + 33372) = dword_140C65778;
  ProcessorNodeNumber = (unsigned __int16)KeGetProcessorNodeNumber(a1);
  PoolMm = ExAllocatePoolMm(64, 0x3180uLL, 0x6D50694Du, (unsigned int)ProcessorNodeNumber | 0x80000000);
  v4 = PoolMm;
  if ( PoolMm )
  {
    *((_DWORD *)PoolMm + 3152) = 0;
    *PoolMm = PoolMm + 4;
    *((_DWORD *)PoolMm + 6) = 512;
    PoolMm[1] = PoolMm + 519;
    PoolMm[2] = PoolMm + 1031;
    v5 = qword_140C6B0D0 + 25408 * ProcessorNodeNumber;
    *(_DWORD *)(a1 + 33364) = *(unsigned __int8 *)(v5 + 22932);
    *(_DWORD *)(a1 + 33368) = *(_DWORD *)(v5 + 22928);
    *(_DWORD *)(a1 + 33360) = ((_DWORD)ProcessorNodeNumber << byte_140C6570D) | (__rdtsc() >> 4) & (unsigned __int16)((1 << byte_140C6570E) - 1);
    MiInitializePageColorBase(0LL, ProcessorNodeNumber + 1, (__int64)v9);
    v9[0] = v6;
    if ( (unsigned int)MiCreateUltraThreadContext((__int64)(v4 + 1544), (__int64)v9, 8, 1u) )
    {
      v7 = MiReservePtes((__int64)&qword_140C695C0, 1u);
      v4[1578] = v7;
      if ( v7 )
      {
        result = 1LL;
        v4[1577] = *(_QWORD *)(376LL * (unsigned int)ProcessorNodeNumber + qword_140C65720 + 368);
        *(_QWORD *)(a1 + 33592) = v4;
        return result;
      }
      MiDeleteUltraThreadContext((__int64)(v4 + 1544));
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    MmDeleteProcessor(a1);
  }
  return 0LL;
}
