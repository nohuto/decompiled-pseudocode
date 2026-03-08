/*
 * XREFs of VerifierIoDisconnectInterruptEx @ 0x140AE1940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterruptEx(int *a1)
{
  void *v1; // rbx
  int v3; // ecx
  __int64 v4; // rcx

  v1 = 0LL;
  v3 = *a1;
  if ( (VfRuleClasses & 0x800) == 0 || !ViCtxInitializedIsrStateBlocks )
    goto LABEL_9;
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    v4 = *((_QWORD *)a1 + 1);
  }
  else
  {
    if ( v3 != 3 )
      goto LABEL_9;
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL);
  }
  if ( v4 )
    v1 = *(void **)(v4 + 48);
LABEL_9:
  ((void (__fastcall *)(int *))pXdvIoDisconnectInterruptEx)(a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
