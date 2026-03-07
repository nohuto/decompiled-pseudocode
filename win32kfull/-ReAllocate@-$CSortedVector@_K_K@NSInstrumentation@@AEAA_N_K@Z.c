char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::ReAllocate(
        __int64 a1,
        ULONGLONG a2)
{
  void *Pool2; // rax
  void *v5; // rdi
  char result; // al
  ULONGLONG v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 16LL;
  if ( ULongLongMult(0x10uLL, a2, &v7) < 0 )
    return 0;
  Pool2 = (void *)ExAllocatePool2(262LL, v7, 1665758037LL);
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
