/*
 * XREFs of CreateProfileUserName @ 0x1C0091D90
 * Callers:
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x1C00919E0 (NtUserSetSysColors.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C00375A0 (-InitPreviousUserString@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateProfileUserName(NSInstrumentation::CLeakTrackingAllocator *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  struct _UNICODE_STRING *v4; // rdi

  result = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(a1, a2, 0x210uLL, 0x6E707355u);
  v4 = (struct _UNICODE_STRING *)result;
  if ( result )
  {
    if ( qword_1C0295450 )
      qword_1C0295450(result, a1, Win32FreePool);
    v4[32].Buffer = &v4->Length;
    v4[32].MaximumLength = 512;
    v4[32].Length = 0;
    InitPreviousUserString();
    RtlCopyUnicodeString(v4 + 32, &PreviousUserString);
    return (__int64)&v4[32];
  }
  return result;
}
