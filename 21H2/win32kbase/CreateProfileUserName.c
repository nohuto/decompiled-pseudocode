/*
 * XREFs of CreateProfileUserName @ 0x1C000C7E0
 * Callers:
 *     NtUserSetSysColors @ 0x1C000B8B0 (NtUserSetSysColors.c)
 *     xxxSystemParametersInfo @ 0x1C000BBC0 (xxxSystemParametersInfo.c)
 *     InitUserScreen @ 0x1C006A78C (InitUserScreen.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C01383A4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138644 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C000C880 (-InitPreviousUserString@@YAXXZ.c)
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateProfileUserName(__int64 a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING *v3; // rdi

  result = Win32AllocPoolWithQuota(528LL, 1852863317LL);
  v3 = (struct _UNICODE_STRING *)result;
  if ( result )
  {
    if ( qword_1C0256FC0 )
      qword_1C0256FC0(result, a1, Win32FreePool);
    v3[32].Buffer = &v3->Length;
    v3[32].MaximumLength = 512;
    v3[32].Length = 0;
    InitPreviousUserString();
    RtlCopyUnicodeString(v3 + 32, &PreviousUserString);
    return (__int64)&v3[32];
  }
  return result;
}
