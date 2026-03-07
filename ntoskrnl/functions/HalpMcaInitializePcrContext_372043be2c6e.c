int HalpMcaInitializePcrContext()
{
  KPCR *v0; // rax
  __int64 v1; // rbx
  KPCR *Pcr; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  ULONG_PTR v5; // rdi
  void *v6; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  LODWORD(v0) = KeGetCurrentProcessorNumberEx(&ProcNumber);
  v1 = (unsigned int)v0;
  if ( !(_DWORD)v0 && !HalpMcaPcrContextData )
  {
    v5 = 192 * (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
    v6 = (void *)HalpMmAllocCtxAlloc(v5, v5);
    HalpMcaPcrContextData = (__int64)v6;
    if ( !v6 )
      KeBugCheckEx(0xACu, v5, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x226uLL);
    LODWORD(v0) = (unsigned int)memset(v6, 0, (unsigned int)v5);
  }
  Pcr = KeGetPcr();
  if ( !HalpHvWheaEnlightenedCpuManager )
  {
    if ( !*(_QWORD *)&Pcr->HalReserved[6] )
    {
      v3 = HalpMcaPcrContextData + 192 * v1;
      *(_QWORD *)&Pcr->HalReserved[6] = v3;
      *(_QWORD *)(v3 + 184) = 0LL;
      *(_DWORD *)(v3 + 172) = v1;
    }
    v0 = KeGetPcr();
    v4 = *(_QWORD *)&v0->HalReserved[6];
    if ( !*(_BYTE *)(v4 + 160) )
    {
      KeInitializeDpc((PRKDPC)(v4 + 48), (PKDEFERRED_ROUTINE)HalpCmciDeferredRoutine, *(PVOID *)&v0->HalReserved[6]);
      LODWORD(v0) = KeSetTargetProcessorDpcEx((PKDPC)(v4 + 48), &ProcNumber);
      *(_BYTE *)(v4 + 160) = 1;
    }
  }
  return (int)v0;
}
