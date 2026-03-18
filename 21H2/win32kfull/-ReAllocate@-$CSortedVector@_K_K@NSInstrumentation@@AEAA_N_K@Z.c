/*
 * XREFs of ?ReAllocate@?$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z @ 0x1C029D0F8
 * Callers:
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C001053C (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C00EA2A8 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::ReAllocate(
        __int64 a1,
        unsigned __int64 a2)
{
  void *Pool2; // rax
  void *v5; // rdi
  char result; // al

  if ( !is_mul_ok(0x10uLL, a2) )
    return 0;
  Pool2 = (void *)ExAllocatePool2(262LL, 16 * a2, 1665758037LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  memmove(Pool2, *(const void **)(a1 + 48), 16LL * *(_QWORD *)(a1 + 32));
  ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  result = 1;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
