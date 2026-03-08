/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1402EF41C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140247394 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14039D0A0 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1402EF4D0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromTokenEx(char a1, __int64 a2, __int64 a3, __int64 a4)
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
      v4 = 1;
      --CurrentThread->KernelApcDisable;
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
