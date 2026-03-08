/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x140735A88
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140736DF0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlUnicodeStringCopy @ 0x1402B3164 (RtlUnicodeStringCopy.c)
 *     PsGetJobSilo @ 0x1402B60C0 (PsGetJobSilo.c)
 *     PsIsThreadInSilo @ 0x1402B6178 (PsIsThreadInSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspStorageMakeSlotReadOnly @ 0x1407359D8 (PspStorageMakeSlotReadOnly.c)
 *     VrpAllocateKeyContext @ 0x140735DF0 (VrpAllocateKeyContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x140735E40 (CmGetRootKeyObjectForSilo.c)
 *     PsInsertSiloContext @ 0x140738510 (PsInsertSiloContext.c)
 *     CmInitSiloNamespace @ 0x1407388F8 (CmInitSiloNamespace.c)
 *     VrpIncrementSiloCount @ 0x14073895C (VrpIncrementSiloCount.c)
 *     CmSetCallbackObjectContext @ 0x140738C30 (CmSetCallbackObjectContext.c)
 *     VrpFreeKeyContext @ 0x14078D308 (VrpFreeKeyContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     PsRemoveSiloContext @ 0x1409A9700 (PsRemoveSiloContext.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        ULONG_PTR *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  UNICODE_STRING *v6; // rsi
  void *RootKeyObjectForSilo; // r15
  int JobSilo; // ebx
  PVOID PoolWithTag; // rax
  PVOID v10; // rbx
  __int64 KeyContext; // rax
  __int128 v12; // xmm0
  __int64 Pool2; // rax
  int v16; // [rsp+A8h] [rbp+48h]

  Object = 0LL;
  v6 = 0LL;
  v16 = 0;
  RootKeyObjectForSilo = 0LL;
  if ( a2 < 8 )
    goto LABEL_2;
  JobSilo = ObCreateObjectEx(0, VrpJobContextType, 0, 1);
  if ( JobSilo < 0 )
    goto LABEL_25;
  memset(0LL, 0, 0x60uLL);
  MEMORY[0x10] = 0LL;
  MEMORY[0x20] = 0LL;
  MEMORY[0x40] = 16LL;
  MEMORY[0x30] = 0LL;
  MEMORY[0x38] = 0LL;
  MEMORY[0x48] = 0LL;
  MEMORY[0x28] = 8LL;
  if ( !is_mul_ok(0LL, 8uLL) )
  {
    JobSilo = -1073741675;
LABEL_11:
    if ( MEMORY[0x48] )
      ExFreePoolWithTag(MEMORY[0x48], 0x72615452u);
    MEMORY[0x20] = 0LL;
    MEMORY[0x30] = 0LL;
    MEMORY[0x40] = 0LL;
    goto LABEL_25;
  }
  if ( !is_mul_ok(0x20uLL, 8uLL) )
  {
    JobSilo = -1073741675;
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x72615452u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    JobSilo = -1073741801;
    goto LABEL_11;
  }
  memset(PoolWithTag, 0, 0x100uLL);
  MEMORY[0x48] = v10;
  MEMORY[0x38] = 32LL;
  JobSilo = VrpIncrementSiloCount();
  if ( JobSilo >= 0 )
  {
    MEMORY[0x58] = 1;
    JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 0x52566D43u, (__int64)&Object, 0LL, 0LL);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
        {
LABEL_2:
          JobSilo = -1073741811;
          goto LABEL_27;
        }
        MEMORY[0] = MEMORY[0x5B0];
        KeyContext = VrpAllocateKeyContext(0LL);
        v6 = (UNICODE_STRING *)KeyContext;
        if ( !KeyContext
          || (v12 = MEMORY[0x5B0],
              *(_WORD *)(KeyContext + 32) = 1,
              *(_OWORD *)KeyContext = v12,
              Pool2 = ExAllocatePool2(256LL, CmRegistryRootName.Length, 1734693462LL),
              (v6[1].Buffer = (wchar_t *)Pool2) == 0LL) )
        {
          JobSilo = -1073741670;
          goto LABEL_27;
        }
        v6[1].Length = 0;
        v6[1].MaximumLength = CmRegistryRootName.Length;
        RtlUnicodeStringCopy(v6 + 1, &CmRegistryRootName);
        JobSilo = CmInitSiloNamespace(0LL);
        if ( JobSilo >= 0 )
        {
          JobSilo = PsInsertSiloContext(0LL, (unsigned int)VrpSiloContextSlot, 0LL);
          if ( JobSilo >= 0 )
          {
            v16 = 1;
            RootKeyObjectForSilo = (void *)CmGetRootKeyObjectForSilo(0LL);
            JobSilo = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v6, 0LL);
            if ( JobSilo >= 0 )
            {
              v6 = 0LL;
              PspStorageMakeSlotReadOnly(MEMORY[0x5F0], (unsigned int)VrpSiloContextSlot);
              JobSilo = 0;
              goto LABEL_27;
            }
          }
        }
      }
    }
  }
LABEL_25:
  if ( v16 )
    PsRemoveSiloContext(0LL, (unsigned int)VrpSiloContextSlot, 0LL);
LABEL_27:
  if ( RootKeyObjectForSilo )
    ObfDereferenceObject(RootKeyObjectForSilo);
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
