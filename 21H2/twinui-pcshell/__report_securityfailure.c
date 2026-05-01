/*
 * XREFs of __report_securityfailure @ 0x18008FBD4
 * Callers:
 *     __report_rangecheckfailure @ 0x18008FBB8 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x18008FA78 (__raise_securityfailure.c)
 *     capture_current_context @ 0x18008FC78 (capture_current_context.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(v2);
  capture_current_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_18064F030 = retaddr;
  dword_18064F020 = -1073740791;
  dword_18064F024 = 1;
  dword_18064F038 = 1;
  unk_18064F040 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
