/*
 * XREFs of HMValidateSharedHandle @ 0x1C000F9A8
 * Callers:
 *     NtUserGetUniformSpaceMapping @ 0x1C000D540 (NtUserGetUniformSpaceMapping.c)
 *     UserGetHDevFromMonitor @ 0x1C000F634 (UserGetHDevFromMonitor.c)
 *     NtUserGetHDevName @ 0x1C000F660 (NtUserGetHDevName.c)
 *     NtUserGetDpiForMonitor @ 0x1C000F770 (NtUserGetDpiForMonitor.c)
 *     ValidateHmonitor @ 0x1C000F990 (ValidateHmonitor.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0130320 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0130580 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(unsigned __int64 a1)
{
  char *v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 result; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v2 = (char *)qword_1C024FD58 + (unsigned int)(unsigned __int16)a1 * dword_1C024FD60,
        GetDomainLockRef(14LL),
        v4 = gpKernelHandleTable,
        v5 = a1 >> 16,
        v6 = 3LL * (unsigned int)((v2 - (char *)qword_1C024FD58) >> 5),
        (_WORD)v5 != *((_WORD *)v2 + 13))
    && (_WORD)v5 != 0xFFFF
    && ((_WORD)v5 || !PsGetCurrentProcessWow64Process(v3))
    || (v2[25] & 1) != 0
    || v2[24] != 12
    || (result = v4[v6]) == 0 )
  {
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
