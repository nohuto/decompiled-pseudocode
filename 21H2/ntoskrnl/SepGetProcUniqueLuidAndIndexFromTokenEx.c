/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1405F56A0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140300534 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405F5440 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1405F55D8 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromTokenEx(char a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  char v4; // si
  unsigned int ProcUniqueLuidAndIndexFromAttributeInfo; // edi
  struct _KTHREAD *CurrentThread; // rax

  v4 = 0;
  ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    if ( !a1 && KeGetCurrentIrql() < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v4 = 1;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    }
    ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                *(_QWORD *)(a2 + 776),
                                                a3,
                                                a4);
    if ( v4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegion();
    }
  }
  return ProcUniqueLuidAndIndexFromAttributeInfo;
}
