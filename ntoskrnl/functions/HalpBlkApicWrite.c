_EXCEPTION_REGISTRATION_RECORD *__fastcall HalpBlkApicWrite(int a1, unsigned int a2)
{
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rax
  _EXCEPTION_REGISTRATION_RECORD *result; // rax

  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  if ( BYTE1(ExceptionList[2].Handler) || LOBYTE(ExceptionList[2].Handler) )
  {
    result = (_EXCEPTION_REGISTRATION_RECORD *)a2;
    __writemsr((a1 >> 4) + 2048, a2);
  }
  else
  {
    result = KeGetPcr()->NtTib.ExceptionList[2].Next;
    *(_DWORD *)((char *)&result->Next + a1) = a2;
  }
  return result;
}
