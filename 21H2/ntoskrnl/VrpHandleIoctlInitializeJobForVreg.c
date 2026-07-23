/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1405D3110 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsGetJobSilo @ 0x140200050 (PsGetJobSilo.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsIsThreadInSilo @ 0x14027DEF8 (PsIsThreadInSilo.c)
 *     RtlUnicodeStringCopy @ 0x1402AB600 (RtlUnicodeStringCopy.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     VrpIncrementSiloCount @ 0x1405D2494 (VrpIncrementSiloCount.c)
 *     CmInitSiloNamespace @ 0x1405D2580 (CmInitSiloNamespace.c)
 *     PsInsertSiloContext @ 0x1405D25C0 (PsInsertSiloContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x1405D263C (CmGetRootKeyObjectForSilo.c)
 *     VrpDereferenceJobContext @ 0x1405D2914 (VrpDereferenceJobContext.c)
 *     PsMakeSiloContextPermanent @ 0x1405D2930 (PsMakeSiloContextPermanent.c)
 *     CmSetCallbackObjectContext @ 0x1405D5830 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x1405D5A24 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1405D5A80 (VrpFreeKeyContext.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     VrpInitializeNamespaceNodeList @ 0x140863DE8 (VrpInitializeNamespaceNodeList.c)
 *     PsRemoveSiloContext @ 0x140905CD0 (PsRemoveSiloContext.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        HANDLE *a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID Object,
        __int64 a6)
{
  UNICODE_STRING *v8; // rsi
  struct _DMA_ADAPTER *RootKeyObjectForSilo; // r15
  int JobSilo; // ebx
  _QWORD *v11; // rdi
  __int64 v12; // r14
  char IsThreadInSilo; // al
  PVOID v14; // rcx
  __int64 KeyContext; // rax
  wchar_t *PoolWithTag; // rax
  PVOID v18; // [rsp+98h] [rbp+48h] BYREF

  Object = 0LL;
  v18 = 0LL;
  v8 = 0LL;
  a6 = 0LL;
  RootKeyObjectForSilo = 0LL;
  if ( a2 >= 8 )
  {
    JobSilo = ObCreateObject(0, VrpJobContextType, 0, 1, 0, 96, 0, 0, (__int64)&v18);
    if ( JobSilo < 0 )
    {
      v11 = v18;
    }
    else
    {
      v11 = v18;
      memset(v18, 0, 0x60uLL);
      v11[2] = 0LL;
      JobSilo = VrpInitializeNamespaceNodeList(v11);
      if ( JobSilo >= 0 )
      {
        JobSilo = VrpIncrementSiloCount();
        if ( JobSilo >= 0 )
        {
          *((_DWORD *)v11 + 22) = 1;
          JobSilo = ObReferenceObjectByHandleWithTag(*a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
          if ( JobSilo >= 0 )
          {
            JobSilo = PsGetJobSilo((__int64)Object);
            if ( JobSilo >= 0 )
            {
              v12 = a6;
              IsThreadInSilo = PsIsThreadInSilo((__int64)KeGetCurrentThread(), a6);
              v11 = v18;
              if ( IsThreadInSilo )
              {
                JobSilo = -1073741811;
              }
              else
              {
                v14 = v18;
                *(_OWORD *)v18 = *(_OWORD *)(v12 + 1240);
                KeyContext = VrpAllocateKeyContext(v14);
                v8 = (UNICODE_STRING *)KeyContext;
                if ( KeyContext
                  && (*(_OWORD *)KeyContext = *(_OWORD *)(v12 + 1240),
                      *(_WORD *)(KeyContext + 32) = 1,
                      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, CmRegistryRootName.Length, 0x67655256u),
                      (v8[1].Buffer = PoolWithTag) != 0LL) )
                {
                  v8[1].Length = 0;
                  v8[1].MaximumLength = CmRegistryRootName.Length;
                  RtlUnicodeStringCopy(v8 + 1, &CmRegistryRootName);
                  JobSilo = CmInitSiloNamespace(v12);
                  if ( JobSilo >= 0 )
                  {
                    JobSilo = PsInsertSiloContext(v12, VrpSiloContextSlot, (__int64)v11);
                    if ( JobSilo >= 0 )
                    {
                      RootKeyObjectForSilo = (struct _DMA_ADAPTER *)CmGetRootKeyObjectForSilo(v12);
                      JobSilo = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v8, 0LL);
                      if ( JobSilo < 0 )
                      {
                        PsRemoveSiloContext(v12, (unsigned int)VrpSiloContextSlot, 0LL);
                      }
                      else
                      {
                        v8 = 0LL;
                        PsMakeSiloContextPermanent(v12, (unsigned int)VrpSiloContextSlot);
                        JobSilo = 0;
                      }
                    }
                  }
                }
                else
                {
                  JobSilo = -1073741670;
                }
              }
            }
          }
        }
      }
    }
    if ( v11 )
      VrpDereferenceJobContext(v11);
    if ( RootKeyObjectForSilo )
      HalPutDmaAdapter(RootKeyObjectForSilo);
    if ( v8 )
      VrpFreeKeyContext(v8);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)JobSilo;
}
