/*
 * XREFs of ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C0095298
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00951A0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CChannel::OnProcessDestruction(char **a1)
{
  char *v2; // rsi
  _QWORD *v3; // rax
  struct _ERESOURCE *v4; // rcx
  char *v5; // rdx
  __int64 v6; // rdi
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    while ( 1 )
    {
      v2 = *a1;
      RestartKey = 0LL;
      v3 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)v2, &RestartKey);
      if ( !v3 )
        break;
      v6 = v3[1];
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)v2, v3);
      if ( !v6 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    }
    if ( *a1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *a1);
  }
  v4 = (struct _ERESOURCE *)a1[1];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    v5 = a1[1];
    if ( v5 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v5);
  }
}
