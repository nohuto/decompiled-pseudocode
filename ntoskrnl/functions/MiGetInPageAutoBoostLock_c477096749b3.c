_QWORD *MiGetInPageAutoBoostLock()
{
  _QWORD *result; // rax

  result = (_QWORD *)MiAllocatePool(64LL, 8LL, 1095330125LL);
  if ( result )
    *result = 1LL;
  return result;
}
