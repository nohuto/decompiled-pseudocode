char __fastcall NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(__int64 a1, unsigned __int64 a2)
{
  void *Pool2; // rax
  void *v5; // rdi
  void *v6; // rbx
  char result; // al

  if ( !is_mul_ok(0x10uLL, a2) )
    return 0;
  Pool2 = (void *)ExAllocatePool2(262LL, 16 * a2, 1665758037LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  v6 = *(void **)(a1 + 48);
  memmove(Pool2, v6, 16LL * *(_QWORD *)(a1 + 32));
  ExFreePoolWithTag(v6, 0);
  result = 1;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
