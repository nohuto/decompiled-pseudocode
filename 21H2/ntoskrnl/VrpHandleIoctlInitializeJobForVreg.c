/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x140690378
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140692780 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140208AD8 (RtlUnicodeStringCopy.c)
 *     PsGetJobSilo @ 0x140212000 (PsGetJobSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsThreadInSilo @ 0x1402F6170 (PsIsThreadInSilo.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     VrpDereferenceJobContext @ 0x140690600 (VrpDereferenceJobContext.c)
 *     CmInitSiloNamespace @ 0x140690914 (CmInitSiloNamespace.c)
 *     PsMakeSiloContextPermanent @ 0x140690B00 (PsMakeSiloContextPermanent.c)
 *     CmGetRootKeyObjectForSilo @ 0x140690BDC (CmGetRootKeyObjectForSilo.c)
 *     PsInsertSiloContext @ 0x140692A50 (PsInsertSiloContext.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x140693188 (VrpAllocateKeyContext.c)
 *     VrpIncrementSiloCount @ 0x1406931E4 (VrpIncrementSiloCount.c)
 *     VrpFreeKeyContext @ 0x1406C29BC (VrpFreeKeyContext.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     VrpInitializeNamespaceNodeList @ 0x140926B88 (VrpInitializeNamespaceNodeList.c)
 *     PsRemoveSiloContext @ 0x1409AB7E0 (PsRemoveSiloContext.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
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
  void *RootKeyObjectForSilo; // r15
  int JobSilo; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 KeyContext; // rax
  wchar_t *PoolWithTag; // rax

  Object = 0LL;
  v8 = 0LL;
  a6 = 0LL;
  RootKeyObjectForSilo = 0LL;
  if ( a2 >= 8 )
  {
    JobSilo = ObCreateObject(0, VrpJobContextType, 0, 1);
    if ( JobSilo >= 0 )
    {
      memset(0LL, 0, 0x60uLL);
      MEMORY[0x10] = 0LL;
      JobSilo = VrpInitializeNamespaceNodeList(0LL);
      if ( JobSilo >= 0 )
      {
        JobSilo = VrpIncrementSiloCount(v12, v11, v13, v14, 0LL);
        if ( JobSilo >= 0 )
        {
          MEMORY[0x58] = 1;
          JobSilo = ObReferenceObjectByHandleWithTag(*a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
          if ( JobSilo >= 0 )
          {
            JobSilo = PsGetJobSilo((__int64)Object);
            if ( JobSilo >= 0 )
            {
              v15 = a6;
              if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), a6) )
              {
                JobSilo = -1073741811;
              }
              else
              {
                MEMORY[0] = *(_OWORD *)(v15 + 1432);
                KeyContext = VrpAllocateKeyContext(0LL);
                v8 = (UNICODE_STRING *)KeyContext;
                if ( KeyContext
                  && (*(_OWORD *)KeyContext = *(_OWORD *)(v15 + 1432),
                      *(_WORD *)(KeyContext + 32) = 1,
                      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, CmRegistryRootName.Length, 0x67655256u),
                      (v8[1].Buffer = PoolWithTag) != 0LL) )
                {
                  v8[1].Length = 0;
                  v8[1].MaximumLength = CmRegistryRootName.Length;
                  RtlUnicodeStringCopy(v8 + 1, &CmRegistryRootName);
                  JobSilo = CmInitSiloNamespace(v15);
                  if ( JobSilo >= 0 )
                  {
                    JobSilo = PsInsertSiloContext(v15, (unsigned int)VrpSiloContextSlot, 0LL);
                    if ( JobSilo >= 0 )
                    {
                      RootKeyObjectForSilo = (void *)CmGetRootKeyObjectForSilo(v15);
                      JobSilo = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v8, 0LL);
                      if ( JobSilo < 0 )
                      {
                        PsRemoveSiloContext(v15, (unsigned int)VrpSiloContextSlot, 0LL);
                      }
                      else
                      {
                        v8 = 0LL;
                        PsMakeSiloContextPermanent(v15, (unsigned int)VrpSiloContextSlot);
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
    if ( RootKeyObjectForSilo )
      ObfDereferenceObject(RootKeyObjectForSilo);
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
