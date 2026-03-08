/*
 * XREFs of HMValidateSharedHandle @ 0x1C003DE88
 * Callers:
 *     NtUserGetUniformSpaceMapping @ 0x1C0013860 (NtUserGetUniformSpaceMapping.c)
 *     DrvGetCurrentDpiInfo @ 0x1C003CBE8 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C003DF40 (NtUserGetDpiForMonitor.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0172020 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0172660 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(int a1)
{
  __int16 v1; // r8d^2
  unsigned int v2; // ecx
  _QWORD *v3; // rsi
  char *v4; // rbx
  __int64 v5; // rdi
  __int16 v6; // r8
  __int64 result; // rax

  v1 = HIWORD(a1);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v2 = dword_1C02D0E10 * (unsigned __int16)a1,
        v3 = gpKernelHandleTable,
        v4 = (char *)qword_1C02D0E08 + v2,
        v5 = 3 * ((__int64)v2 >> 5),
        v6 = v1 & 0x7FFF,
        (v1 & 0x7FFF) != *((_WORD *)v4 + 13))
    && v6 != 0x7FFF
    && (v6 || !PsGetCurrentProcessWow64Process())
    || (v4[25] & 1) != 0
    || v4[24] != 12
    || (result = v3[v5]) == 0 )
  {
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
