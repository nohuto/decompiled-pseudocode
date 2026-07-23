/*
 * XREFs of VrpCleanupNamespace @ 0x1405D61B0
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D2FAC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpJobContextDelete @ 0x140882940 (VrpJobContextDelete.c)
 * Callees:
 *     VrpDestroyNamespaceNode @ 0x1405D3260 (VrpDestroyNamespaceNode.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall VrpCleanupNamespace(__int64 a1)
{
  __int64 i; // rax
  __int64 *v3; // rdx
  _WORD *v4; // rdi
  void *v5; // rcx
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 84) = 1;
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(a1 + 48) )
  {
    if ( is_mul_ok(*(_QWORD *)(a1 + 40), 0LL) )
      v3 = *(__int64 **)(a1 + 72);
    else
      v3 = 0LL;
    VrpDestroyNamespaceNode((_QWORD *)a1, *v3);
  }
  v5 = *(void **)(a1 + 72);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72615452u);
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  while ( 1 )
  {
    v4 = *(_WORD **)(a1 + 24);
    if ( !v4 )
      break;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v4;
    *(_QWORD *)&String1.Length = 0LL;
    String1.Buffer = v4 + 5;
    String1.MaximumLength = v4[4];
    String1.Length = String1.MaximumLength;
    VrpUnloadDifferencingHive(&String1);
    ExFreePoolWithTag(v4, 0x67655256u);
  }
}
