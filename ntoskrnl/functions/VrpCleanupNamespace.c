void __fastcall VrpCleanupNamespace(__int64 a1)
{
  __int64 i; // rax
  __int64 *v3; // rdx
  void *v4; // rcx
  _WORD *v5; // rdi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 84) = 1;
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(a1 + 48) )
  {
    if ( is_mul_ok(*(_QWORD *)(a1 + 40), 0LL) )
      v3 = *(__int64 **)(a1 + 72);
    else
      v3 = 0LL;
    VrpDestroyNamespaceNode((size_t *)a1, *v3);
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
    v6[0] = 0LL;
    v6[1] = v5 + 5;
    WORD1(v6[0]) = v5[4];
    LOWORD(v6[0]) = WORD1(v6[0]);
    VrpUnloadDifferencingHive(v6);
    ExFreePoolWithTag(v5, 0x67655256u);
  }
}
