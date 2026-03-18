/*
 * XREFs of SeQueryServerSiloToken @ 0x1407DEF60
 * Callers:
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     SepCreateClientSecurityEx @ 0x14071D960 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CF008 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     PsGetSiloBySessionId @ 0x140742388 (PsGetSiloBySessionId.c)
 */

__int64 __fastcall SeQueryServerSiloToken(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v5 = *(_DWORD *)(a1 + 120);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return PsGetSiloBySessionId(v5, a2);
}
