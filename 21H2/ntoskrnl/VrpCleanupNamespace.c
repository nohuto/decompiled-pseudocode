/*
 * XREFs of VrpCleanupNamespace @ 0x1407F612C
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407F5F80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpJobContextDelete @ 0x1407F8750 (VrpJobContextDelete.c)
 * Callees:
 *     VrpUnloadDifferencingHive @ 0x1407F6200 (VrpUnloadDifferencingHive.c)
 *     VrpDestroyNamespaceNode @ 0x1407F6410 (VrpDestroyNamespaceNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall VrpCleanupNamespace(__int64 a1)
{
  __int64 i; // rax
  _QWORD *v3; // rdx
  void *v4; // rcx
  _WORD *v5; // rdi
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 84) = 1;
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(a1 + 48) )
  {
    if ( is_mul_ok(*(_QWORD *)(a1 + 40), 0LL) )
      v3 = *(_QWORD **)(a1 + 72);
    else
      v3 = 0LL;
    VrpDestroyNamespaceNode(a1, *v3);
  }
  v4 = *(void **)(a1 + 72);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72615452u);
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  while ( 1 )
  {
    v5 = *(_WORD **)(a1 + 24);
    if ( !v5 )
      break;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v5;
    *(_QWORD *)&String1.Length = 0LL;
    String1.Buffer = v5 + 5;
    String1.MaximumLength = v5[4];
    String1.Length = String1.MaximumLength;
    VrpUnloadDifferencingHive(&String1);
    ExFreePoolWithTag(v5, 0x67655256u);
  }
}
