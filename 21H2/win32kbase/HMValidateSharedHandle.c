/*
 * XREFs of HMValidateSharedHandle @ 0x1C0030048
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C002FE40 (NtUserGetDpiForMonitor.c)
 *     ValidateHmonitor @ 0x1C0030100 (ValidateHmonitor.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     NtUserGetHDevName @ 0x1C0046FB0 (NtUserGetHDevName.c)
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00680B0 (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1C00A7004 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C00B1C60 (NtUserGetUniformSpaceMapping.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C015BD40 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C015C5F0 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  _QWORD *v3; // rsi
  char *v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  v2 = a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v3 = gpKernelHandleTable,
        v2 = a1 >> 16,
        v4 = (char *)qword_1C0294B68 + (unsigned int)(unsigned __int16)a1 * dword_1C0294B70,
        v5 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0294B70) >> 5),
        LOWORD(v2) = WORD1(a1) & 0x7FFF,
        (WORD1(a1) & 0x7FFF) != *((_WORD *)v4 + 13))
    && (_WORD)v2 != 0x7FFF
    && ((_WORD)v2 || !PsGetCurrentProcessWow64Process())
    || (v4[25] & 1) != 0
    || v4[24] != 12
    || (result = v3[v5]) == 0 )
  {
    UserSetLastError(1461LL, a2, v2);
    return 0LL;
  }
  return result;
}
