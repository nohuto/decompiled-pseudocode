/*
 * XREFs of ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C006BDDC
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C006BD88 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CChannel::OnProcessDestruction(void **a1)
{
  struct _RTL_GENERIC_TABLE *v2; // rsi
  _QWORD *v3; // rax
  struct _ERESOURCE *v4; // rcx
  void *v5; // rdx
  __int64 v6; // rdi
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    while ( 1 )
    {
      v2 = (struct _RTL_GENERIC_TABLE *)*a1;
      RestartKey = 0LL;
      v3 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
      if ( !v3 )
        break;
      v6 = v3[1];
      RtlDeleteElementGenericTable(v2, v3);
      if ( !v6 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    }
    if ( *a1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *a1);
  }
  v4 = (struct _ERESOURCE *)a1[1];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    v5 = a1[1];
    if ( v5 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  }
}
