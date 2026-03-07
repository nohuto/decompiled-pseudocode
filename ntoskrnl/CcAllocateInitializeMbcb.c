_QWORD *CcAllocateInitializeMbcb()
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x624D6343u);
  if ( result )
  {
    *(_WORD *)result = 763;
    result[6] = result + 2;
    result[7] = result + 2;
    result[2] = result + 6;
    result[3] = result + 6;
    *((_DWORD *)result + 18) = -1;
    result[5] = -1LL;
    result[11] = result + 12;
  }
  return result;
}
