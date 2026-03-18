/*
 * XREFs of SepAcquireOrderedReadLocks @ 0x14021F6E8
 * Callers:
 *     SepIsSiblingTokenByPointer @ 0x1406953C8 (SepIsSiblingTokenByPointer.c)
 *     NtCompareTokens @ 0x140695A40 (NtCompareTokens.c)
 *     SeTokenCanImpersonate @ 0x1407AFBE0 (SeTokenCanImpersonate.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall SepAcquireOrderedReadLocks(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rax
  struct _ERESOURCE *v6; // rcx
  struct _KTHREAD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 >= a2 )
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v6 = *(struct _ERESOURCE **)(a1 + 48);
  }
  else
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    v6 = *(struct _ERESOURCE **)(a2 + 48);
  }
  return ExAcquireResourceSharedLite(v6, 1u);
}
