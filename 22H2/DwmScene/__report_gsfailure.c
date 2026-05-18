/*
 * XREFs of __report_gsfailure @ 0x18011F420
 * Callers:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 * Callees:
 *     sub_18011F3BC @ 0x18011F3BC (sub_18011F3BC.c)
 *     capture_previous_context @ 0x18011F4F4 (capture_previous_context.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_18021AD70 = retaddr;
  ContextRecord.Rcx = v2;
  dword_18021AD60 = -1073740791;
  dword_18021AD64 = 1;
  dword_18021AD78 = 1;
  unk_18021AD80 = 2LL;
  sub_18011F3BC((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
