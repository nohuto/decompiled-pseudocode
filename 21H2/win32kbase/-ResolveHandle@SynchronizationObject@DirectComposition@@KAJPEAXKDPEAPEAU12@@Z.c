/*
 * XREFs of ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C02137A4
 * Callers:
 *     NtDCompositionCommitChannel @ 0x1C0012460 (NtDCompositionCommitChannel.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C0012DC0 (NtDCompositionSubmitDWMBatch.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C0210D70 (DCompositionCreateSynchronizationObject.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C02112B0 (NtDCompositionCommitSynchronizationObject.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0093FC8 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::SynchronizationObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct DirectComposition::SynchronizationObject **a4)
{
  __int64 result; // rax
  struct DirectComposition::SynchronizationObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 3, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
