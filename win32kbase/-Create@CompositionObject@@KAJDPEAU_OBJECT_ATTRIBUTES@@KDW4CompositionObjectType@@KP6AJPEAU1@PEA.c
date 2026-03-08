/*
 * XREFs of ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00AD178
 * Callers:
 *     CreateSharedResourceObject @ 0x1C00A19E4 (CreateSharedResourceObject.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00B1118 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C0247B90 (DCompositionCreateSynchronizationObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rax
  NTSTATUS LocallyUniqueId; // eax
  PVOID v17; // rcx
  int v18; // eax
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF

  Object[0] = 0LL;
  if ( (unsigned int)(a5 - 1) > 4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v12 = ObCreateObject(0LL, ExCompositionObjectType, a2, a4, 0LL, a6, 0, 0, Object);
    if ( v12 >= 0 )
    {
      v15 = (_DWORD *)SGDGetUserSessionState(v11, v10, v13, v14);
      *(_DWORD *)Object[0] = *v15;
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object[0] + 2);
      v17 = Object[0];
      v12 = LocallyUniqueId;
      if ( LocallyUniqueId < 0 || (v18 = a7(Object[0], a8, (char *)Object[0] + 8), v17 = Object[0], v12 = v18, v18 < 0) )
        ObfDereferenceObject(v17);
      else
        return (unsigned int)ObInsertObject(Object[0], 0LL, a3, 0, 0LL, Handle);
    }
  }
  return (unsigned int)v12;
}
