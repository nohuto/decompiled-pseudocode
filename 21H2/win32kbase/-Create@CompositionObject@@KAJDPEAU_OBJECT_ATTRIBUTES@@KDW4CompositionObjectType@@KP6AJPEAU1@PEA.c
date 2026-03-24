/*
 * XREFs of ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0091DF8
 * Callers:
 *     CreateSharedResourceObject @ 0x1C004ADB8 (CreateSharedResourceObject.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00944D4 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     CreateSharedSystemVisualObject @ 0x1C00A4570 (CreateSharedSystemVisualObject.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C01D1EC0 (DCompositionCreateSynchronizationObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::Create(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 (__fastcall *a7)(PVOID, __int64, char *),
        __int64 a8,
        void **Handle)
{
  int v10; // ebx
  NTSTATUS LocallyUniqueId; // eax
  PVOID v12; // rcx
  int v13; // eax
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF

  Object[0] = 0LL;
  if ( (unsigned int)(a5 - 1) > 4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = ObCreateObject(0LL, ExCompositionObjectType, a2, a4, 0LL, a6, 0, 0, Object);
    if ( v10 >= 0 )
    {
      *(_DWORD *)Object[0] = gSessionId;
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object[0] + 2);
      v12 = Object[0];
      v10 = LocallyUniqueId;
      if ( LocallyUniqueId < 0 || (v13 = a7(Object[0], a8, (char *)Object[0] + 8), v12 = Object[0], v10 = v13, v13 < 0) )
        ObfDereferenceObject(v12);
      else
        return (unsigned int)ObInsertObject(Object[0], 0LL, a3, 0, 0LL, Handle);
    }
  }
  return (unsigned int)v10;
}
