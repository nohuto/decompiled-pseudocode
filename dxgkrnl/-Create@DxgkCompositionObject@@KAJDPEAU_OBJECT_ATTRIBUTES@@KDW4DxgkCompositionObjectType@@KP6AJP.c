/*
 * XREFs of ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C0014210
 * Callers:
 *     NtCreateCompositionSurfaceHandle @ 0x1C0014450 (NtCreateCompositionSurfaceHandle.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0075720 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0075960 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     ?Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z @ 0x1C007B534 (-Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z.c)
 *     NtFlipObjectCreate @ 0x1C00801E0 (NtFlipObjectCreate.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1C035C820 (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCompositionObject::Create(
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
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  NTSTATUS LocallyUniqueId; // eax
  PVOID v14; // rcx
  int v15; // eax
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF

  Object[0] = 0LL;
  if ( (unsigned int)(a5 - 1) > 4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LOBYTE(a4) = 1;
    v10 = ObCreateObject(a1, g_pDxgkCompositionObjectType, a2, a4, 0LL, a6, 0, 0, Object);
    if ( v10 >= 0 )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      *((_DWORD *)Object[0] + 2) = ProcessSessionId;
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object[0] + 3);
      v14 = Object[0];
      v10 = LocallyUniqueId;
      if ( LocallyUniqueId < 0 || (v15 = a7(Object[0], a8, (char *)Object[0] + 16), v14 = Object[0], v10 = v15, v15 < 0) )
        ObfDereferenceObject(v14);
      else
        return (unsigned int)ObInsertObject(Object[0], 0LL, a3, 0, 0LL, Handle);
    }
  }
  return (unsigned int)v10;
}
