_QWORD *__fastcall MiAllocateImportList(unsigned __int64 a1)
{
  _QWORD *result; // rax

  if ( a1 > 0x1FFFFFFE )
    return 0LL;
  result = MiAllocatePool(256, (unsigned int)(8 * a1 + 8), 0x54446D4Du);
  if ( result )
    *result = a1;
  return result;
}
