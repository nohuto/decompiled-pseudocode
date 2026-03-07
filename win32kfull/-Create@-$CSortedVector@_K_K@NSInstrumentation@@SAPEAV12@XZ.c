_QWORD *NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Create()
{
  _QWORD *Pool2; // rbx
  __int64 v1; // rax
  _QWORD *result; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 56LL, 1665758037LL);
  if ( Pool2 )
  {
    v1 = ExAllocatePool2(262LL, 0x2000LL, 1665758037LL);
    if ( v1 )
    {
      Pool2[5] = 0LL;
      Pool2[6] = v1;
      result = Pool2;
      Pool2[4] = 512LL;
      *((_DWORD *)Pool2 + 6) = 0;
      *((_DWORD *)Pool2 + 7) = 0;
      *Pool2 = 0LL;
      *((_DWORD *)Pool2 + 4) = 0;
      return result;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  return 0LL;
}
