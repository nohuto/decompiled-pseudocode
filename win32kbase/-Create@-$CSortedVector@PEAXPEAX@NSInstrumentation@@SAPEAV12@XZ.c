_QWORD *NSInstrumentation::CSortedVector<void *,void *>::Create()
{
  _QWORD *Pool2; // rbx
  _QWORD *result; // rax
  __int64 v2; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 56LL, 1665758037LL);
  if ( !Pool2 )
    return 0LL;
  v2 = ExAllocatePool2(262LL, 0x2000LL, 1665758037LL);
  if ( !v2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  Pool2[5] = 0LL;
  Pool2[6] = v2;
  result = Pool2;
  Pool2[4] = 512LL;
  *((_DWORD *)Pool2 + 6) = 0;
  *((_DWORD *)Pool2 + 7) = 0;
  *Pool2 = 0LL;
  *((_DWORD *)Pool2 + 4) = 0;
  return result;
}
