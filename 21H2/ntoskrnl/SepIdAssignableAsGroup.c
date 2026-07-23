/*
 * XREFs of SepIdAssignableAsGroup @ 0x140921228
 * Callers:
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall SepIdAssignableAsGroup(__int64 a1, void *a2)
{
  BOOLEAN v2; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // edi
  unsigned int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v2 = 0;
  if ( !a2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v8 = *(_DWORD *)(a1 + 124);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 152);
    do
    {
      v2 = RtlEqualSid(a2, *(PSID *)(v9 + 16LL * v7));
      if ( v2 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v2;
}
