/*
 * XREFs of HalpBlkApicRead @ 0x140B13104
 * Callers:
 *     HalpBlkApicInitializeLocalUnit @ 0x140B12FB0 (HalpBlkApicInitializeLocalUnit.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpBlkApicRead(int a1)
{
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rax

  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  if ( BYTE1(ExceptionList[2].Handler) || LOBYTE(ExceptionList[2].Handler) )
    return __readmsr((a1 >> 4) + 2048);
  else
    return *(unsigned int *)((char *)&KeGetPcr()->NtTib.ExceptionList[2].Next->Next + a1);
}
